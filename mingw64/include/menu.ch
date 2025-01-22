#ifndef _MENU_CH
#define _MENU_CH

//----------------------------------------------------------------------------//
// Creating PullDown Menus from source code

#xcommand MENU [ <oObjMenu> ] ;
             [ <of: OF, WINDOW, DIALOG, CONTROL> <oCtrl> ] ;
             [ <popup: POPUP> ] ;
             [ <l2007: 2007, _2007> ] ;
             [ <l2010: 2010, _2010> ] ;
             [ COLORMENU [ <nClrMenu>, ] <nClrMenutxt> ] ;
             [ COLORSELECT <nClrHiLi>, <nClrHiLf>, <nClrHitx> ] ;
             [ <left: COLORBMP, COLORLEFT, LEFTCOLOR> [ <nClrToBa>, ] <nClrBkBa> ] ;
             [ <right: COLORPNEL, COLORRIGHT, RIGHTCOLOR> [ <nClrToBr>, ] <nClrBkBr> ] ;
             [ COLORSEPARATOR  <nClrHiBr> ] ;
             [ <lMenuBar: MENUBAR> ] ;
             [ FONT <oFont> ] ;
             [ <lColors: COLORS> ] ;
             [ <lVert: LINESVERT> ] ;
             [ <l2013: 2013, _2013> ] ;
             [ <l2015: 2015, _2015> ] ;
             [ <lNoBorder: NOBORDER> ] ;
             [ RIGHTSPACE <nRightSp> ] ;
             [ FACTOR <nFactor> ] ;
             [ HEIGHT <nHeight> ] ;
             [ <lInherit: NOINHERIT> ] ;
             [ <lInvert: INVERT> ] ;
             [ ROUND <nRound> ] ;
             [ <lUpper: UPPERMNU> ] ;
             [ <lAdjust: ADJUST> ] ;
             [ LEFTWIDTH <nLeftWidth> ] ;
             [ <file: LOGOMENU> <cBmpLogo> ] ;
             [ <file: IMGMENU> <cImg> ] ;
             [ <file: BRUSH> <cBrush> ] ;
             [ <lCenter: NOCENTER> ] ;
             [ COLORBOX <nClrBox> ] ;
             [ SELECT <uData> ] ;
             [ COLUMNS <aCols,...> ] ;
             [ LIMIT <nLimit> ] ;
             [ <lExpand: EXPAND> ] ;
             [ <lForm: NOFORM> ] ;
             [ HEADERS <aHeads,...> ] ;
             [ ACTION <uAction,...> ] ;
             [ COLORLINEBOTTOM <nClrLBottom> ] ;
             [ COLORLINETOP <nClrLTop> ] ;
             [ LINEHEIGHT <nLineHeight> ] ;
             [ IMAGES <aImages,...> ] ;
       => ;
        [ <oObjMenu> := ] MenuBegin( <.popup.>,, <oCtrl>, <.l2007.>, <.l2010.>,,;  //<.lUnicode.>
                         <nClrMenu>, <nClrMenutxt>, ;
                         <nClrBkBa>, <nClrToBa>, <nClrHiLi>, <nClrHiLf>, ;
                         <nClrHitx>, <nClrHiBr>, <.lMenuBar.>, <oFont>, ;
                         <.lColors.>, <.lVert.>, <.l2013.>, <.l2015.>, ;
                         [!<.lNoBorder.>], <nClrToBr> ,<nClrBkBr>, <nRightSp>,;
                         <nFactor>, <nHeight>, [!<.lInherit.>], <.lInvert.>,;
                         <nRound>, <.lUpper.>, <.lAdjust.>, <nLeftWidth>, ;
                         <cBmpLogo>, <cImg>, <cBrush>, [!<.lCenter.>], <nClrBox>, ;
                         [<uData>], [\{<aCols>\}], [<nLimit>], <.lExpand.>, ;
                         [!<.lForm.>], [\{<aHeads>\}], [<uAction>], [<nClrLBottom>], ;
                         [<nClrLTop>], [<nLineHeight>], [\{<aImages>\}] )

#xcommand MENUITEM [ <oMenuItem> PROMPT ] [<cPrompt>] ;
             [ MESSAGE <cMsg> ] ;
             [ <checked: CHECK, CHECKED, MARK> ] ;
             [ <enable: ENABLED, DISABLED> ] ;
             [ <file: FILE, FILENAME, DISK> <cBmpFile> ] ;
             [ <resource: RESOURCE, RESNAME, NAME> <cResName> ] ;
             [ ACTION <uAction,...> ] ;
             [ BLOCK <bAction> ] ;
             [ <of: OF, MENU, SYSMENU> <oMenu> ] ;
             [ ACCELERATOR <nState>, <nVirtKey> ] ;
             [ <help: HELP> ] ;
             [ <HelpId: HELP ID, HELPID> <nHelpId> ] ;
             [ WHEN <uWhen> ] ;
             [ <lDegrade: DEGRADE> ] ;
             [ <break: BREAK> ] ;
             [ FONT <oFont> ] ;
             [ COLORMENU [ <nClrMenu>, ] <nClrMenutxt> ] ;
             [ <left: COLORBMP, COLORLEFT, LEFTCOLOR> <nClrToBa> [, <nClrBkBa>] ] ;
             [ <right: COLORPNEL, COLORRIGHT, RIGHTCOLOR> <nClrToBr> [, <nClrBkBr> ] ] ;
             [ COLORSELECT  <nClrHiLi>, <nClrHiLf>[, <nClrHitx>] ] ;
             [ COLORSEPARATOR  <nClrHiBr> ] ;
             [ <lVert: LINESVERT> ] ;
             [ <lColors: COLORS> ] ;
             [ CHARICON <cCharBmp> ] ;
             [ HSYSBITMAP <hBmp> ] ;
             [ INDEX <nIndex> ] ;
             [ <lRight: RIGHT> ] ;
             [ <lSeparator: SEPARATOR> ] ;
             [ <lBold: BOLD> ];
             [ <lItalic: ITALIC> ];
             [ COLORBOX <nClrBox> ] ;
             [ RADIOCHECK <nItemsGroup>, <nCheck> ] ;
             [ <lDefault: ITEMDEFAULT> ] ;
             [ <lLeft: LEFT> ] ;
             [ <lControl: CONTROL> ] ;
       => ;
          [ <oMenuItem> := ] MenuAddItem( <cPrompt>, <cMsg>,;
             <.checked.>, [ Upper(<(enable)>) == "ENABLED" ],;
             [\{|oMenuItem|<uAction>\}],;
             <cBmpFile>, <cResName>, <oMenu>, <bAction>, <nState>, <nVirtKey>,;
             <.help.>, <nHelpId>, [\{|oMenuItem|<uWhen>\}], <.break.>, ,<.lDegrade.>, ;
             <.lSeparator.>, ;
             <oFont>, [<nClrMenu>], <nClrMenutxt>, <nClrToBa>, <nClrBkBa>, ;
             <nClrHiLi>, <nClrHiLf>, [<nClrHitx>], <nClrHiBr>, <.lColors.>, ;
             <.lVert.>, <cCharBmp>,,,,, <hBmp>, <nClrToBr> ,<nClrBkBr>, ;
             <.lRight.>, <.lBold.>, <.lItalic.>, [<nIndex>], <nClrBox>, ;
             <nItemsGroup>, <nCheck>, <.lDefault.>, <.lLeft.>, <.lControl.>  )

// New MRU technology in FiveWin. See SAMPLES\TestMru.prg !!!

#xcommand MRU <oMru> ;
             [ <Ini: INI, ININAME, FILENAME, NAME, DISK> <cIniFile> ] ;
             [ SECTION <cSection> ] ;
             [ <size: SIZE, ITEMS> <nItems> ] ;
             [ MESSAGE <cMsg> ] ;
             [ ACTION <uAction> ] ;
             [ <of: OF, MENU> <oMenu> ] ;
             [ ITEMPOS <nMenuPos> ] ;
             [ CHARICON <cCharBmp> ] ;
             [ HSYSBITMAP <hBmp> ] ;
             [ <lNoNumber: NONUMBER> ] ;
       => ;
          <oMru> := TMru():New( <cIniFile>, <cSection>, <nItems>, <cMsg>,;
             [{|cMruItem,oMenuItem|<uAction>}], <oMenu>, <nMenuPos>, ;
             <cCharBmp>, <hBmp>, <.lNoNumber.> )

#xcommand SEPARATOR [<oMenuItem>] => ;
              [<oMenuItem>:=] MenuAddItem(,,,,,,,,,,,,,,,,,.T.,,,,,,,,,,,,,,,,,)

#xcommand ENDMENU => MenuEnd()

//----------------------------------------------------------------------------//
// Creating PullDown Menus from resources

#xcommand DEFINE MENU <oMenu> ;
             [ <res: RESOURCE, NAME, RESNAME> <cResName> ] ;
             [ <popup: POPUP> ] ;
             [ <l2007: 2007, _2007> ] ;
             [ <l2010: 2010, _2010> ] ;
             [ COLORMENU  <nClrMenu> ,<nClrMenutxt> ] ;
             [ COLORSELECT  <nClrHiLi> ,<nClrHiLf> ,<nClrHitx> ] ;
             [ <left: COLORBMP, COLORLEFT>  <nClrToBa> ,<nClrBkBa> ] ;
             [ <right: COLORPNEL, COLORRIGHT>  <nClrToBr> ,<nClrBkBr> ] ;
             [ COLORSEPARATOR  <nClrHiBr> ] ;
             [ <lMenuBar: MENUBAR> ] ;
             [ FONT <oFont> ] ;
             [ <lColors: COLORS> ] ;
             [ <lVert: LINESVERT> ] ;
             [ <l2013: 2013, _2013> ] ;
             [ <l2015: 2015, _2015> ] ;
             [ <lNoBorder: NOBORDER> ] ;
             [ HEIGHT <nHeight> ] ;
             [ <lInherit: NOINHERIT> ] ;
             [ <lInvert: INVERT> ] ;
             [ ROUND <nRound> ] ;
             [ <lUpper: UPPERMNU> ] ;
             [ <lAdjust: ADJUST> ] ;
             [ LEFTWIDTH <nLeftWidth> ] ;
             [ <file: LOGOMENU> <cBmpLogo> ] ;
             [ <file: IMGMENU> <cImg> ] ;
             [ <file: BRUSH> <cBrush> ] ;
             [ <lCenter: NOCENTER> ] ;
             [ COLORBOX <nClrBox> ] ;
             [ COLORLINEBOTTOM <nClrLBottom> ] ;
             [ COLORLINETOP <nClrLTop> ] ;
             [ LINEHEIGHT <nLineHeight> ] ;
       => ;
      <oMenu> := TMenu():ReDefine( <cResName>, <.popup.>, <.l2007.>, <.l2010.>,,;  //<.lUnicode.>
                            <nClrMenu>, <nClrMenutxt>, <nClrToBa>, <nClrBkBa>, ;
                            <nClrHiLi> ,<nClrHiLf>, <nClrHitx>, <nClrHiBr>, ;
                            <.lMenuBar.>, <oFont>, <.lColors.>, <.lVert.>, ;
                            <.l2013.>, <.l2015.>, [!<.lNoBorder.>], ;
                            <nClrToBr> ,<nClrBkBr>, <nHeight>, [!<.lInherit.>], <.lInvert.>,;
                            <nRound>, <.lUpper.>, <.lAdjust.>, <nLeftWidth>, ;
                            <cBmpLogo>, <cImg>, <cBrush>, [!<.lCenter.>], <nClrBox>,;
                            [<nClrLBottom>], [<nClrLTop>], [<nLineHeight>] )

#xcommand REDEFINE MENUITEM [ <oMenuItem> PROMPT ] [<cPrompt>] ;
             [ ID <nId> ] ;
             [ <of: OF, MENU> <oMenu> ] ;
             [ ACTION <uAction> ] ;
             [ BLOCK  <bAction> ] ;
             [ MESSAGE <cMsg> ] ;
             [ <checked: CHECK, CHECKED, MARK> ] ;
             [ <enable: ENABLED, DISABLED> ] ;
             [ <file: FILE, FILENAME, DISK> <cBmpFile> ] ;
             [ <resource: RESOURCE, RESNAME, NAME> <cResName> ] ;
             [ ACCELERATOR <nState>, <nVirtKey> ] ;
             [ <HelpId: HELP ID, HELPID> <nHelpId> ] ;
             [ WHEN <uWhen> ] ;
             [ FONT <oFont> ] ;
             [ COLORMENU  <nClrMenu>, <nClrMenutxt> ] ;
             [ <left: COLORBMP, COLORLEFT>  <nClrToBa>, <nClrBkBa> ] ;
             [ <right: COLORPNEL, COLORRIGHT> <nClrToBr> ,<nClrBkBr> ] ;
             [ COLORSELECT  <nClrHiLi>, <nClrHiLf>, <nClrHitx> ] ;
             [ COLORSEPARATOR  <nClrHiBr> ] ;
             [ <lVert: LINESVERT> ] ;
             [ <lColors: COLORS> ] ;
             [ CHARICON <cCharBmp> ] ;
             [ COLORBOX <nClrBox> ] ;
             [ RADIOCHECK <nItemsGroup>, <nCheck> ] ;
             [ <lDefault: ITEMDEFAULT> ] ;
             [ <lControl: CONTROL> ] ;
       => ;
          [ <oMenuItem> := ] TMenuItem():ReDefine( <cPrompt>, <cMsg>,;
             <.checked.>, [ Upper(<(enable)>) == "ENABLED" ], <{uAction}>,;
             <cBmpFile>, <cResName>, <oMenu>, <bAction>, <nId>,;
             <nState>, <nVirtKey>, <nHelpId>, [\{|oMenuItem|<uWhen>\}], <oFont>, ;
             <nClrMenu>, <nClrMenutxt>, <nClrToBa>, <nClrBkBa>, ;
             <nClrHiLi>, <nClrHiLf>, <nClrHitx>, <nClrHiBr>, <.lColors.>, ;
             <.lVert.>, <cCharBmp>, <nClrToBr> ,<nClrBkBr>, <nClrBox>, ;
             <nItemsGroup>, <nCheck>, <.lDefault.>, <.lControl.>  )

//----------------------------------------------------------------------------//

#xcommand DEFINE MENU <oMenu> OF <oWnd> ;
       => ;
          <oMenu> := TMenu():New( .f., <oWnd> )

#xcommand SET MENU OF <oWnd> TO <oMenu> => <oWnd>:SetMenu( <oMenu> )

//----------------------------------------------------------------------------//
// PopUps Management

#xcommand ACTIVATE <menu:POPUP,MENU> <oMenu> ;
             [ AT <nRow>, <nCol> ] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ FLAGS <nFlags> ] ;
             [ <save: SAVE> ] ;
       => ;
          <oMenu>:Activate( <nRow>, <nCol>, <oWnd>, ! <.save.>, <nFlags> )

//----------------------------------------------------------------------------//
// Using Window System Menu

#xcommand REDEFINE SYSMENU [<oMenu>] ;
             [ <of: OF, WINDOW, DIALOG> <oWnd> ] ;
             [ <l2007: 2007, _2007> ] ;
             [ <l2010: 2010, _2010> ] ;
             [ COLORMENU  <nClrMenu> ,<nClrMenutxt> ] ;
             [ COLORSELECT  <nClrHiLi> ,<nClrHiLf> ,<nClrHitx> ] ;
             [ <left: COLORBMP, COLORLEFT>  <nClrToBa> ,<nClrBkBa> ] ;
             [ <right: COLORPNEL, COLORRIGHT>  <nClrToBr> ,<nClrBkBr> ] ;
             [ COLORSEPARATOR  <nClrHiBr> ] ;
             [ FONT <oFont> ] ;
             [ <lColors: COLORS> ] ;
             [ <lVert: LINESVERT> ] ;
             [ <l2013: 2013, _2013> ] ;
             [ <l2015: 2015, _2015> ] ;
             [ <lNoBorder: NOBORDER> ] ;
             [ HEIGHT <nHeight> ] ;
             [ ROUND <nRound> ] ;
             [ <lUpper: UPPERMNU> ] ;
             [ <lAdjust: ADJUST> ] ;
             [ LEFTWIDTH <nLeftWidth> ] ;
             [ <file: LOGOMENU> <cBmpLogo> ] ;
             [ <file: IMGMENU> <cImg> ] ;
             [ <file: BRUSH> <cBrush> ] ;
             [ <lCenter: NOCENTER> ] ;
             [ COLORBOX <nClrBox> ] ;
             [ SELECT <uData> ] ;
             [ COLUMNS <aCols,...> ] ;
             [ LIMIT <nLimit> ] ;
             [ <lExpand: EXPAND> ] ;
             [ <lForm: NOFORM> ] ;
       => ;
          [<oMenu> :=] MenuBegin( .F., .T., <oWnd>, <.l2007.>, <.l2010.>,,;  //<.lUnicode.>
                         <nClrMenu>, <nClrMenutxt>, ;
                         <nClrBkBa>, <nClrToBa>, <nClrHiLi> ,<nClrHiLf>, ;
                         <nClrHitx>, <nClrHiBr>, .F. , <oFont>, ;
                         <.lColors.>, <.lVert.>, <.l2013.>, <.l2015.>, ;
                         .T., <nClrToBr> ,<nClrBkBr>, , , <nHeight>,;
                         , , <nRound>, <.lUpper.>, <.lAdjust.>, <nLeftWidth>, ;
                         <cBmpLogo>, <cImg>, <cBrush>, [!<.lCenter.>], <nClrBox>, ;
                         [<uData>], [\{<aCols>\}], [<nLimit>], <.lExpand.>, [!<.lForm.>] )
          /*
          [<oMenu> :=] MenuBegin( .f., .t., <oWnd>, , , , , , , , , ;
                                  , , , .F., , , , , )
          */
#xcommand ENDSYSMENU => MenuEnd()

//----------------------------------------------------------------------------//

#endif
