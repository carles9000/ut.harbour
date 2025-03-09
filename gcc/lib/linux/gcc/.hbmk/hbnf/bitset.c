/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/bitset.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BITSET );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_BCHAR );
HB_FUNC_EXTERN( HB_BITSET );
HB_FUNC_EXTERN( HB_BCODE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BITSET )
{ "FT_BITSET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BITSET )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_BCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCHAR )}, NULL },
{ "HB_BITSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITSET )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BITSET, "hbnf/bitset.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BITSET
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BITSET )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BITSET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,12,1,28,31,176,2,
		0,95,2,12,1,28,22,176,3,0,176,4,0,176,
		5,0,95,1,12,1,95,2,12,2,20,1,7,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

