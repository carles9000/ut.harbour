/*
 * Harbour 3.2.0dev (r2104281802)
 * Microsoft Visual C 19.27.29112 (64-bit)
 * Generated C source from "../../../sxtrig.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SX_DEFTRIGGER );
HB_FUNC_EXTERN( SX_SETTRIGGER );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SXTRIG )
{ "SX_DEFTRIGGER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_DEFTRIGGER )}, NULL },
{ "SX_SETTRIGGER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SX_SETTRIGGER )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SXTRIG, "../../../sxtrig.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SXTRIG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SXTRIG )
   #include "hbiniseg.h"
#endif

HB_FUNC( SX_DEFTRIGGER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,58,0,26,53,0,36,63,0,176,1,
		0,92,3,20,1,26,150,0,26,147,0,26,144,0,
		26,141,0,26,138,0,26,135,0,26,132,0,26,129,
		0,26,126,0,26,123,0,26,120,0,26,117,0,25,
		114,25,112,95,1,133,14,0,97,1,0,0,0,26,
		196,255,97,2,0,0,0,26,201,255,97,3,0,0,
		0,26,196,255,97,4,0,0,0,26,191,255,97,5,
		0,0,0,26,186,255,97,6,0,0,0,26,181,255,
		97,7,0,0,0,26,176,255,97,8,0,0,0,25,
		171,97,9,0,0,0,25,167,97,10,0,0,0,25,
		163,97,11,0,0,0,25,159,97,12,0,0,0,25,
		155,97,13,0,0,0,25,151,97,14,0,0,0,25,
		146,36,93,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

