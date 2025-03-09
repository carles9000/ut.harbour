/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/madd.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_MADD );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DAY );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( MIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MADD )
{ "FT_MADD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MADD )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MADD, "hbnf/madd.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MADD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MADD )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_MADD )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,176,1,0,96,1,0,176,2,0,12,0,
		20,2,176,1,0,96,2,0,121,20,2,176,1,0,
		96,3,0,9,20,2,176,3,0,95,1,12,1,17,
		80,4,95,3,21,28,28,73,95,1,95,1,95,4,
		49,92,31,72,176,3,0,95,1,95,4,49,92,31,
		72,12,1,49,8,80,3,95,1,95,4,49,80,5,
		122,165,80,6,25,34,96,5,0,95,2,121,15,28,
		6,92,31,25,4,92,255,135,96,5,0,122,176,3,
		0,95,5,12,1,49,135,175,6,0,176,4,0,95,
		2,12,1,15,28,216,95,3,28,21,96,5,0,92,
		31,176,3,0,95,5,92,31,72,12,1,49,135,25,
		31,176,5,0,95,5,95,4,72,96,5,0,92,31,
		176,3,0,95,5,92,31,72,12,1,49,139,12,2,
		80,5,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

