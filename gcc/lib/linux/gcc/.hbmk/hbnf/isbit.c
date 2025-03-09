/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/isbit.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ISBIT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_BITTEST );
HB_FUNC_EXTERN( HB_BCODE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ISBIT )
{ "FT_ISBIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ISBIT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_BITTEST", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITTEST )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ISBIT, "hbnf/isbit.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ISBIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ISBIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ISBIT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,12,1,28,26,176,2,
		0,95,2,12,1,28,17,176,3,0,176,4,0,95,
		1,12,1,95,2,20,2,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

