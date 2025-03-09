/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/dbupdatx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBUPDATE );
HB_FUNC_EXTERN( __DBUPDATE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBUPDATX )
{ "DBUPDATE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBUPDATE )}, NULL },
{ "__DBUPDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBUPDATE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBUPDATX, "../contrib/hbxpp/dbupdatx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBUPDATX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBUPDATX )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBUPDATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,95,1,95,3,95,4,95,2,
		20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

