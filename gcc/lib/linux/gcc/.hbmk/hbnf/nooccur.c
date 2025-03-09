/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/nooccur.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_NOOCCUR );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( STRTRAN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NOOCCUR )
{ "FT_NOOCCUR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_NOOCCUR )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NOOCCUR, "hbnf/nooccur.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NOOCCUR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NOOCCUR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_NOOCCUR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,1,0,95,3,12,1,28,6,95,3,
		28,20,176,2,0,95,1,12,1,80,1,176,2,0,
		95,2,12,1,80,2,176,3,0,95,1,12,1,121,
		8,31,13,176,3,0,95,2,12,1,121,8,28,5,
		121,25,37,176,4,0,176,3,0,95,2,12,1,176,
		3,0,176,5,0,95,2,95,1,12,2,12,1,49,
		176,3,0,95,1,12,1,18,12,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

