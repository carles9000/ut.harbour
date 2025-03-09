/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/xhwinprn.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN32PRN );
HB_FUNC( WIN32BMP );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHWINPRN )
{ "WIN32PRN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN )}, NULL },
{ "WIN32BMP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32BMP )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHWINPRN, "xhb/xhwinprn.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHWINPRN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHWINPRN )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN32PRN )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WIN32BMP )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

