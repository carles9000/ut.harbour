/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/scancode.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SCANCODE );
HB_FUNC_EXTERN( FT_INT86 );
HB_FUNC_EXTERN( HB_BCHAR );
HB_FUNC_EXTERN( INT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SCANCODE )
{ "FT_SCANCODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SCANCODE )}, NULL },
{ "FT_INT86", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_INT86 )}, NULL },
{ "HB_BCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCHAR )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SCANCODE, "hbnf/scancode.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SCANCODE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SCANCODE )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SCANCODE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,92,10,3,1,0,80,1,121,95,1,122,
		2,176,1,0,92,22,95,1,20,2,176,2,0,95,
		1,122,1,121,35,28,14,97,0,0,1,0,95,1,
		122,1,72,25,6,95,1,122,1,93,0,1,50,12,
		1,176,2,0,176,3,0,95,1,122,1,121,35,28,
		14,97,0,0,1,0,95,1,122,1,72,25,6,95,
		1,122,1,93,0,1,18,12,1,12,1,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

