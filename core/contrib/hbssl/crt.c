#include "hbssl.h"
#include "hbapiitm.h"
#include <openssl/cms.h>
#include <openssl/pkcs12.h>
//#include "openssl/applink.c"
#include <openssl/err.h>


// HB_CRT_VALIDATE( cCertFile, @cErr ) --> nError  0: Ok
HB_FUNC(HB_CRT_VALIDATE)
{
	OpenSSL_add_all_algorithms();
	ERR_load_BIO_strings();
	ERR_load_crypto_strings();

	PHB_ITEM cErr = hb_param(2, HB_IT_BYREF);

	BIO *bio = BIO_new_file(hb_parc(1), "r");
	if (bio == NULL)
	{
		hb_retni(1);
		if (cErr)
		{
			hb_itemPutC(cErr, "Error opening PEM file");
		}
		return;
	}

	X509 *cert = PEM_read_bio_X509(bio, NULL, NULL, NULL);
	if (cert == NULL)
	{
		hb_retni(2);
		if (cErr)
		{
			hb_itemPutC(cErr, "Error reading PEM certificate");
		}
		BIO_free(bio);
		return;
	}

	X509_STORE *store = X509_STORE_new();
	X509_STORE_CTX *ctx = X509_STORE_CTX_new();

	if (store == NULL || ctx == NULL)
	{
		hb_retni(3);
		if (cErr)
		{
			hb_itemPutC(cErr, "Error creating verification context");
		}
		X509_free(cert);
		BIO_free(bio);
		return;
	}

	if (X509_STORE_add_cert(store, cert) != 1)
	{
		hb_retni(4);
		if (cErr)
		{
			hb_itemPutC(cErr, "Error adding certificate to trust chain");
		}
		X509_STORE_CTX_free(ctx);
		X509_STORE_free(store);
		X509_free(cert);
		BIO_free(bio);
		return;
	}

	if (X509_STORE_CTX_init(ctx, store, cert, NULL) != 1)
	{
		hb_retni(5);
		if (cErr)
		{
			hb_itemPutC(cErr, "Error initializing verification context");
		}
		X509_STORE_CTX_free(ctx);
		X509_STORE_free(store);
		X509_free(cert);
		BIO_free(bio);
		return;
	}

    if (X509_cmp_current_time(X509_get0_notBefore(cert)) > 0 ||
        X509_cmp_current_time(X509_get0_notAfter(cert)) < 0)
    {
        hb_retni(6);
        if (cErr)
        {
            hb_itemPutC(cErr, "Certificate is expired");
        }
        X509_STORE_CTX_free(ctx);
        X509_STORE_free(store);
        X509_free(cert);
        BIO_free(bio);
        return;
    }

	hb_retni(0); // Certificate is valid
	X509_STORE_CTX_free(ctx);
	X509_STORE_free(store);
	X509_free(cert);
	BIO_free(bio);

	ERR_free_strings();
	EVP_cleanup();
}

// HB_CRT_INFO( cCertFile, @aInfo ) --> nError  0: Ok
HB_FUNC(HB_CRT_INFO)
{
	OpenSSL_add_all_algorithms();
	ERR_load_BIO_strings();
	ERR_load_crypto_strings();

	PHB_ITEM aInfo = hb_param(2, HB_IT_ARRAY);

	BIO *bio = BIO_new_file(hb_parc(1), "r");
	if (bio == NULL)
	{
		hb_retni(1); // Error opening CRT file
		return;
	}

	X509 *cert = PEM_read_bio_X509(bio, NULL, NULL, NULL);
	if (cert == NULL)
	{
		hb_retni(2); // Error reading PEM certificate
		BIO_free(bio);
		return;
	}

	ASN1_TIME *notBefore = X509_get0_notBefore(cert);
	ASN1_TIME *notAfter = X509_get0_notAfter(cert);
	BIO *bio2;
	char buf[32];
	int write = 0;
	bio2 = BIO_new(BIO_s_mem());
	if (bio2)
	{
		if (ASN1_TIME_print(bio2, notBefore))
		{
			write = BIO_read(bio2, buf, 31);
		}
		BIO_free(bio2);
	}
	buf[write] = '\0';
	hb_arraySetC(aInfo, 1, buf);
	bio2 = BIO_new(BIO_s_mem());
	if (bio2)
	{
		if (ASN1_TIME_print(bio2, notAfter))
		{
			write = BIO_read(bio2, buf, 31);
		}
		BIO_free(bio2);
	}
	buf[write] = '\0';
	hb_arraySetC(aInfo, 2, buf);

	X509_NAME *subject = X509_get_subject_name(cert);
	char *subjectName = X509_NAME_oneline(subject, NULL, 0);
	hb_arraySetC(aInfo, 3, subjectName);
	OPENSSL_free(subjectName);

	X509_NAME *issuer = X509_get_issuer_name(cert);
	char *issuerName = X509_NAME_oneline(issuer, NULL, 0);
	hb_arraySetC(aInfo, 4, issuerName);
	OPENSSL_free(issuerName);

	hb_retni(0);
	X509_free(cert);
	BIO_free(bio);
	ERR_free_strings();
	EVP_cleanup();
}