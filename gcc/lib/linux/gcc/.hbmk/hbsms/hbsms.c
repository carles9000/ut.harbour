/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbsms/hbsms.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( SMSCTX_CLOSE );
HB_FUNC_EXTERN( SMSCTX_NEW );
HB_FUNC_EXTERN( SMSCTX_PIN );
HB_FUNC_EXTERN( SMSCTX_RECEIVE );
HB_FUNC_EXTERN( SMSCTX_SEND );
HB_FUNC_EXTERN( SMS_RECEIVEALL );
HB_FUNC_EXTERN( SMS_SEND );
HB_FUNC( __HBEXTERN__HBSMS__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBSMS )
{ "SMSCTX_CLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMSCTX_CLOSE )}, NULL },
{ "SMSCTX_NEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMSCTX_NEW )}, NULL },
{ "SMSCTX_PIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMSCTX_PIN )}, NULL },
{ "SMSCTX_RECEIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMSCTX_RECEIVE )}, NULL },
{ "SMSCTX_SEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMSCTX_SEND )}, NULL },
{ "SMS_RECEIVEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMS_RECEIVEALL )}, NULL },
{ "SMS_SEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMS_SEND )}, NULL },
{ "__HBEXTERN__HBSMS__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBSMS__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBSMS, "hbsms/hbsms.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBSMS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBSMS )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBSMS__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

