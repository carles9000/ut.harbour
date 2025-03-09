/*RESULTADO
		 1: Signing OK
		 2: error opening .crt file
		 3: error opening key file
		 4: error creating PrivateKey object
		 5: the Key does not correspond to the Certificate
		 6: error opening file to sign
		 7: error creating cms object
		 8: error asigning data to cms object
		 9: error closing data structure of cms object
		10: error creating out file
		11: error generating final cms file	
*/

#include "hbssl.h"

#include <openssl/cms.h>

HB_FUNC( HB_CMS_SIGNFILE )
{
    BIO *in = NULL, *out = NULL, *archivo = NULL;
    CMS_ContentInfo *cms = NULL;
	X509 *x509;
	EVP_PKEY *priKey;
	OpenSSL_add_all_algorithms();
	OpenSSL_add_all_ciphers();
	int flags = CMS_PARTIAL;

//read the .crt file
    archivo = BIO_new_file(hb_parc(2), "r");
	if (!archivo) {
		hb_retni(2); // error opening .crt file
		return;		
	}
	x509 = PEM_read_bio_X509(archivo, NULL, NULL, NULL);
	BIO_reset(archivo);
	
	
//read the .key file
	archivo = BIO_new_file(hb_parc(3), "r");
	if (!archivo) {
		hb_retni(3);  // error opening key file
		return;
	}
    priKey = PEM_read_bio_PrivateKey(archivo,NULL, NULL, NULL);
	if(!priKey) {
		hb_retni(4); //error creating PrivateKey object
		return;
	}

	if (!X509_check_private_key(x509, priKey)) {
		hb_retni(5); //the Key does not correspond to the Certificate
		return;		
	}	
	
//open file to sign
    in = BIO_new_file(hb_parc(1), "r");
    if (!in) {
		hb_retni(6); //error opening file to sign
		return;		
	}

//create cms object
    cms = CMS_sign(NULL, NULL, NULL, in, flags);
    if (!cms) {
		hb_retni(7); //error creating cms object
		return;		
	}
	
	CMS_SignerInfo *si;
    si = CMS_add1_signer(cms, x509, priKey, EVP_sha1(), flags);
	if (!si) {
		hb_retni(8); //error asigning data to cms object
		return;		
	}

	if (!CMS_final(cms, in, NULL, flags)) {
		hb_retni(9); //error closing data structure of cms object
		return;		
	}

 	
//create file signed
	out = BIO_new_file(hb_parc(4), "wb");
    if (!out) {
		hb_retni(10); //error creating out file
		return;		
	}
    BIO_reset(in);
	
	
	if (!i2d_CMS_bio_stream(out,cms, in, flags)) {//lo graba en formato DER
		hb_retni(11); //error generating final cms file
		return;		
	}
    CMS_ContentInfo_free(cms);
	X509_free(x509);
    BIO_free(in);
    BIO_free(out);
	BIO_free(archivo);	
	hb_retni( 1 );
	return;	
}