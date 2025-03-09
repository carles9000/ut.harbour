/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/xhbmisc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OCCURS );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_AT );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHBMISC )
{ "OCCURS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OCCURS )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_AT )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHBMISC, "xhb/xhbmisc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHBMISC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHBMISC )
   #include "hbiniseg.h"
#endif

HB_FUNC( OCCURS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,121,80,3,121,80,4,176,1,0,95,1,
		12,1,28,45,176,1,0,95,2,12,1,28,36,176,
		2,0,95,1,95,2,95,4,12,3,165,80,4,121,
		69,28,18,174,3,0,96,4,0,176,3,0,95,1,
		12,1,135,25,224,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

