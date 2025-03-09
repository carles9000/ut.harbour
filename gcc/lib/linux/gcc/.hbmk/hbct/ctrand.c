/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/ctrand.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( RANDOM );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( HB_RANDOMINT );
HB_FUNC( RAND );
HB_FUNC_EXTERN( HB_RANDOMSEED );
HB_FUNC_EXTERN( HB_RANDOM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CTRAND )
{ "RANDOM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RANDOM )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "HB_RANDOMINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RANDOMINT )}, NULL },
{ "RAND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RAND )}, NULL },
{ "HB_RANDOMSEED", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RANDOMSEED )}, NULL },
{ "HB_RANDOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RANDOM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CTRAND, "../contrib/hbct/ctrand.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CTRAND
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CTRAND )
   #include "hbiniseg.h"
#endif

HB_FUNC( RANDOM )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,95,1,12,1,28,19,95,1,
		28,15,176,2,0,93,0,128,93,255,127,12,2,25,
		13,176,2,0,121,97,255,255,0,0,12,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RAND )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,100,69,28,9,176,4,0,95,1,
		20,1,176,5,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

