// Calex.h


#ifndef _CALEX_H_
#define _CALEX_H_

#define DT_SINGLELINE      32
#define DT_CENTER           1
#define DT_RIGHT            2
#define DT_VCENTER          4

#define BMPITEMW            22
#define BMPITEMH            22
#define ROWITEM             15
#define COLPREV             15
#define COLNEXT             40

#define PUSHEDPREV          1
#define PUSHEDNEXT          2


#define DEFAULT_GUI_FONT    17
#define SM_CXVSCROLL         2

#define CI_TOP     1
#define CI_LEFT    2
#define CI_BOTTOM  3
#define CI_RIGHT   4

#define HITTEST_HEADER   1
#define HITTEST_TIME     2
#define HITTEST_BODY     3
#define HITTEST_EMPTY    0
#define HITTEST_PLACE    1
#define HITTEST_PARAM    2

#define FLAGS_START  0
#define FLAGS_END    2
#define FLAGS_DOWN   4
#define FLAGS_RIGHT  8


#define _GFD         Calex_SetFirstDate()


#ifdef __XHARBOUR__
   #xtranslate hb_HASH([<x,...>])          => HASH(<x>)
   #xtranslate hb_HHASKEY([<x,...>])       => HHASKEY(<x>)
   #xtranslate hb_HGET([<x,...>])          => HGET(<x>)
   #xtranslate hb_HSET([<x,...>])          => HSET(<x>)
   #xtranslate hb_HVALUEAT([<x,...>])      => HGETVALUEAT(<x>)
   #xtranslate hb_HEVAL([<x,...>])         => HEVAL(<x>)
   #xtranslate hb_HPOS([<x,...>])          => HGETPOS(<x>)
   #xtranslate hb_HKEYAT([<x,...>])        => HGETKEYAT(<x>)
   #xtranslate hb_HDEL([<x,...>])          => HDEL(<x>)
#else
   #xtranslate hb_enumIndex(<!v!>) => <v>:__enumIndex()
#endif


#xcommand DEFINE CALEX <oCalex>;
          [ <of: OF, WINDOW, DIALOG, PANEL> <oWnd> ];
          [ FROM <nTop>, <nLeft> TO <nBottom>, <nRight> ];
          [ FIRST_DATE <nFirst> ];
          [ COLOR <nClrText> ];
          [ <cAdjust: ALL,TOP,LEFT,BOTTOM,RIGHT> ] ;
       => ;
           [ Calex_SetFirstDate( <nFirst> ) ];;
           <oCalex> := TCalex():New( <oWnd>, [<nFirst>], [<nClrText>], <nTop>, <nLeft>, <nBottom>, <nRight>, [ Upper(<(cAdjust)>) ] )

#xcommand DEFINE MONTH [ VIEW ] <of: OF, CALEX> <oCalex>;
          [ ON SELECT VIEW <uSelectView> ] ;
          [ ON SELECT DAY <uSelected> ] ;
          [ ON SELECT WEEK <uWeek> ] ;
          [ ON NEXT <uNext> ] ;
          [ ON PREV <uPrev> ] ;
          [ ON DELETE <uDelete> ];
          [ START HOUR <nStart> ];
          [ END HOUR <nEnd> ];
          [ <lActivate: ACTIVATE> ];
       => ;
          WITH OBJECT <oCalex>;;
             [ :oMonthView:bSelectView   := \{ | Self, oLast| <uSelectView> \} ] ;;
             [ :oMonthView:bSelected     := \{ | Self, dDate| <uSelected> \} ] ;;
             [ :oMonthView:bSelectedWeek := \{ | Self, nWeek, dDate | <uWeek> \} ] ;;
             [ :oMonthView:bOnNext       := \{ | Self, dDate| <uNext> \} ] ;;
             [ :oMonthView:bOnPrev       := \{ | Self, dDate| <uPrev> \} ] ;;
             [ :oMonthView:bOnDelete     := \{ | Self, nIdx | <uDelete> \} ] ;;
             [ :oMonthView:nStartHour    := <nStart> ] ;;
             [ :oMonthView:nEndHour      := <nEnd> ];;
             [ If( <.lActivate.>, :SetMonthView(), ) ];;
          END <oCalex>

#xcommand DEFINE DAY [ VIEW ] <of: OF, CALEX> <oCalex>;
          [ ON SELECT VIEW <uSelectView> ] ;
          [ ON LEFT CLICK <uSelected> ] ;
          [ ON RIGHT CLICK <uRSelected> ];
          [ ON NEXT <uNext> ] ;
          [ ON DELETE <uDelete> ];
          [ ON PREV <uPrev> ] ;
          [ START HOUR <nStart> ];
          [ END HOUR <nEnd> ];
          [ INTERVAL <nInterval> ];
          [ AMPM <lAmPm> ];
          [ <lActivate: ACTIVATE> ];
       => ;
          WITH OBJECT <oCalex>;;
             [ :oDayView:bSelected     := \{ | nRow, nCol, Self, dDateFrom, nTimeFrom, nTimeTo | <uSelected> \} ] ;;
             [ :oDayView:bSelectView   := \{ | Self, oLast| <uSelectView> \} ] ;;
             [ :oDayView:bOnNext       := \{ | Self, dDate| <uNext> \} ] ;;
             [ :oDayView:bOnPrev       := \{ | Self, dDate| <uPrev> \} ] ;;
             [ :oDayView:bOnDelete   := \{ | Self, nIdx | <uDelete> \} ] ;;
             [ :oDayView:bRSelected    := \{ | nRow, nCol, Self, dDateFrom, dDateTo, nTimeFrom, nTimeTo | <uRSelected> \} ] ;;
             [ :oDayView:nStartHour    := <nStart> ] ;;
             [ :oDayView:nEndHour      := <nEnd> ];;
             [ :oDayView:SetInterval( <nInterval> ) ];;
             [ :oDayView:lAmPm         := <.lAmPm.> ];;
             [ If( <.lActivate.>, :SetDayView(), ) ];;
          END <oCalex>


#xcommand DEFINE WEEK [ VIEW ] <of: OF, CALEX> <oCalex>;
          [ ON SELECT VIEW <uSelectView> ] ;
          [ ON LEFT CLICK <uSelected> ] ;
          [ ON RIGHT CLICK <uRSelected> ];
          [ ON NEXT <uNext> ] ;
          [ ON PREV <uPrev> ] ;
          [ ON DELETE <uDelete> ];
          [ START HOUR <nStart> ];
          [ END HOUR <nEnd> ];
          [ INTERVAL <nInterval> ];
          [ AMPM <lAmPm> ];
          [ <lActivate: ACTIVATE> ];
       => ;
          WITH OBJECT <oCalex>;;
             [ :oWeekView:bSelected     := \{ | nRow, nCol, Self, dDateFrom, dDateTo, nTimeFrom, nTimeTo | <uSelected> \} ] ;;
             [ :oWeekView:bSelectView   := \{ | Self, oLast | <uSelectView> \} ] ;;
             [ :oWeekView:bOnNext       := \{ | Self, dDate | <uNext> \} ] ;;
             [ :oWeekView:bOnPrev       := \{ | Self, dDate | <uPrev> \} ] ;;
             [ :oWeekView:bRSelected    := \{ | nRow, nCol, Self, dDateFrom, dDateTo, nTimeFrom, nTimeTo | <uRSelected> \} ] ;;
             [ :oWeekView:bOnDelete     := \{ | Self, nIdx | <uDelete> \} ] ;;
             [ :oWeekView:nStartHour    := <nStart> ] ;;
             [ :oWeekView:nEndHour      := <nEnd> ];;
             [ :oWeekView:SetInterval( <nInterval> ) ];;
             [ :oWeekView:lAmPm         := <.lAmPm.> ];;
             [ If( <.lActivate.>, ( :SetWeekView(), :Resize() ), ) ];;
          END <oCalex>


#endif
