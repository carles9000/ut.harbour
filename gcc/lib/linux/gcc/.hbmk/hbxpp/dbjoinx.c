/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/dbjoinx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBJOIN );
HB_FUNC_EXTERN( __DBJOIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBJOINX )
{ "DBJOIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBJOIN )}, NULL },
{ "__DBJOIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBJOIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBJOINX, "../contrib/hbxpp/dbjoinx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBJOINX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBJOINX )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBJOIN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,95,1,95,2,95,3,95,4,
		20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

