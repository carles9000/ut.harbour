/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/wda.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ADDWKDY );
HB_FUNC_EXTERN( DOW );
HB_FUNC_EXTERN( INT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WDA )
{ "FT_ADDWKDY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ADDWKDY )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WDA, "hbnf/wda.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WDA
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WDA )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ADDWKDY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,1,0,95,1,12,1,80,3,95,3,
		92,7,8,28,28,95,2,17,92,5,50,92,7,176,
		2,0,95,2,17,92,5,18,12,1,65,72,92,2,
		72,25,39,95,2,95,3,72,92,2,49,92,5,50,
		92,7,176,2,0,95,2,95,3,72,92,2,49,92,
		5,18,12,1,65,72,92,2,72,95,3,49,110,7
	};

	hb_vmExecute( pcode, symbols );
}

