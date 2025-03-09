/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/elapmil.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ELAPMIN );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( RIGHT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ELAPMIL )
{ "FT_ELAPMIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ELAPMIN )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ELAPMIL, "hbnf/elapmil.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ELAPMIL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ELAPMIL )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ELAPMIN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,176,2,0,95,2,92,2,12,
		2,12,1,92,60,65,176,1,0,176,3,0,95,2,
		92,2,12,2,12,1,72,176,1,0,176,2,0,95,
		1,92,2,12,2,12,1,92,60,65,176,1,0,176,
		3,0,95,1,92,2,12,2,12,1,72,49,110,7
	};

	hb_vmExecute( pcode, symbols );
}

