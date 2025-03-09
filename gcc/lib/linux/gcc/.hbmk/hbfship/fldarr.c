/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbfship/fldarr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FIELDGETARR );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( FCOUNT );
HB_FUNC_EXTERN( FIELDGET );
HB_FUNC( FIELDPUTARR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FIELDPUT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FLDARR )
{ "FIELDGETARR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FIELDGETARR )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "FCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCOUNT )}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDGET )}, NULL },
{ "FIELDPUTARR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FIELDPUTARR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "FIELDPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDPUT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FLDARR, "../contrib/hbfship/fldarr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FLDARR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FLDARR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FIELDGETARR )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,95,1,100,69,28,16,176,1,0,12,0,
		80,2,176,2,0,95,1,20,1,176,3,0,12,0,
		80,4,95,4,3,1,0,80,3,122,165,80,5,25,
		17,176,4,0,95,5,12,1,95,3,95,5,2,175,
		5,0,95,4,15,28,238,95,2,100,69,28,9,176,
		2,0,95,2,20,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FIELDPUTARR )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,95,2,100,69,28,16,176,1,0,12,0,
		80,3,176,2,0,95,2,20,1,176,3,0,12,0,
		80,4,95,4,176,6,0,95,1,12,1,15,28,11,
		176,6,0,95,1,12,1,80,4,122,165,80,5,25,
		26,95,1,95,5,1,100,69,28,14,176,7,0,95,
		5,95,1,95,5,1,20,2,175,5,0,95,4,15,
		28,229,95,3,100,69,28,9,176,2,0,95,3,20,
		1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

