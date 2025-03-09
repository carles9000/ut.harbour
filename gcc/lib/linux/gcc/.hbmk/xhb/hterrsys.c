/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/hterrsys.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SETCORRUPTFUNC );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC( SETERRORFOOTER );
HB_FUNC_EXTERN( HARDCR );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTERRSYS )
{ "SETCORRUPTFUNC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETCORRUPTFUNC )}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "SETERRORFOOTER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETERRORFOOTER )}, NULL },
{ "HARDCR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HARDCR )}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HTERRSYS, "xhb/hterrsys.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HTERRSYS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HTERRSYS )
   #include "hbiniseg.h"
#endif

HB_FUNC( SETCORRUPTFUNC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,5,0,176,1,0,95,1,12,1,28,
		7,95,1,82,1,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SETERRORFOOTER )
{
	static const HB_BYTE pcode[] =
	{
		116,5,0,103,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,5,0,2,0,116,5,0,106,2,32,0,82,2,
		0,7
	};

	hb_vmExecute( pcode, symbols );
}

