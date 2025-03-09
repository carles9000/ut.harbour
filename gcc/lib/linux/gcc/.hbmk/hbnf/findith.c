/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/findith.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_FINDITH );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FINDITH )
{ "FT_FINDITH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_FINDITH )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FINDITH, "hbnf/findith.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FINDITH
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FINDITH )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_FINDITH )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,1,0,95,4,12,1,28,6,95,4,
		28,20,176,2,0,95,1,12,1,80,1,176,2,0,
		95,2,12,1,80,2,95,3,122,8,28,13,176,3,
		0,95,1,95,2,12,2,25,49,176,3,0,95,1,
		176,4,0,95,2,95,1,106,1,0,122,95,3,17,
		12,5,12,2,165,80,5,121,8,28,5,121,25,16,
		95,5,95,3,17,176,5,0,95,1,12,1,65,72,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

