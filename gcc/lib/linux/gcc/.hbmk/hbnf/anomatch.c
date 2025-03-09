/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/anomatch.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ANOMATCHES );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( AEVAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ANOMATCH )
{ "FT_ANOMATCHES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ANOMATCHES )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ANOMATCH, "hbnf/anomatch.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ANOMATCH
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ANOMATCH )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ANOMATCHES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,121,80,5,176,1,0,96,3,0,122,20,
		2,176,1,0,96,4,0,176,2,0,95,1,12,1,
		20,2,176,3,0,176,4,0,95,4,176,2,0,95,
		1,12,1,12,2,122,12,2,80,4,176,3,0,176,
		4,0,95,3,95,4,12,2,122,12,2,80,3,176,
		5,0,95,1,89,31,0,1,0,2,0,2,0,5,
		0,48,6,0,95,255,95,1,112,1,28,9,96,254,
		255,158,170,25,3,100,6,95,3,95,4,95,3,49,
		23,20,4,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

