/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/default.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_DEFAULT );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_EXTERN( HB_CURDRIVE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DEFAULT )
{ "FT_DEFAULT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DEFAULT )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "HB_CURDRIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CURDRIVE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DEFAULT, "hbnf/default.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DEFAULT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DEFAULT )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_DEFAULT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,113,21,0,0,90,8,176,1,0,12,0,
		6,178,176,2,0,95,1,20,1,73,114,4,0,0,
		176,2,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

