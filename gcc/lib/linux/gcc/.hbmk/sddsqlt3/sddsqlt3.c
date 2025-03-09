/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "sddsqlt3/sddsqlt3.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_SDDSQLITE3_REGISTER );
HB_FUNC_EXTERN( SDDSQLITE3 );
HB_FUNC( __HBEXTERN__SDDSQLT3__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SDDSQLT3 )
{ "HB_SDDSQLITE3_REGISTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SDDSQLITE3_REGISTER )}, NULL },
{ "SDDSQLITE3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SDDSQLITE3 )}, NULL },
{ "__HBEXTERN__SDDSQLT3__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__SDDSQLT3__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SDDSQLT3, "sddsqlt3/sddsqlt3.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SDDSQLT3
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SDDSQLT3 )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__SDDSQLT3__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

