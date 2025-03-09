/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbct/showtime.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SHOWTIME );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( HB_IDLEDEL );
HB_FUNC_EXTERN( HB_IDLEADD );
HB_FUNC_EXTERN( __HBCT_DSPTIME );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SHOWTIME )
{ "SHOWTIME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SHOWTIME )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "HB_IDLEDEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEDEL )}, NULL },
{ "HB_IDLEADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEADD )}, NULL },
{ "__HBCT_DSPTIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( __HBCT_DSPTIME )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SHOWTIME, "../contrib/hbct/showtime.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SHOWTIME
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SHOWTIME )
   #include "hbiniseg.h"
#endif

HB_FUNC( SHOWTIME )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,116,6,0,176,1,0,95,1,12,1,28,
		81,95,1,121,16,28,75,95,1,176,2,0,120,12,
		1,34,28,64,103,1,0,100,69,28,10,176,3,0,
		103,1,0,20,1,176,4,0,89,37,0,0,0,6,
		0,1,0,2,0,3,0,4,0,5,0,6,0,176,
		5,0,95,255,95,254,95,253,95,252,95,251,95,250,
		12,6,6,12,1,82,1,0,25,21,103,1,0,100,
		69,28,14,176,3,0,103,1,0,20,1,100,82,1,
		0,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,6,0,1,0,116,6,0,179,1,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

