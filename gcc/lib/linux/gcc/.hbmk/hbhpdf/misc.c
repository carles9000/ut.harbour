/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbhpdf/misc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_HPDF_ISVERSION );
HB_FUNC_EXTERN( HB_HPDF_VERSION );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MISC )
{ "HB_HPDF_ISVERSION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_HPDF_ISVERSION )}, NULL },
{ "HB_HPDF_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HPDF_VERSION )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MISC, "hbhpdf/misc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MISC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MISC )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_HPDF_ISVERSION )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,176,1,0,96,4,0,96,5,0,96,6,
		0,20,3,95,4,95,1,15,21,31,35,73,95,4,
		95,1,8,21,28,26,73,95,5,95,2,15,21,31,
		17,73,95,5,95,2,8,21,28,8,73,95,6,95,
		3,16,110,7
	};

	hb_vmExecute( pcode, symbols );
}

