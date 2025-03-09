/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/byt2hex.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BYT2HEX );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_STRTOHEX );
HB_FUNC_EXTERN( LEFT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BYT2HEX )
{ "FT_BYT2HEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BYT2HEX )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_STRTOHEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRTOHEX )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BYT2HEX, "hbnf/byt2hex.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BYT2HEX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BYT2HEX )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BYT2HEX )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,12,1,28,22,176,2,
		0,176,3,0,95,1,122,12,2,12,1,106,2,104,
		0,72,110,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

