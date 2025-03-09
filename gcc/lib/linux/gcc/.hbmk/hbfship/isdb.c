/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbfship/isdb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( ISDBEXCL );
HB_FUNC_EXTERN( DBINFO );
HB_FUNC( ISDBFLOCK );
HB_FUNC( ISDBRLOCK );
HB_FUNC_EXTERN( DBRECORDINFO );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ISDB )
{ "ISDBEXCL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISDBEXCL )}, NULL },
{ "DBINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBINFO )}, NULL },
{ "ISDBFLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISDBFLOCK )}, NULL },
{ "ISDBRLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISDBRLOCK )}, NULL },
{ "DBRECORDINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBRECORDINFO )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ISDB, "../contrib/hbfship/isdb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ISDB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ISDB )
   #include "hbiniseg.h"
#endif

HB_FUNC( ISDBEXCL )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,36,12,1,68,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISDBFLOCK )
{
	static const HB_BYTE pcode[] =
	{
		176,1,0,92,20,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISDBRLOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,1,0,92,20,12,1,21,31,24,73,
		176,1,0,92,36,12,1,68,21,31,12,73,176,4,
		0,92,2,95,1,12,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

