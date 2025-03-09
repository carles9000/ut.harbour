/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/adapter.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ADAPTER );
HB_FUNC_EXTERN( ISCOLOR );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ADAPTER )
{ "FT_ADAPTER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ADAPTER )}, NULL },
{ "ISCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISCOLOR )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ADAPTER, "hbnf/adapter.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ADAPTER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ADAPTER )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ADAPTER )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,12,0,28,6,92,3,25,3,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

