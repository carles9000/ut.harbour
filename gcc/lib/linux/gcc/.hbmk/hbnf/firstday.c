/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/firstday.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_FDAY );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DAY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FIRSTDAY )
{ "FT_FDAY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_FDAY )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FIRSTDAY, "hbnf/firstday.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FIRSTDAY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FIRSTDAY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_FDAY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,12,1,31,9,176,2,
		0,12,0,80,1,95,1,176,3,0,95,1,12,1,
		17,49,110,7
	};

	hb_vmExecute( pcode, symbols );
}

