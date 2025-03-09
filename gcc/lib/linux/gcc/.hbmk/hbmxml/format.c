/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbmxml/format.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MXMLELEMENTSETATTRF );
HB_FUNC_EXTERN( MXMLELEMENTSETATTR );
HB_FUNC_EXTERN( HB_STRFORMAT );
HB_FUNC( MXMLNEWTEXTF );
HB_FUNC_EXTERN( MXMLNEWTEXT );
HB_FUNC( MXMLSETTEXTF );
HB_FUNC_EXTERN( MXMLSETTEXT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FORMAT )
{ "MXMLELEMENTSETATTRF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MXMLELEMENTSETATTRF )}, NULL },
{ "MXMLELEMENTSETATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLELEMENTSETATTR )}, NULL },
{ "HB_STRFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRFORMAT )}, NULL },
{ "MXMLNEWTEXTF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MXMLNEWTEXTF )}, NULL },
{ "MXMLNEWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWTEXT )}, NULL },
{ "MXMLSETTEXTF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MXMLSETTEXTF )}, NULL },
{ "MXMLSETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETTEXT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FORMAT, "hbmxml/format.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FORMAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FORMAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( MXMLELEMENTSETATTRF )
{
	static const HB_BYTE pcode[] =
	{
		149,0,3,176,1,0,95,1,95,2,176,2,0,95,
		3,122,164,123,2,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MXMLNEWTEXTF )
{
	static const HB_BYTE pcode[] =
	{
		149,0,3,176,4,0,95,1,95,2,176,2,0,95,
		3,122,164,123,2,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MXMLSETTEXTF )
{
	static const HB_BYTE pcode[] =
	{
		149,0,3,176,6,0,95,1,95,2,176,2,0,95,
		3,122,164,123,2,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

