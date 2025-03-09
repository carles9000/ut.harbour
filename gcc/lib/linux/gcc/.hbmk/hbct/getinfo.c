/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/getinfo.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SAVEGETS );
HB_FUNC( RESTGETS );
HB_FUNC( COUNTGETS );
HB_FUNC_EXTERN( LEN );
HB_FUNC( CURRENTGET );
HB_FUNC_EXTERN( GETACTIVE );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC( GETFLDROW );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC( GETFLDCOL );
HB_FUNC( GETFLDVAR );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GETINFO )
{ "SAVEGETS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAVEGETS )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "RESTGETS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RESTGETS )}, NULL },
{ "COUNTGETS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( COUNTGETS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CURRENTGET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CURRENTGET )}, NULL },
{ "GETACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETACTIVE )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "GETFLDROW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETFLDROW )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "ROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETFLDCOL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETFLDCOL )}, NULL },
{ "COL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETFLDVAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETFLDVAR )}, NULL },
{ "NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_GETINFO, "../contrib/hbct/getinfo.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GETINFO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GETINFO )
   #include "hbiniseg.h"
#endif

HB_FUNC( SAVEGETS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,98,1,0,80,1,4,0,0,81,1,0,
		95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RESTGETS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,165,81,1,0,100,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( COUNTGETS )
{
	static const HB_BYTE pcode[] =
	{
		176,4,0,98,1,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CURRENTGET )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,6,0,12,0,80,1,176,7,0,98,
		1,0,89,15,0,1,0,1,0,1,0,95,1,95,
		255,8,6,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETFLDROW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,9,0,95,1,12,1,31,11,176,6,
		0,12,0,80,2,25,29,95,1,122,16,28,23,95,
		1,176,4,0,98,1,0,12,1,34,28,10,98,1,
		0,95,1,1,80,2,95,2,100,69,28,11,48,10,
		0,95,2,112,0,25,4,92,255,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETFLDCOL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,9,0,95,1,12,1,31,11,176,6,
		0,12,0,80,2,25,29,95,1,122,16,28,23,95,
		1,176,4,0,98,1,0,12,1,34,28,10,98,1,
		0,95,1,1,80,2,95,2,100,69,28,11,48,12,
		0,95,2,112,0,25,4,92,255,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETFLDVAR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,9,0,95,1,12,1,31,11,176,6,
		0,12,0,80,2,25,29,95,1,122,16,28,23,95,
		1,176,4,0,98,1,0,12,1,34,28,10,98,1,
		0,95,1,1,80,2,95,2,100,69,28,11,48,14,
		0,95,2,112,0,25,4,92,255,110,7
	};

	hb_vmExecute( pcode, symbols );
}

