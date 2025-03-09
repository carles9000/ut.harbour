/*
 * Harbour 3.2.0dev (r2502031126)
 * GNU C 7.5 (64-bit)
 * Generated C source from "../contrib/hbtip/encqp.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( TIPENCODERQP );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TIPENCODER );
HB_FUNC_STATIC( TIPENCODERQP_NEW );
HB_FUNC_STATIC( TIPENCODERQP_ENCODE );
HB_FUNC_STATIC( TIPENCODERQP_DECODE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC( TIP_QPENCODE );
HB_FUNC( TIP_QPDECODE );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( HB_BSUBSTR );
HB_FUNC_EXTERN( HB_BCODE );
HB_FUNC_EXTERN( HB_NUMTOHEX );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( HB_BCHAR );
HB_FUNC_EXTERN( HB_HEXTONUM );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ENCQP )
{ "TIPENCODERQP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERQP )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TIPENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODER )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPENCODERQP_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERQP_NEW )}, NULL },
{ "TIPENCODERQP_ENCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERQP_ENCODE )}, NULL },
{ "TIPENCODERQP_DECODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERQP_DECODE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_QPENCODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_QPENCODE )}, NULL },
{ "TIP_QPDECODE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_QPDECODE )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "HB_BSUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BSUBSTR )}, NULL },
{ "HB_BCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCODE )}, NULL },
{ "HB_NUMTOHEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NUMTOHEX )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "HB_BCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BCHAR )}, NULL },
{ "HB_HEXTONUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HEXTONUM )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ENCQP, "../contrib/hbtip/encqp.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ENCQP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ENCQP )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIPENCODERQP )
{
   HB_BOOL fValue;
   do {
	hb_xvmVFrame( 3, 0 );
	hb_xvmSFrame( symbols + 24 );
	hb_xvmPushStatic( 1 );
	hb_xvmPushNil();
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushStaticByRef( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmSeqAlways();
	do {
	hb_xvmLocalSetInt( 1, 1L );
	hb_xvmPushSymbol( symbols + 2 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "TIPEncoderQP", 12 );
	hb_xvmPushSymbol( symbols + 4 );
	hb_xvmArrayGen( 1 );
	hb_xvmPushSymbol( symbols + 0 );
	if( hb_xvmSend( 3 ) ) break;
	hb_xvmPopLocal( 2 );
	hb_xvmPushSymbol( symbols + 5 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "New", 3 );
	hb_xvmPushSymbol( symbols + 6 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmAddInt( 8L ) ) break;
	if( hb_xvmSend( 3 ) ) break;
	hb_stackPop();
	hb_xvmPushSymbol( symbols + 5 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "Encode", 6 );
	hb_xvmPushSymbol( symbols + 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 3 ) ) break;
	hb_stackPop();
	hb_xvmPushSymbol( symbols + 5 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "Decode", 6 );
	hb_xvmPushSymbol( symbols + 8 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmSend( 3 ) ) break;
	hb_stackPop();
	hb_xvmPushSymbol( symbols + 9 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmSend( 0 ) ) break;
	hb_stackPop();
	} while( 0 );
	if( hb_xvmAlwaysBegin() ) break;
	do {
	hb_xvmPushFuncSymbol( symbols + 10 );
	hb_xvmPushStaticByRef( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmDo( 2 ) ) break;
	} while( 0 );
	if( hb_xvmAlwaysEnd() ) break;
	hb_xvmPushSymbol( symbols + 11 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmPushFuncSymbol( symbols + 12 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "InitClass", 9 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushSymbol( symbols + 13 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushVParams();
	if( hb_xvmMacroSend( 1 ) ) break;
	hb_stackPop();
lab00001: ;
	hb_xvmPushLocal( 3 );
	hb_xvmRetValue();
	/* *** END PROC *** */
	break;
lab00002: ;
	hb_xvmPushSymbol( symbols + 11 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmSend( 0 ) ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( TIPENCODERQP_NEW )
{
   do {
	hb_xvmPushSymbol( symbols + 14 );
	hb_xvmPushSelf();
	hb_xvmPushStringConst( "quoted-printable", 16 );
	if( hb_xvmSend( 1 ) ) break;
	hb_stackPop();
	hb_xvmPushSelf();
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( TIPENCODERQP_ENCODE )
{
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmPushFuncSymbol( symbols + 15 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 1 ) ) break;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_STATIC( TIPENCODERQP_DECODE )
{
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 1 ) ) break;
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( TIP_QPENCODE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 5, 1 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 5 );
	hb_xvmLocalSetInt( 6, 0L );
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 2 );
	goto lab00009;
lab00001: ;
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "\x0A", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmLocalSetInt( 6, 0L );
	goto lab00008;
lab00002: ;
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmGreaterEqualThenIntIs( 127L, &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "=\?!\"#$@[\\]^`{|}~", 16 );
	if( hb_xvmInstring() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmLessThenIntIs( 32L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "\x0D\x0A\x09", 3 );
	if( hb_xvmInstring() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00004;
lab00003: ;
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( " \x09", 2 );
	if( hb_xvmInstring() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmInc() ) break;
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPushStringConst( "\x0D\x0A", 2 );
	if( hb_xvmInstring() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00006;
lab00004: ;
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 3L ) ) break;
	if( hb_xvmGreaterThenIntIs( 75L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushStringConst( "=\x0D\x0A", 3 );
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmLocalSetInt( 6, 0L );
lab00005: ;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushStringConst( "=", 1 );
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 2 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPlusEqPop() ) break;
	if( hb_xvmLocalAddInt( 6, 3 ) ) break;
	goto lab00008;
lab00006: ;
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "\x0D", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmPushLocal( 6 );
	if( hb_xvmAddInt( 3L ) ) break;
	if( hb_xvmGreaterThenIntIs( 75L, &fValue ) ) break;
	if( !fValue )
		goto lab00007;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushStringConst( "=\x0D\x0A", 3 );
	if( hb_xvmPlusEqPop() ) break;
	hb_xvmLocalSetInt( 6, 0L );
lab00007: ;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlusEqPop() ) break;
	if( hb_xvmLocalAddInt( 6, 1 ) ) break;
lab00008: ;
	if( hb_xvmLocalIncPush( 2 ) ) break;
lab00009: ;
	hb_xvmPushLocal( 4 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushLocal( 5 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( TIP_QPDECODE )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 4, 1 );
	hb_xvmPushStringConst( "", 0 );
	hb_xvmPopLocal( 5 );
	hb_xvmPushFuncSymbol( symbols + 21 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "=\x0D\x0A", 3 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmPushFuncSymbol( symbols + 21 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushStringConst( "=\x0A", 2 );
	if( hb_xvmFunction( 2 ) ) break;
	hb_xvmPopLocal( 1 );
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	hb_xvmPopLocal( 4 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 2 );
	goto lab00004;
lab00001: ;
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushInteger( 1 );
	if( hb_xvmFunction( 3 ) ) break;
	hb_xvmPopLocal( 3 );
	hb_xvmPushLocal( 3 );
	hb_xvmPushStringConst( "=", 1 );
	if( hb_xvmExactlyEqual() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00002;
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmInc() ) break;
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 3 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmEqualIntIs( 2L, &fValue ) ) break;
	if( !fValue )
		goto lab00002;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushFuncSymbol( symbols + 23 );
	hb_xvmPushFuncSymbol( symbols + 18 );
	hb_xvmPushLocal( 1 );
	hb_xvmPushLocal( 2 );
	if( hb_xvmInc() ) break;
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 3 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlusEqPop() ) break;
	if( hb_xvmLocalAddInt( 2, 2 ) ) break;
	goto lab00003;
lab00002: ;
	hb_xvmPushLocalByRef( 5 );
	hb_xvmPushLocal( 3 );
	if( hb_xvmPlusEqPop() ) break;
lab00003: ;
	if( hb_xvmLocalIncPush( 2 ) ) break;
lab00004: ;
	hb_xvmPushLocal( 4 );
	if( hb_xvmGreater() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00001;
	hb_xvmPushLocal( 5 );
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_INITSTATICS()
{
   do {
	hb_xvmStatics( symbols + 24, 1 );
	/* *** END PROC *** */
   } while( 0 );
}

