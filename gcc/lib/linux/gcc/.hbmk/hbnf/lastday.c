/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/lastday.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_LDAY );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DAY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LASTDAY )
{ "FT_LDAY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_LDAY )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LASTDAY, "hbnf/lastday.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LASTDAY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LASTDAY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_LDAY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,100,8,28,9,176,1,0,12,0,
		80,1,96,1,0,92,45,176,2,0,95,1,12,1,
		49,139,176,2,0,95,1,12,1,49,110,7
	};

	hb_vmExecute( pcode, symbols );
}

