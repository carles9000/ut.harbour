 #xcommand  @ <nRow>, <nCol> BTNCLR [<oBtnClr>] ;
             [ SIZE <nWidth>, <nHeight> ] ;
             [ <of:OF, WINDOW, DIALOG> <oWnd> ] ;
             [ COLORSEL <nColorSel>  ] ;
             [ BITMAP <cBmpName> ] ;
             [ ACTION <uAction,...> ] ;
                => ;
  [ <oBtnClr> := ] TBtnClr():New(<nRow>, <nCol>, <oWnd>,<nWidth>, <nHeight>,;
                 <cBmpName>,, <nColorSel>, [{|Self|<uAction>}] )








