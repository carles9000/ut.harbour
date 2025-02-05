#define DTS_UPDOWN          0x0001 // use UPDOWN instead of MONTHCAL
#define DTS_SHOWNONE        0x0002 // allow a NONE selection
#define DTS_SHORTDATEFORMAT 0x0000 // use the short date format DEFAULT
#define DTS_LONGDATEFORMAT  0x0004 // use the long date format




#command @ <nRow>, <nCol> DTPICKER [ <oDTPicker> VAR ] <uVar> ;
            [ PICTURE <pic> ] ;
            [ <dlg: OF, WINDOW, DIALOG> <oWnd> ] ;
            [ VALID <ValidFunc> ] ;
            [ <color:COLOR,COLORS> <nClrFore> [,<nClrBack>] ] ;
            [ SIZE <nWidth>, <nHeight> ]  ;
            [ FONT <oFont> ] ;
            [ <design: DESIGN> ] ;
            [ CURSOR <oCursor> ] ;
            [ <pixel: PIXEL> ] ;
            [ MESSAGE <cMsg> ] ;
            [ <update: UPDATE> ] ;
            [ WHEN <uWhen> ] ;
            [ ON CHANGE <uChange> ] ;
            [ <help:HELPID, HELP ID> <nHelpId> ] ;
            [ STYLE <nStyle> ] ;
       => ;
          [ <oDTPicker> := ] TDatePick():New( <nRow>, <nCol>, bSETGET(<uVar>),;
                                        [<oWnd>], <nWidth>, <nHeight>, <{ValidFunc}>,;
                                        <nClrFore>, <nClrBack>, <oFont>, <.design.>,;
                                        <oCursor>, <.pixel.>, <cMsg>, <.update.>, <{uWhen}>,;
                                        [\{|Self| <uChange>\}], <nHelpId>, ;
                                        <pic>, [<nStyle>] )


#xcommand REDEFINE DTPICKER [ <oDTPicker> VAR ] <uVar> ;
             [ ID <nId> ] ;
             [ PICTURE <pic> ] ;
             [ <dlg: OF, WINDOW, DIALOG> <oDlg> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ <color: COLOR,COLORS> <nClrFore> [,<nClrBack>] ] ;
             [ FONT <oFont> ] ;
             [ CURSOR <oCursor> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <update: UPDATE> ] ;
             [ WHEN <uWhen> ] ;
             [ VALID <uValid> ] ;
             [ ON CHANGE <uChange> ] ;
       => ;
          [ <oDTPicker> := ] TDatePick():ReDefine( <nId>, bSETGET(<uVar>),;
             <oDlg>, <nHelpId>, <nClrFore>, <nClrBack>, <oFont>, <oCursor>,;
             <cMsg>, <.update.>, <{uWhen}>, <{uValid}>,;
             [\{|Self| <uChange>\}], <pic> )


#command @ <nRow>, <nCol> TMPICKER [ <oDTPicker> VAR ] <uVar> ;
            [ <dlg: OF, WINDOW, DIALOG> <oWnd> ] ;
            [ VALID <ValidFunc> ] ;
            [ <color:COLOR,COLORS> <nClrFore> [,<nClrBack>] ] ;
            [ SIZE <nWidth>, <nHeight> ]  ;
            [ FONT <oFont> ] ;
            [ <design: DESIGN> ] ;
            [ CURSOR <oCursor> ] ;
            [ <pixel: PIXEL> ] ;
            [ MESSAGE <cMsg> ] ;
            [ <update: UPDATE> ] ;
            [ WHEN <uWhen> ] ;
            [ ON CHANGE <uChange> ] ;
            [ <help:HELPID, HELP ID> <nHelpId> ] ;
       => ;
          [ <oDTPicker> := ] TTimePick():New( <nRow>, <nCol>, bSETGET(<uVar>),;
                                        [<oWnd>], <nWidth>, <nHeight>, <{ValidFunc}>,;
                                        <nClrFore>, <nClrBack>, <oFont>, <.design.>,;
                                        <oCursor>, <.pixel.>, <cMsg>, <.update.>, <{uWhen}>,;
                                        [\{|Self| <uChange>\}], <nHelpId> )


#xcommand REDEFINE TMPICKER [ <oTMPicker> VAR ] <uVar> ;
             [ ID <nId> ] ;
             [ <dlg: OF, WINDOW, DIALOG> <oDlg> ] ;
             [ <help:HELPID, HELP ID> <nHelpId> ] ;
             [ <color: COLOR,COLORS> <nClrFore> [,<nClrBack>] ] ;
             [ FONT <oFont> ] ;
             [ CURSOR <oCursor> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <update: UPDATE> ] ;
             [ WHEN <uWhen> ] ;
             [ VALID <uValid> ] ;
             [ ON CHANGE <uChange> ] ;
       => ;
          [ <oTMPicker> := ] TTimePick():Redefine( <nId>, bSETGET(<uVar>),;
             <oDlg>, <nHelpId>, <nClrFore>, <nClrBack>, <oFont>, <oCursor>,;
             <cMsg>, <.update.>, <{uWhen}>, <{uValid}>,;
             [\{|Self| <uChange>\}] )

