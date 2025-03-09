/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/byteneg.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BYTENEG );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_BCHAR );
HB_FUNC_EXTERN( HB_BCODE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BYTENEG )
{ "FT_BYTENEG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BYTENEG )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_BCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCHAR )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BYTENEG, "hbnf/byteneg.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BYTENEG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BYTENEG )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BYTENEG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,12,1,28,23,176,2,
		0,93,0,1,176,3,0,95,1,12,1,49,93,0,
		1,50,20,1,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

