/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/byteor.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BYTEOR );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_BCHAR );
HB_FUNC_EXTERN( HB_BITOR );
HB_FUNC_EXTERN( HB_BCODE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BYTEOR )
{ "FT_BYTEOR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BYTEOR )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_BCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCHAR )}, NULL },
{ "HB_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITOR )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BYTEOR, "hbnf/byteor.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BYTEOR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BYTEOR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BYTEOR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,12,1,28,36,176,1,
		0,95,2,12,1,28,27,176,2,0,176,3,0,176,
		4,0,95,1,12,1,176,4,0,95,2,12,1,12,
		2,20,1,7,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

