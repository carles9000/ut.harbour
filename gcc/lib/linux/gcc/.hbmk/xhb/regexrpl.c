/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/regexrpl.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_REGEXREPLACE );
HB_FUNC_EXTERN( HB_REGEXALL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( STUFF );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_REGEXRPL )
{ "HB_REGEXREPLACE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_REGEXREPLACE )}, NULL },
{ "HB_REGEXALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEXALL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "STUFF", {HB_FS_PUBLIC}, {HB_FUNCNAME( STUFF )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_REGEXRPL, "xhb/regexrpl.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_REGEXRPL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_REGEXRPL )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_REGEXREPLACE )
{
	static const HB_BYTE pcode[] =
	{
		13,8,7,121,80,11,176,1,0,95,1,95,2,95,
		4,95,5,95,6,95,7,9,12,7,80,8,95,2,
		80,10,176,2,0,95,8,12,1,31,123,95,8,96,
		9,0,129,1,1,28,112,176,3,0,95,9,12,1,
		28,100,176,4,0,95,9,12,1,122,16,28,89,176,
		3,0,95,9,122,1,12,1,28,78,95,9,122,1,
		80,9,176,4,0,95,9,12,1,92,3,8,28,60,
		95,9,122,1,80,12,95,9,92,2,1,80,13,176,
		4,0,95,12,12,1,80,14,176,4,0,95,3,12,
		1,80,15,176,5,0,95,10,95,13,95,11,49,95,
		14,95,3,12,4,80,10,96,11,0,95,14,95,15,
		49,135,130,31,148,132,95,10,110,7
	};

	hb_vmExecute( pcode, symbols );
}

