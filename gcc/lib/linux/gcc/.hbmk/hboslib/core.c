/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hboslib/core.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OL_95APPTITLE );
HB_FUNC_EXTERN( HB_GTINFO );
HB_FUNC( OL_95VMTITLE );
HB_FUNC( OL_AUTOYIELD );
HB_FUNC( OL_ISMSWIN );
HB_FUNC_EXTERN( HB_OSISWINNT );
HB_FUNC_EXTERN( HB_OSISWIN9X );
HB_FUNC( OL_ISNT );
HB_FUNC( OL_ISOS2 );
HB_FUNC( OL_ISOS2WIN );
HB_FUNC( OL_OSVERMAJ );
HB_FUNC( OL_OSVERMIN );
HB_FUNC( OL_WINCBCOPY );
HB_FUNC( OL_WINCBPASTE );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC( OL_WINFULLSCREEN );
HB_FUNC( OL_YIELD );
HB_FUNC_EXTERN( HB_RELEASECPU );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CORE )
{ "OL_95APPTITLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_95APPTITLE )}, NULL },
{ "HB_GTINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GTINFO )}, NULL },
{ "OL_95VMTITLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_95VMTITLE )}, NULL },
{ "OL_AUTOYIELD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_AUTOYIELD )}, NULL },
{ "OL_ISMSWIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_ISMSWIN )}, NULL },
{ "HB_OSISWINNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWINNT )}, NULL },
{ "HB_OSISWIN9X", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWIN9X )}, NULL },
{ "OL_ISNT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_ISNT )}, NULL },
{ "OL_ISOS2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_ISOS2 )}, NULL },
{ "OL_ISOS2WIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_ISOS2WIN )}, NULL },
{ "OL_OSVERMAJ", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_OSVERMAJ )}, NULL },
{ "OL_OSVERMIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_OSVERMIN )}, NULL },
{ "OL_WINCBCOPY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_WINCBCOPY )}, NULL },
{ "OL_WINCBPASTE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_WINCBPASTE )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "OL_WINFULLSCREEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_WINFULLSCREEN )}, NULL },
{ "OL_YIELD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OL_YIELD )}, NULL },
{ "HB_RELEASECPU", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RELEASECPU )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CORE, "hboslib/core.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CORE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CORE )
   #include "hbiniseg.h"
#endif

HB_FUNC( OL_95APPTITLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,92,26,95,1,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_95VMTITLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,92,26,95,1,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_AUTOYIELD )
{
	static const HB_BYTE pcode[] =
	{
		120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_ISMSWIN )
{
	static const HB_BYTE pcode[] =
	{
		176,5,0,12,0,21,31,8,73,176,6,0,12,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_ISNT )
{
	static const HB_BYTE pcode[] =
	{
		176,5,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_ISOS2 )
{
	static const HB_BYTE pcode[] =
	{
		9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_ISOS2WIN )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,63,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_OSVERMAJ )
{
	static const HB_BYTE pcode[] =
	{
		176,6,0,12,0,28,6,92,7,25,4,92,5,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_OSVERMIN )
{
	static const HB_BYTE pcode[] =
	{
		176,6,0,12,0,28,5,122,25,3,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_WINCBCOPY )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,15,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_WINCBPASTE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,14,0,95,1,12,1,28,14,176,1,
		0,92,15,95,1,20,2,120,110,7,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_WINFULLSCREEN )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,63,120,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OL_YIELD )
{
	static const HB_BYTE pcode[] =
	{
		176,17,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

