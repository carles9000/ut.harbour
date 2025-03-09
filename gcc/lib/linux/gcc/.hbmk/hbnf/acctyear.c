/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/acctyear.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ACCTYEAR );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( FT_YEAR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( FT_ACCTADJ );
HB_FUNC_EXTERN( FT_MADD );
HB_FUNC_EXTERN( STR );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ACCTYEAR )
{ "FT_ACCTYEAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ACCTYEAR )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "FT_YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_YEAR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "FT_ACCTADJ", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_ACCTADJ )}, NULL },
{ "FT_MADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MADD )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ACCTYEAR, "hbnf/acctyear.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ACCTYEAR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ACCTYEAR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ACCTYEAR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,1,0,95,1,12,1,31,9,176,2,
		0,12,0,80,1,176,3,0,95,1,12,1,80,3,
		176,4,0,95,3,122,1,12,1,80,2,176,5,0,
		95,3,92,2,1,12,1,95,3,92,2,2,176,5,
		0,95,3,92,3,1,120,12,2,95,3,92,3,2,
		95,1,95,3,92,2,1,35,28,54,176,3,0,176,
		6,0,95,1,92,255,12,2,12,1,80,3,173,2,
		0,176,5,0,95,3,92,2,1,12,1,95,3,92,
		2,2,176,5,0,95,3,92,3,1,120,12,2,95,
		3,92,3,2,25,61,95,1,95,3,92,3,1,15,
		28,51,176,3,0,176,6,0,95,1,122,12,2,12,
		1,80,3,174,2,0,176,5,0,95,3,92,2,1,
		12,1,95,3,92,2,2,176,5,0,95,3,92,3,
		1,120,12,2,95,3,92,3,2,176,7,0,95,2,
		92,4,12,2,95,3,122,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

