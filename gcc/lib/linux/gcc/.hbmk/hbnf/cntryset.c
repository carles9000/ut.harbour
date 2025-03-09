/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/cntryset.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_SETCENTURY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( __SETCENTURY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CNTRYSET )
{ "FT_SETCENTURY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_SETCENTURY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CNTRYSET, "hbnf/cntryset.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CNTRYSET
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CNTRYSET )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_SETCENTURY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,176,2,0,176,3,0,12,0,
		12,1,12,1,92,10,8,80,2,176,4,0,95,1,
		12,1,28,9,176,5,0,95,1,20,1,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

