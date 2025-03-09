/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbcomm/hbcomm.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( INBUFSIZE );
HB_FUNC_EXTERN( INCHR );
HB_FUNC_EXTERN( INIT_PORT );
HB_FUNC_EXTERN( ISWORKING );
HB_FUNC_EXTERN( OUTBUFCLR );
HB_FUNC_EXTERN( OUTBUFSIZE );
HB_FUNC_EXTERN( OUTCHR );
HB_FUNC_EXTERN( UNINT_PORT );
HB_FUNC( __HBEXTERN__HBCOMM__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBCOMM )
{ "INBUFSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( INBUFSIZE )}, NULL },
{ "INCHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( INCHR )}, NULL },
{ "INIT_PORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INIT_PORT )}, NULL },
{ "ISWORKING", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISWORKING )}, NULL },
{ "OUTBUFCLR", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTBUFCLR )}, NULL },
{ "OUTBUFSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTBUFSIZE )}, NULL },
{ "OUTCHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTCHR )}, NULL },
{ "UNINT_PORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( UNINT_PORT )}, NULL },
{ "__HBEXTERN__HBCOMM__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBCOMM__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBCOMM, "hbcomm/hbcomm.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBCOMM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBCOMM )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBCOMM__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

