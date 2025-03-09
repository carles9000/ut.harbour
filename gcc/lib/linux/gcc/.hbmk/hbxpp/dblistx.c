/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/dblistx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBLIST );
HB_FUNC_EXTERN( __DBLIST );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBLISTX )
{ "DBLIST", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBLIST )}, NULL },
{ "__DBLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBLIST )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBLISTX, "../contrib/hbxpp/dblistx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBLISTX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBLISTX )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBLIST )
{
	static const HB_BYTE pcode[] =
	{
		13,0,10,176,1,0,95,2,95,1,95,3,95,4,
		95,5,95,6,95,7,95,8,95,9,95,10,20,10,
		7
	};

	hb_vmExecute( pcode, symbols );
}

