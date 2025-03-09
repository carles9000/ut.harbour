/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "xhb/dirrec.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DIRECTORYRECURSE );
HB_FUNC_EXTERN( HB_FNAMESPLIT );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_DIRSCAN );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( AEVAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DIRREC )
{ "DIRECTORYRECURSE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DIRECTORYRECURSE )}, NULL },
{ "HB_FNAMESPLIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMESPLIT )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_DIRSCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSCAN )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DIRREC, "xhb/dirrec.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DIRREC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DIRREC )
   #include "hbiniseg.h"
#endif

HB_FUNC( DIRECTORYRECURSE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,176,1,0,95,1,96,4,0,96,6,0,
		96,5,0,20,4,96,6,0,95,5,135,176,2,0,
		96,2,0,106,1,0,20,2,176,3,0,95,4,95,
		6,176,4,0,176,5,0,95,2,12,1,106,2,68,
		0,12,2,12,3,80,3,176,6,0,95,3,89,22,
		0,1,0,1,0,4,0,95,255,95,1,122,1,72,
		165,95,1,122,2,6,20,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

