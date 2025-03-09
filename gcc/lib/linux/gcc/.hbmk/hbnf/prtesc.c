/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "hbnf/prtesc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ESCCODE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ISDIGIT );
HB_FUNC_EXTERN( CHR );
HB_FUNC_EXTERN( VAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PRTESC )
{ "FT_ESCCODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ESCCODE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ISDIGIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISDIGIT )}, NULL },
{ "CHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PRTESC, "hbnf/prtesc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PRTESC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PRTESC )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ESCCODE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,106,1,0,80,2,122,80,4,176,1,0,
		95,1,12,1,80,5,95,4,95,5,34,29,168,0,
		176,2,0,95,1,95,4,122,12,3,80,3,95,3,
		106,2,92,0,8,28,92,176,3,0,176,2,0,95,
		1,95,4,23,122,12,3,12,1,28,74,176,3,0,
		176,2,0,95,1,95,4,92,2,72,122,12,3,12,
		1,28,54,176,3,0,176,2,0,95,1,95,4,92,
		3,72,122,12,3,12,1,28,34,96,2,0,176,4,
		0,176,5,0,176,2,0,95,1,95,4,23,92,3,
		12,3,12,1,12,1,135,126,4,4,0,25,139,95,
		3,106,2,92,0,8,28,35,176,2,0,95,1,95,
		4,23,122,12,3,106,2,92,0,8,28,17,96,2,
		0,106,2,92,0,135,126,4,2,0,26,98,255,96,
		2,0,95,3,135,174,4,0,26,86,255,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

