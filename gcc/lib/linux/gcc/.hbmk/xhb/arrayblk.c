/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/arrayblk.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_ARRAYBLOCK );
HB_FUNC_EXTERN( PCOUNT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ARRAYBLK )
{ "HB_ARRAYBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ARRAYBLOCK )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ARRAYBLK, "xhb/arrayblk.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ARRAYBLK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ARRAYBLK )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_ARRAYBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,89,36,0,1,0,2,0,1,0,2,0,
		176,1,0,12,0,121,8,28,9,95,255,95,254,1,
		25,10,95,1,165,95,255,95,254,2,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

