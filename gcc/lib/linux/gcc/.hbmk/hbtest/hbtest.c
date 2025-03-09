/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbtest/hbtest.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HBTEST_CALL );
HB_FUNC_EXTERN( HBTEST_SETUP );
HB_FUNC( __HBEXTERN__HBTEST__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBTEST )
{ "HBTEST_CALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBTEST_CALL )}, NULL },
{ "HBTEST_SETUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBTEST_SETUP )}, NULL },
{ "__HBEXTERN__HBTEST__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBTEST__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBTEST, "hbtest/hbtest.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBTEST
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBTEST )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBTEST__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

