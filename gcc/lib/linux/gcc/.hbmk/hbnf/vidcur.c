/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/vidcur.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SETVCUR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC( FT_GETVCUR );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( COL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VIDCUR )
{ "FT_SETVCUR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SETVCUR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "FT_GETVCUR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_GETVCUR )}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_VIDCUR, "hbnf/vidcur.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_VIDCUR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_VIDCUR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SETVCUR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,1,0,95,2,95,3,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_GETVCUR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,25,48,92,6,80,2,92,7,80,3,25,
		77,92,4,80,2,92,7,80,3,25,67,121,80,2,
		92,7,80,3,25,58,121,80,2,92,3,80,3,25,
		49,121,165,80,3,80,2,25,41,176,3,0,12,0,
		133,5,0,97,1,0,0,0,25,197,97,2,0,0,
		0,25,200,97,3,0,0,0,25,203,97,4,0,0,
		0,25,205,100,25,211,95,2,95,3,176,4,0,12,
		0,176,5,0,12,0,4,4,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

