/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "sddmy/sddmy.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_SDDMY_REGISTER );
HB_FUNC_EXTERN( SDDMY );
HB_FUNC( __HBEXTERN__SDDMY__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SDDMY )
{ "HB_SDDMY_REGISTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SDDMY_REGISTER )}, NULL },
{ "SDDMY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SDDMY )}, NULL },
{ "__HBEXTERN__SDDMY__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__SDDMY__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SDDMY, "sddmy/sddmy.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SDDMY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SDDMY )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__SDDMY__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

