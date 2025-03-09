/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbpipeio/hbpipeio.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_PIPEIO );
HB_FUNC_EXTERN( HB_VFFROMPIPES );
HB_FUNC_EXTERN( HB_VFOPENPROCESS );
HB_FUNC( __HBEXTERN__HBPIPEIO__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBPIPEIO )
{ "HB_PIPEIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PIPEIO )}, NULL },
{ "HB_VFFROMPIPES", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFFROMPIPES )}, NULL },
{ "HB_VFOPENPROCESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFOPENPROCESS )}, NULL },
{ "__HBEXTERN__HBPIPEIO__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBPIPEIO__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBPIPEIO, "hbpipeio/hbpipeio.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBPIPEIO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBPIPEIO )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBPIPEIO__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

