/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/amedian.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_AMEDIAN );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( ACOPY );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( INT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_AMEDIAN )
{ "FT_AMEDIAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_AMEDIAN )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "ACOPY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACOPY )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_AMEDIAN, "hbnf/amedian.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_AMEDIAN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_AMEDIAN )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_AMEDIAN )
{
	static const HB_BYTE pcode[] =
	{
		13,5,3,176,1,0,96,2,0,122,20,2,176,1,
		0,96,3,0,176,2,0,95,1,12,1,20,2,176,
		3,0,176,4,0,95,3,176,2,0,95,1,12,1,
		12,2,122,12,2,80,3,176,3,0,176,4,0,95,
		2,95,3,12,2,122,12,2,80,2,95,3,95,2,
		49,23,80,4,176,5,0,95,1,95,4,3,1,0,
		95,2,95,4,12,4,80,5,176,6,0,95,5,12,
		1,80,5,95,4,92,2,50,121,8,28,45,95,5,
		95,4,92,2,18,1,80,6,95,5,176,7,0,95,
		4,92,2,18,12,1,23,1,80,7,176,7,0,95,
		6,95,7,72,92,2,18,12,1,80,8,25,18,95,
		5,176,7,0,95,4,92,2,18,12,1,23,1,80,
		8,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

