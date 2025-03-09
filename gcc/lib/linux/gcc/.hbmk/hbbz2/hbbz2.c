/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbbz2/hbbz2.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_BZ2_COMPRESS );
HB_FUNC_EXTERN( HB_BZ2_COMPRESSBOUND );
HB_FUNC_EXTERN( HB_BZ2_UNCOMPRESS );
HB_FUNC_EXTERN( HB_BZ2_UNCOMPRESSLEN );
HB_FUNC_EXTERN( HB_BZ2_VERSION );
HB_FUNC( __HBEXTERN__HBBZ2__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBBZ2 )
{ "HB_BZ2_COMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2_COMPRESS )}, NULL },
{ "HB_BZ2_COMPRESSBOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2_COMPRESSBOUND )}, NULL },
{ "HB_BZ2_UNCOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2_UNCOMPRESS )}, NULL },
{ "HB_BZ2_UNCOMPRESSLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2_UNCOMPRESSLEN )}, NULL },
{ "HB_BZ2_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BZ2_VERSION )}, NULL },
{ "__HBEXTERN__HBBZ2__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBBZ2__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBBZ2, "../contrib/hbbz2/hbbz2.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBBZ2
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBBZ2 )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBBZ2__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

