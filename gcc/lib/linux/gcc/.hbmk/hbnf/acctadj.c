/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/acctadj.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ACCTADJ );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( FT_DAYTOBOW );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ACCTADJ )
{ "FT_ACCTADJ", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ACCTADJ )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "FT_DAYTOBOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_DAYTOBOW )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ACCTADJ, "hbnf/acctadj.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ACCTADJ
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ACCTADJ )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ACCTADJ )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,1,0,95,1,12,1,31,9,176,2,
		0,12,0,80,1,176,3,0,96,2,0,9,20,2,
		176,4,0,95,1,12,1,80,3,95,3,92,2,95,
		2,28,5,121,25,3,122,72,15,28,13,96,1,0,
		92,7,95,3,49,135,25,8,96,1,0,95,3,136,
		95,2,28,5,173,1,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

