/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/xhbole.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TOLEAUTO );
HB_FUNC( CREATEOBJECT );
HB_FUNC( GETACTIVEOBJECT );
HB_FUNC( CREATEOLEOBJECT );
HB_FUNC( OLEDEFAULTARG );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHBOLE )
{ "TOLEAUTO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTO )}, NULL },
{ "CREATEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CREATEOBJECT )}, NULL },
{ "GETACTIVEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETACTIVEOBJECT )}, NULL },
{ "CREATEOLEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CREATEOLEOBJECT )}, NULL },
{ "OLEDEFAULTARG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLEDEFAULTARG )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHBOLE, "xhb/xhbole.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHBOLE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHBOLE )
   #include "hbiniseg.h"
#endif

HB_FUNC( TOLEAUTO )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CREATEOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETACTIVEOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CREATEOLEOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OLEDEFAULTARG )
{
	static const HB_BYTE pcode[] =
	{
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

