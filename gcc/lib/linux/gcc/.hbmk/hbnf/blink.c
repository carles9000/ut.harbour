/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/blink.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_BLINK );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( LEFT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BLINK )
{ "FT_BLINK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_BLINK )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BLINK, "hbnf/blink.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BLINK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BLINK )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_BLINK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,95,1,100,69,28,73,176,1,0,12,0,
		80,4,176,2,0,95,2,100,8,28,9,176,3,0,
		12,0,25,4,95,2,95,3,100,8,28,9,176,4,
		0,12,0,25,4,95,3,95,1,106,2,42,0,176,
		5,0,95,4,92,4,12,2,24,28,6,95,4,25,
		9,106,2,42,0,95,4,72,20,4,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

