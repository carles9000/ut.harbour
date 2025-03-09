/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbxpp/browdbx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( XPP_TBROWSEDB );
HB_FUNC_EXTERN( TBROWSENEW );
HB_FUNC_EXTERN( DBSKIPPER );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBGOBOTTOM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BROWDBX )
{ "XPP_TBROWSEDB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSEDB )}, NULL },
{ "TBROWSENEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBROWSENEW )}, NULL },
{ "_SKIPBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIPPER )}, NULL },
{ "_GOTOPBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "_GOBOTTOMBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOBOTTOM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BROWDBX, "../contrib/hbxpp/browdbx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BROWDBX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BROWDBX )
   #include "hbiniseg.h"
#endif

HB_FUNC( XPP_TBROWSEDB )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,1,0,95,1,95,2,95,3,95,4,
		12,4,80,5,48,2,0,95,5,89,15,0,1,0,
		0,0,176,3,0,95,1,12,1,6,112,1,73,48,
		4,0,95,5,90,8,176,5,0,12,0,6,112,1,
		73,48,6,0,95,5,90,8,176,7,0,12,0,6,
		112,1,73,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

