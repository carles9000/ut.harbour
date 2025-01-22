/*
	Comentari del colega Diego Fazio
	Puedes firmar cualquier tipo archivo

	Existen muchos algoritmos de cifrado asi como existen muchos tipos de firmados. Algunos en lo que
	te entregan solo contiene tu contenido cifrado y otros ademas de eso tienen la firma digital. 
	Esto tiene un formato especifico de ahi el tipo de cifrado. 
	
	El mensaje CMS contiene tu dato tal cual, y una firma electronica encriptada con SHA1+RSA y tu dato. 
	Esto ultimo se utiliza para validar tu dato tal cual con la firma realizada. No es una encriptacion 
	del mensaje. Es mas que nada para certificar que ese mensaje es tuyo y no fue alterado. 

	Para realizar esa firma el organismo( el fisco en este caso ) te da un archivo .crt y junto a tu
	clave privada realizas la misma.
	
	RECORDA: Un cop compilades les libs, s'han de posar a barbour\libs que serà el primer lloc d'on enllaça
*/

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