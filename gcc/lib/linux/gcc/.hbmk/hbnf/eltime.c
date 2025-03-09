/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/eltime.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ELTIME );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( HB_NTOS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ELTIME )
{ "FT_ELTIME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ELTIME )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ELTIME, "hbnf/eltime.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ELTIME
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ELTIME )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ELTIME )
{
	static const HB_BYTE pcode[] =
	{
		13,6,2,176,1,0,176,2,0,95,1,122,92,2,
		12,3,12,1,93,16,14,65,176,1,0,176,2,0,
		95,1,92,4,92,2,12,3,12,1,92,60,65,72,
		176,1,0,176,2,0,95,1,92,7,12,2,12,1,
		72,80,7,176,1,0,176,2,0,95,2,122,92,2,
		12,3,12,1,93,16,14,65,176,1,0,176,2,0,
		95,2,92,4,92,2,12,3,12,1,92,60,65,72,
		176,1,0,176,2,0,95,2,92,7,12,2,12,1,
		72,80,8,176,3,0,95,8,95,7,49,12,1,80,
		3,176,4,0,95,3,93,16,14,18,12,1,80,4,
		176,4,0,95,3,95,4,93,16,14,65,49,92,60,
		18,12,1,80,5,95,3,95,4,93,16,14,65,49,
		95,5,92,60,65,49,80,6,176,5,0,106,3,48,
		48,0,176,6,0,95,4,12,1,72,92,2,12,2,
		106,2,58,0,72,176,5,0,106,3,48,48,0,176,
		6,0,95,5,12,1,72,92,2,12,2,72,106,2,
		58,0,72,176,5,0,106,3,48,48,0,176,6,0,
		95,6,12,1,72,92,2,12,2,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

