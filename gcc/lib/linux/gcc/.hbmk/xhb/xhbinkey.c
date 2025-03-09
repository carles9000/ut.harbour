/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/xhbinkey.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SETINKEYBEFOREBLOCK );
HB_FUNC_EXTERN( HB_GTINFO );
HB_FUNC( SETINKEYAFTERBLOCK );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHBINKEY )
{ "SETINKEYBEFOREBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETINKEYBEFOREBLOCK )}, NULL },
{ "HB_GTINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GTINFO )}, NULL },
{ "SETINKEYAFTERBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETINKEYAFTERBLOCK )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHBINKEY, "xhb/xhbinkey.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHBINKEY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHBINKEY )
   #include "hbiniseg.h"
#endif

HB_FUNC( SETINKEYBEFOREBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,1,0,92,61,122,164,124,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETINKEYAFTERBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,1,0,92,60,122,164,124,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

