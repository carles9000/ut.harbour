/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/pending.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_PENDING );
HB_FUNC_EXTERN( SECONDS );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( HB_SCROLL );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PENDING )
{ "FT_PENDING", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_PENDING )}, NULL },
{ "SECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SECONDS )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "HB_SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SCROLL )}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "(_INITSTATICS00005)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PENDING, "hbnf/pending.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PENDING
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PENDING )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_PENDING )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,116,5,0,95,1,100,69,29,164,0,95,
		2,100,69,28,6,95,2,25,5,103,1,0,82,1,
		0,95,3,100,69,28,6,95,3,25,5,103,2,0,
		82,2,0,95,4,100,69,28,6,95,4,25,5,103,
		3,0,82,3,0,95,5,100,69,28,6,95,5,25,
		5,103,4,0,82,4,0,176,1,0,12,0,80,6,
		103,5,0,121,8,28,11,95,6,103,3,0,49,82,
		5,0,95,6,103,5,0,49,101,154,153,153,153,153,
		153,185,63,10,1,35,28,21,95,6,103,3,0,72,
		82,5,0,176,2,0,103,3,0,20,1,25,7,95,
		6,82,5,0,176,3,0,103,1,0,121,103,1,0,
		92,80,20,4,176,4,0,103,1,0,103,2,0,95,
		1,103,4,0,20,4,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,5,0,5,0,116,5,0,92,24,82,1,0,121,
		82,2,0,92,5,82,3,0,106,7,87,43,47,82,
		44,88,0,82,4,0,121,82,5,0,179,5,0,1,
		0,2,0,3,0,4,0,5,0,7
	};

	hb_vmExecute( pcode, symbols );
}

