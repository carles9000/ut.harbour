/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/byt2bit.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BYT2BIT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_BCODE );
HB_FUNC_EXTERN( HB_BITTEST );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BYT2BIT )
{ "FT_BYT2BIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BYT2BIT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL },
{ "HB_BITTEST", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITTEST )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BYT2BIT, "hbnf/byt2bit.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BYT2BIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BYT2BIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BYT2BIT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,1,0,95,1,12,1,28,62,176,2,
		0,95,1,12,1,80,1,106,1,0,80,3,92,7,
		165,80,2,25,33,96,3,0,176,3,0,95,1,95,
		2,12,2,28,8,106,2,49,0,25,6,106,2,48,
		0,135,126,2,255,255,95,2,121,35,28,223,95,3,
		110,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

