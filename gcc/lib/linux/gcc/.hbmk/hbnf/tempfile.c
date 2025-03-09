/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/tempfile.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_TEMPFIL );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_PS );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( HB_FTEMPCREATE );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( FCLOSE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TEMPFILE )
{ "FT_TEMPFIL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_TEMPFIL )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_PS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PS )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "HB_FTEMPCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FTEMPCREATE )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TEMPFILE, "hbnf/tempfile.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TEMPFILE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TEMPFILE )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_TEMPFIL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,1,0,96,1,0,106,2,46,0,176,
		2,0,12,0,72,20,2,176,1,0,96,2,0,9,
		20,2,176,3,0,95,1,12,1,80,1,176,4,0,
		95,1,100,95,2,28,6,92,2,25,3,121,96,4,
		0,12,4,80,3,176,5,0,12,0,92,2,34,28,
		9,176,6,0,95,3,20,1,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

