/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/aavg.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_AAVG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( FT_ASUM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_AAVG )
{ "FT_AAVG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_AAVG )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "FT_ASUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_ASUM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_AAVG, "hbnf/aavg.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_AAVG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_AAVG )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_AAVG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,1,0,96,2,0,122,20,2,176,1,
		0,96,3,0,176,2,0,95,1,12,1,20,2,176,
		3,0,176,4,0,95,3,176,2,0,95,1,12,1,
		12,2,122,12,2,80,3,176,3,0,176,4,0,95,
		2,95,3,12,2,122,12,2,80,2,176,5,0,95,
		1,12,1,28,11,176,6,0,95,1,12,1,28,5,
		121,25,20,176,7,0,95,1,95,2,95,3,12,3,
		95,3,95,2,49,23,18,110,7
	};

	hb_vmExecute( pcode, symbols );
}

