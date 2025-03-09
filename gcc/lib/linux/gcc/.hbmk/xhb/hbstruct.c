/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/hbstruct.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_HASHADDMEMBER );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LEFT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBSTRUCT )
{ "HB_HASHADDMEMBER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_HASHADDMEMBER )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBSTRUCT, "xhb/hbstruct.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBSTRUCT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBSTRUCT )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_HASHADDMEMBER )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,95,2,100,8,32,143,0,25,82,95,3,
		100,8,29,134,0,106,1,0,80,3,25,126,95,3,
		100,8,28,120,121,80,3,25,115,95,3,100,8,28,
		109,9,80,3,25,104,95,3,100,8,28,98,134,0,
		0,0,0,80,3,25,89,95,3,100,8,28,83,90,
		4,100,6,80,3,25,75,95,3,100,8,28,69,4,
		0,0,80,3,25,62,25,60,176,1,0,176,2,0,
		95,2,122,12,2,12,1,133,7,0,106,2,83,0,
		25,156,106,2,78,0,25,164,106,2,76,0,25,169,
		106,2,68,0,25,174,106,2,67,0,25,183,106,2,
		65,0,25,191,106,2,79,0,25,198,95,1,96,5,
		0,129,1,1,28,12,95,3,95,4,95,5,2,130,
		31,248,132,7
	};

	hb_vmExecute( pcode, symbols );
}

