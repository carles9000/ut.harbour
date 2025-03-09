/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/workdays.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_WORKDAYS );
HB_FUNC_EXTERN( DOW );
HB_FUNC_EXTERN( INT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WORKDAYS )
{ "FT_WORKDAYS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_WORKDAYS )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WORKDAYS, "hbnf/workdays.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WORKDAYS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WORKDAYS )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_WORKDAYS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,121,80,3,95,1,100,69,29,179,0,95,
		2,100,69,29,172,0,95,1,95,2,69,29,138,0,
		95,1,95,2,15,28,14,95,2,80,5,95,1,80,
		2,95,5,80,1,176,1,0,95,1,12,1,165,80,
		4,122,8,28,7,174,1,0,25,13,95,4,92,7,
		8,28,6,126,1,2,0,176,1,0,95,2,12,1,
		165,80,4,122,8,28,8,126,2,254,255,25,12,95,
		4,92,7,8,28,5,173,2,0,95,2,95,1,49,
		23,165,80,4,92,7,50,80,5,176,1,0,95,2,
		12,1,23,176,1,0,95,1,12,1,35,28,6,126,
		5,254,255,176,2,0,95,4,92,7,18,12,1,92,
		5,65,95,5,72,80,3,25,28,176,1,0,95,1,
		12,1,122,69,28,17,176,1,0,95,1,12,1,92,
		7,69,28,5,122,80,3,95,3,121,15,28,6,95,
		3,25,3,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

