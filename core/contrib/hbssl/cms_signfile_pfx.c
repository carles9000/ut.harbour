#include "hbssl.h"
#include "hbapiitm.h"
#include <openssl/cms.h>
#include <openssl/pkcs12.h>
//#include "openssl/applink.c"
#include <openssl/err.h>

HB_FUNC( HB_CMS_SIGNFILE_PFX )
{
	// HB_SignFile( Archivo a firmar, Archivo .pfx, clave, Archivo Firmado)
    BIO *in = NULL, *out = NULL;
    CMS_ContentInfo *cms = NULL;
	X509 *x509;
	EVP_PKEY *priKey;
	FILE *fp;
	PKCS12 *p12;
	STACK_OF(X509) *ca = NULL;
	OpenSSL_add_all_algorithms();
	OpenSSL_add_all_ciphers();
	int flags = CMS_PARTIAL;

    if ((fp = fopen(hb_parc(2), "rb")) == NULL) {
        hb_retni( 2 );
        return;
    }
    p12 = d2i_PKCS12_fp(fp, NULL);
    fclose(fp);
    if (!p12) {
        hb_retni( 3 );
        return;
    }
    if (!PKCS12_parse(p12, hb_parc(3), &priKey, &x509, &ca)) {
        hb_retni( 4 );
        return;
	}
    PKCS12_free(p12);	

//abre el archivo a firmar	
    in = BIO_new_file(hb_parc(1), "r");
    if (!in) {
		hb_retni(5); //error al crear objeto in
		return;		
	}

//crea el cms
    cms = CMS_sign(NULL, NULL, NULL, in, flags);
    if (!cms) {
		hb_retni(6); //error al crear objeto cms
		return;		
	}
	
	CMS_SignerInfo *si;
    si = CMS_add1_signer(cms, x509, priKey, EVP_sha1(), flags);
	if (!si) {
		hb_retni(8); //error al crear objeto cms
		return;		
	}

	if (!CMS_final(cms, in, NULL, flags)) {
		hb_retni(9); //error al crear objeto cms
		return;		
	}
 	
	
	out = BIO_new_file(hb_parc(4), "wb");
    if (!out) {
		hb_retni(10); //error al abrir el archivo toSignFile
		return;		
	}
    BIO_reset(in);
	
	
	//if(!PEM_write_bio_CMS_stream(out,cms, in, flags)) {//lo graba en formato PEM
	//if (!SMIME_write_CMS(out, cms, in, flags)) { //lo graba en formato SMIME
	if (!i2d_CMS_bio_stream(out,cms, in, flags)) {//lo graba en formato DER
		hb_retni(11); //error al grabar el archivo toSignFile
		return;		
	}
    CMS_ContentInfo_free(cms);
	X509_free(x509);
    BIO_free(in);
    BIO_free(out);
	hb_retni( 1 );
	return;	
}