/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/dbstruxx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBCOPYSTRUCT );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( __DBSTRUCTFILTER );
HB_FUNC_EXTERN( DBSTRUCT );
HB_FUNC( DBCOPYEXTSTRUCT );
HB_FUNC_EXTERN( __DBCOPYXSTRUCT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBSTRUXX )
{ "DBCOPYSTRUCT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBCOPYSTRUCT )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "__DBSTRUCTFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBSTRUCTFILTER )}, NULL },
{ "DBSTRUCT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSTRUCT )}, NULL },
{ "DBCOPYEXTSTRUCT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBCOPYEXTSTRUCT )}, NULL },
{ "__DBCOPYXSTRUCT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBCOPYXSTRUCT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBSTRUXX, "../contrib/hbxpp/dbstruxx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBSTRUXX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBSTRUXX )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBCOPYSTRUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,176,2,0,176,3,0,
		12,0,95,2,12,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DBCOPYEXTSTRUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,5,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

