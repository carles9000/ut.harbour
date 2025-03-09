/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/thfuncx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( THREADID );
HB_FUNC_EXTERN( HB_THREADID );
HB_FUNC( THREADOBJECT );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC( THREADWAIT );
HB_FUNC_EXTERN( HB_ISOBJECT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_THREADWAIT );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC( THREADWAITALL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_THFUNCX )
{ "THREADID", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADID )}, NULL },
{ "HB_THREADID", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADID )}, NULL },
{ "THREADOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADOBJECT )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "THREADWAIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADWAIT )}, NULL },
{ "HB_ISOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISOBJECT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "THREADSELF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_THREADWAIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADWAIT )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "THREADWAITALL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADWAITALL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_THFUNCX, "../contrib/hbxpp/thfuncx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_THFUNCX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_THFUNCX )
   #include "hbiniseg.h"
#endif

HB_FUNC( THREADID )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( THREADOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,12,0,176,3,0,12,0,121,15,28,
		7,95,1,82,1,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( THREADWAIT )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,4,0,0,80,5,95,1,96,6,0,129,
		1,1,28,39,176,5,0,95,6,12,1,28,18,176,
		6,0,95,5,48,7,0,95,6,112,0,20,2,25,
		11,176,6,0,95,5,95,6,20,2,130,31,221,132,
		176,8,0,95,5,176,9,0,95,2,12,1,28,15,
		95,2,121,69,28,9,95,2,92,100,18,25,3,100,
		12,2,80,4,95,4,121,69,28,9,95,1,95,4,
		1,80,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( THREADWAITALL )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,4,0,0,80,3,95,1,96,4,0,129,
		1,1,28,39,176,5,0,95,4,12,1,28,18,176,
		6,0,95,3,48,7,0,95,4,112,0,20,2,25,
		11,176,6,0,95,3,95,4,20,2,130,31,221,132,
		176,8,0,95,3,176,9,0,95,2,12,1,28,15,
		95,2,121,69,28,9,95,2,92,100,18,25,3,100,
		120,12,3,176,11,0,95,3,12,1,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,12,0,1,0,116,12,0,179,1,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

