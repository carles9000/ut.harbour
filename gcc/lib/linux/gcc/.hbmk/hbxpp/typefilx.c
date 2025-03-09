/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/typefilx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( _TYPEFILE );
HB_FUNC_EXTERN( __TYPEFILE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TYPEFILX )
{ "_TYPEFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _TYPEFILE )}, NULL },
{ "__TYPEFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __TYPEFILE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TYPEFILX, "../contrib/hbxpp/typefilx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TYPEFILX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TYPEFILX )
   #include "hbiniseg.h"
#endif

HB_FUNC( _TYPEFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,95,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

