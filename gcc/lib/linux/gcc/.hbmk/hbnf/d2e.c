/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/d2e.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_D2E );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( LOG );
HB_FUNC_EXTERN( ROUND );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( HB_NTOS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_D2E )
{ "FT_D2E", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_D2E )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "LOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOG )}, NULL },
{ "ROUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUND )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_D2E, "hbnf/d2e.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_D2E
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_D2E )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_D2E )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,1,0,96,2,0,92,6,20,2,95,
		1,121,8,28,7,121,80,3,25,77,176,2,0,95,
		1,12,1,122,35,28,27,176,3,0,176,4,0,95,
		1,12,1,176,4,0,92,10,12,1,18,12,1,17,
		80,3,25,41,176,3,0,176,4,0,176,2,0,95,
		1,12,1,101,241,104,227,136,181,248,228,62,10,5,
		72,12,1,176,4,0,92,10,12,1,18,12,1,80,
		3,96,1,0,92,10,95,3,84,138,176,5,0,176,
		2,0,95,1,12,1,95,2,12,2,92,10,16,28,
		11,96,1,0,92,10,138,174,3,0,176,6,0,176,
		7,0,95,1,95,2,92,3,72,95,2,12,3,12,
		1,106,2,69,0,72,176,8,0,95,3,12,1,72,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

