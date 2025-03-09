/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbbz2io/hbbz2io.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_BZ2IO );
HB_FUNC( __HBEXTERN__HBBZ2IO__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBBZ2IO )
{ "HB_BZ2IO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2IO )}, NULL },
{ "__HBEXTERN__HBBZ2IO__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBBZ2IO__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBBZ2IO, "hbbz2io/hbbz2io.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBBZ2IO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBBZ2IO )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBBZ2IO__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

