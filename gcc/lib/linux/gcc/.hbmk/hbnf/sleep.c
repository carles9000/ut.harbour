/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/sleep.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SLEEP );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( SECONDS );
HB_FUNC_EXTERN( HB_IDLESLEEP );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SLEEP )
{ "FT_SLEEP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SLEEP )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "SECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SECONDS )}, NULL },
{ "HB_IDLESLEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLESLEEP )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SLEEP, "hbnf/sleep.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SLEEP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SLEEP )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SLEEP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,2,12,1,28,32,96,2,
		0,176,2,0,12,0,136,95,2,121,15,28,11,96,
		2,0,97,127,81,1,0,136,96,1,0,95,2,135,
		176,3,0,95,1,20,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

