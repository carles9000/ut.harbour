/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbcups/hbcups.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( CUPSGETDEFAULT );
HB_FUNC_EXTERN( CUPSGETDESTS );
HB_FUNC_EXTERN( CUPSPRINTFILE );
HB_FUNC( __HBEXTERN__HBCUPS__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBCUPS )
{ "CUPSGETDEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CUPSGETDEFAULT )}, NULL },
{ "CUPSGETDESTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( CUPSGETDESTS )}, NULL },
{ "CUPSPRINTFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CUPSPRINTFILE )}, NULL },
{ "__HBEXTERN__HBCUPS__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBCUPS__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBCUPS, "hbcups/hbcups.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBCUPS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBCUPS )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBCUPS__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

