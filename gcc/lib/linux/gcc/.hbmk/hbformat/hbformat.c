/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbformat/hbformat.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HBFORMATCODE );
HB_FUNC_EXTERN( __HBFORMAT_BUILDLISTOFFUNCTIONS );
HB_FUNC( __HBEXTERN__HBFORMAT__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBFORMAT )
{ "HBFORMATCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBFORMATCODE )}, NULL },
{ "__HBFORMAT_BUILDLISTOFFUNCTIONS", {HB_FS_PUBLIC}, {HB_FUNCNAME( __HBFORMAT_BUILDLISTOFFUNCTIONS )}, NULL },
{ "__HBEXTERN__HBFORMAT__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBFORMAT__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBFORMAT, "../contrib/hbformat/hbformat.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBFORMAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBFORMAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBFORMAT__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

