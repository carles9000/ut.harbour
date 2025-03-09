/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbamf/hbamf.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( AMF3_DECODE );
HB_FUNC_EXTERN( AMF3_ENCODE );
HB_FUNC_EXTERN( AMF3_FROMWA );
HB_FUNC_EXTERN( AMFSTDIO_READ );
HB_FUNC_EXTERN( AMF_OBJ );
HB_FUNC_EXTERN( AMF_RAW );
HB_FUNC( __HBEXTERN__HBAMF__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBAMF )
{ "AMF3_DECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMF3_DECODE )}, NULL },
{ "AMF3_ENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMF3_ENCODE )}, NULL },
{ "AMF3_FROMWA", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMF3_FROMWA )}, NULL },
{ "AMFSTDIO_READ", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMFSTDIO_READ )}, NULL },
{ "AMF_OBJ", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMF_OBJ )}, NULL },
{ "AMF_RAW", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMF_RAW )}, NULL },
{ "__HBEXTERN__HBAMF__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBAMF__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBAMF, "hbamf/hbamf.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBAMF
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBAMF )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBAMF__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

