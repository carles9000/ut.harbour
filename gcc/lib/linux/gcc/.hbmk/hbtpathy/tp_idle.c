/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbtpathy/tp_idle.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TP_IDLE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TP_IDLE )
{ "TP_IDLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TP_IDLE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TP_IDLE, "hbtpathy/tp_idle.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TP_IDLE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TP_IDLE )
   #include "hbiniseg.h"
#endif

HB_FUNC( TP_IDLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,100,69,28,9,95,1,28,5,120,
		110,7,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

