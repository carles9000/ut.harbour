/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/dectobin.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_DEC2BIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DECTOBIN )
{ "FT_DEC2BIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DEC2BIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DECTOBIN, "hbnf/dectobin.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DECTOBIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DECTOBIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_DEC2BIN )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,2,48,0,106,2,48,0,106,2,48,
		0,106,2,48,0,106,2,48,0,106,2,48,0,106,
		2,48,0,106,2,48,0,4,8,0,80,2,92,8,
		165,80,3,25,41,95,1,92,2,95,3,17,84,16,
		28,24,96,1,0,92,2,95,3,17,84,136,106,2,
		49,0,95,2,92,9,95,3,49,2,126,3,255,255,
		95,3,122,35,28,215,95,2,122,1,95,2,92,2,
		1,72,95,2,92,3,1,72,95,2,92,4,1,72,
		95,2,92,5,1,72,95,2,92,6,1,72,95,2,
		92,7,1,72,95,2,92,8,1,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

