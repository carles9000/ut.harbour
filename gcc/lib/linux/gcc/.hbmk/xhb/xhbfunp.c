/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/xhbfunp.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( GTSETCLIPBOARD );
HB_FUNC_EXTERN( HB_GTINFO );
HB_FUNC( GTGETCLIPBOARD );
HB_FUNC( GTGETCLIPBOARDSIZE );
HB_FUNC_EXTERN( LEN );
HB_FUNC( GTPASTECLIPBOARD );
HB_FUNC( INETDESTROY );
HB_FUNC_EXTERN( HB_INETISSOCKET );
HB_FUNC_EXTERN( HB_INETCLOSE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHBFUNP )
{ "GTSETCLIPBOARD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GTSETCLIPBOARD )}, NULL },
{ "HB_GTINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GTINFO )}, NULL },
{ "GTGETCLIPBOARD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GTGETCLIPBOARD )}, NULL },
{ "GTGETCLIPBOARDSIZE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GTGETCLIPBOARDSIZE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "GTPASTECLIPBOARD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GTPASTECLIPBOARD )}, NULL },
{ "INETDESTROY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INETDESTROY )}, NULL },
{ "HB_INETISSOCKET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETISSOCKET )}, NULL },
{ "HB_INETCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCLOSE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHBFUNP, "xhb/xhbfunp.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHBFUNP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHBFUNP )
   #include "hbiniseg.h"
#endif

HB_FUNC( GTSETCLIPBOARD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,92,15,95,1,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GTGETCLIPBOARD )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,15,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GTGETCLIPBOARDSIZE )
{
	static const HB_BYTE pcode[] =
	{
		176,4,0,176,1,0,92,15,12,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GTPASTECLIPBOARD )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,16,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( INETDESTROY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,7,0,95,1,12,1,28,11,176,8,
		0,95,1,12,1,25,3,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

