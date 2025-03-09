/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/nwlstat.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_NWLSTAT );
HB_FUNC_EXTERN( _FT_NWKSTAT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NWLSTAT )
{ "FT_NWLSTAT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_NWLSTAT )}, NULL },
{ "_FT_NWKSTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( _FT_NWKSTAT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NWLSTAT, "hbnf/nwlstat.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NWLSTAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NWLSTAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_NWLSTAT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,1,0,12,0,80,1,95,1,121,35,
		28,6,126,1,0,1,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

