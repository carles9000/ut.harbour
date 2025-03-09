/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/e2d.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_E2D );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_E2D )
{ "FT_E2D", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_E2D )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_E2D, "hbnf/e2d.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_E2D
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_E2D )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_E2D )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,1,0,176,2,0,95,1,176,3,0,
		106,2,69,0,95,1,12,2,17,12,2,12,1,80,
		2,176,1,0,176,4,0,95,1,176,3,0,106,2,
		69,0,95,1,12,2,23,176,5,0,95,1,12,1,
		176,3,0,106,2,69,0,95,1,12,2,49,12,3,
		12,1,80,3,95,2,92,10,95,3,84,65,110,7
	};

	hb_vmExecute( pcode, symbols );
}

