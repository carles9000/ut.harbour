/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/diskfunc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_DSKSIZE );
HB_FUNC_EXTERN( HB_DISKSPACE );
HB_FUNC_EXTERN( HB_OSDRIVESEPARATOR );
HB_FUNC( FT_DSKFREE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DISKFUNC )
{ "FT_DSKSIZE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DSKSIZE )}, NULL },
{ "HB_DISKSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISKSPACE )}, NULL },
{ "HB_OSDRIVESEPARATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSDRIVESEPARATOR )}, NULL },
{ "FT_DSKFREE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DSKFREE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DISKFUNC, "hbnf/diskfunc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DISKFUNC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DISKFUNC )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_DSKSIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,176,2,0,12,0,72,
		92,3,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_DSKFREE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,176,2,0,12,0,72,
		122,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

