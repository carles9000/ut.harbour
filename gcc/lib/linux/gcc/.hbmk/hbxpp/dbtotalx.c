/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/dbtotalx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBTOTAL );
HB_FUNC_EXTERN( __DBTOTAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBTOTALX )
{ "DBTOTAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBTOTAL )}, NULL },
{ "__DBTOTAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBTOTAL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBTOTALX, "../contrib/hbxpp/dbtotalx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBTOTALX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBTOTALX )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBTOTAL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,8,176,1,0,95,1,95,2,95,3,95,4,
		95,5,95,6,95,7,95,8,20,8,7
	};

	hb_vmExecute( pcode, symbols );
}

