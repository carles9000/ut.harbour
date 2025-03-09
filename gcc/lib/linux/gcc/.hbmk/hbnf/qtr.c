/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/qtr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_QTR );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( FT_YEAR );
HB_FUNC_EXTERN( FT_MADD );
HB_FUNC_EXTERN( MONTH );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( STRZERO );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_QTR )
{ "FT_QTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_QTR )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "FT_YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_YEAR )}, NULL },
{ "FT_MADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MADD )}, NULL },
{ "MONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MONTH )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_QTR, "hbnf/qtr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_QTR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_QTR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_QTR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,176,1,0,95,1,12,1,28,15,95,1,
		80,2,176,2,0,12,0,80,1,25,18,176,3,0,
		95,1,12,1,31,9,176,2,0,12,0,80,1,176,
		4,0,95,1,12,1,80,4,176,1,0,95,2,12,
		1,28,37,95,2,122,35,31,9,95,2,92,4,15,
		28,6,92,4,80,2,176,5,0,95,4,92,2,1,
		92,3,95,2,17,65,12,2,80,1,176,6,0,95,
		1,12,1,176,6,0,95,4,92,2,1,12,1,49,
		80,3,96,3,0,95,3,121,16,28,5,122,25,4,
		92,13,135,176,7,0,95,3,17,92,3,18,12,1,
		80,3,95,4,122,148,176,8,0,95,3,23,92,2,
		12,2,135,176,5,0,95,4,92,2,1,95,3,92,
		3,65,12,2,95,4,92,2,2,176,5,0,95,4,
		92,2,1,92,3,12,2,17,95,4,92,3,2,95,
		4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

