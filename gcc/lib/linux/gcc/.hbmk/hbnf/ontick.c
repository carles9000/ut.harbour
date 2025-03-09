/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/ontick.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_STATIC( __FT_ONTICK );
HB_FUNC_EXTERN( HB_MILLISECONDS );
HB_FUNC( FT_ONTICK );
HB_FUNC_EXTERN( HB_ISEVALITEM );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_IDLEADD );
HB_FUNC_EXTERN( HB_IDLEDEL );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ONTICK )
{ "__FT_ONTICK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( __FT_ONTICK )}, NULL },
{ "HB_MILLISECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MILLISECONDS )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FT_ONTICK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ONTICK )}, NULL },
{ "HB_ISEVALITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISEVALITEM )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_IDLEADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEADD )}, NULL },
{ "HB_IDLEDEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEDEL )}, NULL },
{ "(_INITSTATICS00004)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ONTICK, "hbnf/ontick.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ONTICK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ONTICK )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( __FT_ONTICK )
{
	static const HB_BYTE pcode[] =
	{
		116,9,0,176,1,0,12,0,103,3,0,103,2,0,
		72,16,28,19,176,1,0,12,0,82,3,0,48,2,
		0,103,1,0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_ONTICK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,116,9,0,176,4,0,95,1,12,1,28,
		73,95,1,82,1,0,176,5,0,95,2,12,1,28,
		23,101,46,136,76,236,49,31,172,63,255,255,95,2,
		65,93,232,3,65,82,2,0,176,1,0,12,0,82,
		3,0,176,6,0,103,4,0,12,1,28,50,176,7,
		0,90,8,176,0,0,12,0,6,12,1,82,4,0,
		25,32,100,82,1,0,121,82,2,0,176,6,0,103,
		4,0,12,1,31,14,176,8,0,103,4,0,20,1,
		100,82,4,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,9,0,4,0,116,9,0,121,82,2,0,121,82,
		3,0,179,4,0,1,0,2,0,3,0,4,0,7
	};

	hb_vmExecute( pcode, symbols );
}

