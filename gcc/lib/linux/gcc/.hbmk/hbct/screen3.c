/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/screen3.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( CLEAREOL );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( CLEARWIN );
HB_FUNC( CLEOL );
HB_FUNC( CLWIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SCREEN3 )
{ "CLEAREOL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLEAREOL )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "CLEARWIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( CLEARWIN )}, NULL },
{ "CLEOL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLEOL )}, NULL },
{ "CLWIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLWIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SCREEN3, "../contrib/hbct/screen3.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SCREEN3
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SCREEN3 )
   #include "hbiniseg.h"
#endif

HB_FUNC( CLEAREOL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,95,1,12,1,31,9,176,2,
		0,12,0,80,1,176,3,0,95,1,95,2,95,1,
		100,95,3,95,4,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CLEOL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,12,1,31,9,176,2,
		0,12,0,80,1,176,3,0,95,1,95,2,95,1,
		100,92,7,106,2,32,0,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CLWIN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,3,0,95,1,95,2,100,100,92,7,
		106,2,32,0,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

