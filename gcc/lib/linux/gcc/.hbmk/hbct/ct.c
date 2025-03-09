/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/ct.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( CTINIT );
HB_FUNC_EXTERN( CTCINIT );
HB_FUNC_INIT( _CTINIT );
HB_FUNC( CTEXIT );
HB_FUNC_EXTERN( CTCEXIT );
HB_FUNC_EXIT( _CTEXIT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CT )
{ "CTINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CTINIT )}, NULL },
{ "CTCINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTCINIT )}, NULL },
{ "_CTINIT$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( _CTINIT )}, NULL },
{ "CTEXIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CTEXIT )}, NULL },
{ "CTCEXIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTCEXIT )}, NULL },
{ "_CTEXIT$", {HB_FS_EXIT | HB_FS_LOCAL}, {HB_EXIT_FUNCNAME( _CTEXIT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CT, "../contrib/hbct/ct.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CT )
   #include "hbiniseg.h"
#endif

HB_FUNC( CTINIT )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,103,1,0,31,10,176,1,0,12,0,82,
		1,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( _CTINIT )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,103,1,0,31,10,176,1,0,12,0,82,
		1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CTEXIT )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,103,1,0,28,11,176,4,0,20,0,9,
		82,1,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_EXIT( _CTEXIT )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,103,1,0,28,11,176,4,0,20,0,9,
		82,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,6,0,1,0,116,6,0,9,82,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

