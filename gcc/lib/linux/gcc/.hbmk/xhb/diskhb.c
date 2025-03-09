/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/diskhb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( GETVOLINFO );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DISKHB )
{ "GETVOLINFO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETVOLINFO )}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DISKHB, "xhb/diskhb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DISKHB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DISKHB )
   #include "hbiniseg.h"
#endif

HB_FUNC( GETVOLINFO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,106,2,86,0,12,2,
		80,2,176,2,0,95,2,12,1,122,16,28,10,95,
		2,122,1,122,1,25,5,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

