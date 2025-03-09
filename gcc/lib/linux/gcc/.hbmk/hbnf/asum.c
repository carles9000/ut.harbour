/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/asum.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ASUM );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( VALTYPE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ASUM )
{ "FT_ASUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ASUM )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ASUM, "hbnf/asum.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ASUM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ASUM )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ASUM )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,121,80,4,176,1,0,96,2,0,122,20,
		2,176,1,0,96,3,0,176,2,0,95,1,12,1,
		20,2,176,3,0,176,4,0,95,3,176,2,0,95,
		1,12,1,12,2,122,12,2,80,3,176,3,0,176,
		4,0,95,2,95,3,12,2,122,12,2,80,2,176,
		5,0,95,1,89,58,0,1,0,1,0,4,0,96,
		255,255,121,95,1,176,6,0,95,1,12,1,28,11,
		176,2,0,95,1,12,1,25,3,121,4,3,0,176,
		7,0,176,8,0,95,1,12,1,106,3,78,67,0,
		12,2,23,1,139,6,95,2,95,3,95,2,49,23,
		20,4,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

