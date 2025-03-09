/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/min2dhm.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_MIN2DHM );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( INT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MIN2DHM )
{ "FT_MIN2DHM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MIN2DHM )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MIN2DHM, "hbnf/min2dhm.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MIN2DHM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MIN2DHM )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_MIN2DHM )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,176,2,0,95,1,93,160,5,
		18,12,1,12,1,176,1,0,176,2,0,95,1,93,
		160,5,50,92,60,18,12,1,12,1,176,1,0,176,
		2,0,95,1,93,160,5,50,92,60,50,12,1,12,
		1,4,3,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

