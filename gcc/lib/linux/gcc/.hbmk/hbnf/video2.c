/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/video2.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_CLS );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_SCROLL );
HB_FUNC( FT_VIDSTR );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC( FT_WRTCHR );
HB_FUNC_EXTERN( LEFT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VIDEO2 )
{ "FT_CLS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_CLS )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SCROLL )}, NULL },
{ "FT_VIDSTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_VIDSTR )}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "FT_WRTCHR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_WRTCHR )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_VIDEO2, "hbnf/video2.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_VIDEO2
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_VIDEO2 )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_CLS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,1,0,96,5,0,121,20,2,176,2,
		0,95,1,95,2,95,3,95,4,100,100,95,5,20,
		7,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_VIDSTR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,96,4,0,121,20,2,176,4,
		0,95,1,95,2,95,3,95,4,20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_WRTCHR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,96,4,0,121,20,2,176,4,
		0,95,1,95,2,176,6,0,95,3,122,12,2,95,
		4,20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

