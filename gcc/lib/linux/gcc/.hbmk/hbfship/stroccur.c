/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbfship/stroccur.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( STROCCURS );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HB_AT );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_STROCCUR )
{ "STROCCURS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( STROCCURS )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HB_AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_AT )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_STROCCUR, "../contrib/hbfship/stroccur.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_STROCCUR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_STROCCUR )
   #include "hbiniseg.h"
#endif

HB_FUNC( STROCCURS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,121,80,4,121,80,5,176,1,0,95,1,
		12,1,28,86,176,1,0,95,2,12,1,28,77,176,
		2,0,95,3,176,3,0,12,0,92,3,35,12,2,
		28,26,176,4,0,95,1,95,2,95,5,23,12,3,
		165,80,5,121,69,28,41,174,4,0,25,234,176,4,
		0,95,1,95,2,95,5,12,3,165,80,5,121,69,
		28,18,174,4,0,96,5,0,176,5,0,95,1,12,
		1,135,25,224,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

