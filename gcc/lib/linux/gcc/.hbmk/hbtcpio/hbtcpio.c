/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbtcpio/hbtcpio.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_TCPIO );
HB_FUNC_EXTERN( HB_VFFROMSOCKET );
HB_FUNC( __HBEXTERN__HBTCPIO__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBTCPIO )
{ "HB_TCPIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TCPIO )}, NULL },
{ "HB_VFFROMSOCKET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFFROMSOCKET )}, NULL },
{ "__HBEXTERN__HBTCPIO__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBTCPIO__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBTCPIO, "hbtcpio/hbtcpio.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBTCPIO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBTCPIO )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBTCPIO__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

