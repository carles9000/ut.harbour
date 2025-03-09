/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/ctdummy.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DSETKBIOS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CTDUMMY )
{ "DSETKBIOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DSETKBIOS )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CTDUMMY, "../contrib/hbct/ctdummy.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CTDUMMY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CTDUMMY )
   #include "hbiniseg.h"
#endif

HB_FUNC( DSETKBIOS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,1,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,1,0,1,0,116,1,0,120,82,1,0,179,1,
		0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

