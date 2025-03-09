/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/woy.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_WOY );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( DOW );
HB_FUNC_EXTERN( HB_STOD );
HB_FUNC( FT_DOY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WOY )
{ "FT_WOY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_WOY )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL },
{ "HB_STOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STOD )}, NULL },
{ "FT_DOY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_DOY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WOY, "hbnf/woy.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WOY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WOY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_WOY )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,176,1,0,95,1,12,1,28,85,176,2,
		0,176,3,0,95,1,12,1,92,4,12,2,80,5,
		92,8,176,4,0,176,5,0,95,5,106,5,48,49,
		48,49,0,72,12,1,12,1,49,80,2,122,80,4,
		95,1,176,5,0,95,5,106,5,48,49,48,49,0,
		72,12,1,49,95,2,49,23,80,3,95,3,121,15,
		28,14,174,4,0,126,3,249,255,25,243,100,80,4,
		95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_DOY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,12,1,28,37,95,1,
		176,5,0,176,2,0,176,3,0,95,1,12,1,92,
		4,12,2,106,5,48,49,48,49,0,72,12,1,49,
		23,80,2,25,5,100,80,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

