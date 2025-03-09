/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/rand1.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_RAND1 );
HB_FUNC_EXTERN( SECONDS );
HB_FUNC_EXTERN( MOD );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RAND1 )
{ "FT_RAND1", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_RAND1 )}, NULL },
{ "SECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SECONDS )}, NULL },
{ "MOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOD )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RAND1, "hbnf/rand1.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RAND1
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RAND1 )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_RAND1 )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,3,0,97,0,225,245,5,80,2,97,
		69,93,223,1,80,3,103,1,0,100,8,28,9,176,
		1,0,12,0,25,5,103,1,0,82,1,0,95,1,
		176,2,0,103,1,0,95,3,65,23,95,2,12,2,
		165,82,1,0,95,2,18,65,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,3,0,1,0,116,3,0,179,1,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

