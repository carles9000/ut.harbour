/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/daytobow.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_DAYTOBOW );
HB_FUNC_EXTERN( FT_DATECNFG );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DOW );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DAYTOBOW )
{ "FT_DAYTOBOW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DAYTOBOW )}, NULL },
{ "FT_DATECNFG", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_DATECNFG )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DAYTOBOW, "hbnf/daytobow.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DAYTOBOW
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DAYTOBOW )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_DAYTOBOW )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,1,0,12,0,92,2,1,80,3,176,
		2,0,95,1,12,1,31,9,176,3,0,12,0,80,
		1,176,4,0,95,1,12,1,95,3,49,80,2,95,
		2,121,35,28,6,126,2,7,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

