/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/gcd.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_GCD );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( MIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GCD )
{ "FT_GCD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_GCD )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_GCD, "hbnf/gcd.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GCD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GCD )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_GCD )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,95,1,121,8,31,8,95,2,121,8,28,
		7,121,80,5,25,69,176,1,0,176,2,0,95,1,
		12,1,176,2,0,95,2,12,1,12,2,80,3,176,
		3,0,176,2,0,95,1,12,1,176,2,0,95,2,
		12,1,12,2,80,4,95,3,95,4,50,80,5,95,
		4,80,3,95,5,80,4,95,5,121,34,28,237,95,
		3,80,5,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

