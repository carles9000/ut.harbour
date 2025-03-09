/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/hex2dec.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_HEX2DEC );
HB_FUNC_EXTERN( HB_HEXTONUM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HEX2DEC )
{ "FT_HEX2DEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_HEX2DEC )}, NULL },
{ "HB_HEXTONUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HEXTONUM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HEX2DEC, "hbnf/hex2dec.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HEX2DEC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HEX2DEC )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_HEX2DEC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

