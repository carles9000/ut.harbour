/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/sysmem.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SYSMEM );
HB_FUNC_EXTERN( MEMORY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SYSMEM )
{ "FT_SYSMEM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SYSMEM )}, NULL },
{ "MEMORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMORY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SYSMEM, "hbnf/sysmem.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SYSMEM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SYSMEM )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SYSMEM )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,101,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

