#ifndef _PRINT_CH
#define _PRINT_CH

//----------------------------------------------------------------------------//
// Printer

#xcommand PRINT [ <oPrint> ] ;
             [ <name: NAME, TITLE, DOC> <cDocument> ] ;
             [ <user: FROM USER> ] ;
             [ <prvw: PREVIEW> [<lmodal: MODAL>] ] ;
             [ TO  <xModel> ] ;
             [ <sele: SELECTION> ] ;
             [ FILE <cFile> ] ;
       => ;
      [ <oPrint> := ] PrintBegin( [<cDocument>], <.user.>, <.prvw.>, <xModel>, ;
                                  <.lmodal.>, <.sele.>, <cFile> )

#xcommand PRINTER [ <oPrint> ] ;
             [ <name: NAME, TITLE, DOC> <cDocument> ] ;
             [ <user: FROM USER> ] ;
             [ <prvw: PREVIEW> [<lmodal: MODAL>] ] ;
             [ TO  <xModel> ] ;
             [ <sele: SELECTION> ] ;
             [ FILE <cFile> ] ;
       => ;
      [ <oPrint> := ] PrintBegin( [<cDocument>], <.user.>, <.prvw.>, <xModel>, ;
                                  <.lmodal.>, <.sele.>, <cFile> )

#xcommand PAGE => PageBegin()

#xcommand ENDPAGE => PageEnd()

#xcommand ENDPRINT   => PrintEnd()
#xcommand ENDPRINTER => PrintEnd()

#xcommand @ <nRow>, <nCol> PRINT TO <prn> TEXT <cText> ;
      [SIZE <nWidth> [,<nHeight>] ] ;
      [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
      [FONT <fnt>] ;
      [ALIGN <aln>] ;
      [COLOR <nTxt> [,<nBck> ] ] ;
      [OUTLINE <nClr> SIZE <nSize> ] ;
      [LASTROW <lrow>] ;
   => ;
      [<lrow> := ] <prn>:SayText( <nRow>, <nCol>, <cText>, [<nWidth>], [<nHeight>], ;
            [<fnt>], [<aln>], [<nTxt>], [<nBck>], [<(unit)>], [<nClr>], [<nSize>] )

#xcommand @ <nRow>, <nCol> PRINT TO <prn> TEXT <cText> ;
      AS BARCODE [TYPE <cType>] ;
      [SIZE <nWidth> [,<nHeight>] ] ;
      [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
      [COLOR <nTxt> [,<nBck> ] ] ;
      [<lVert: VERTICAL>] ;
      [<lTran: TRANSPARENT>] ;
      [ PINSIZE <nPinSize>] ;
      [ BARSIZE <nSize> ] ;
   => ;
      [<nSize> := ] <prn>:PrintBarCode( <cText>, <nRow>, <nCol>, [<nWidth>], [<nHeight>],;
            [<(unit)>], [<cType>], [<nTxt>], [<nBck>], <.lVert.>, <.lTran.>, ;
            [<nPinSize>] )

#xcommand @ <nRow>, <nCol> PRINT TO <prn> IMAGE <img> ;
      [SIZE <nWidth> [,<nHeight>] ] ;
      [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
      [<lStr: STRETCH>] ;
      [ ALPHALEVEL <nAlpha>] ;
      [<lNoTrn: NOTRANSPARENT>] ;
      [<lGray: GRAY> ] ;
      [ALIGN <aln>] ;
      [URL <cURL> ] ;
      [LASTROW <lrow>] ;
   => ;
      [<lrow> := ] <prn>:PrintImage( <nRow>, <nCol>, <img>, [<nWidth>], [<nHeight>], ;
            [<.lStr.>], [<nAlpha>], [!<.lNoTrn.>], [<.lGray.>], [<(unit)>], [<aln>], [<cURL>] )

#xcommand @ <nRow>, <nCol> PRINT TO <prn> ;
      [<ctype: BAR,LINE,STACK,STACKL,PIE,DOUGHNUT>] CHART <otbl> ;
      [SIZE <nWidth> [,<nHeight>] ] ;
      [ COLORS <aClrs,...> ] ;
      [TITLE <title> ] ;
      [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
   => ;
      <prn>:PrintChart( <nRow>, <nCol>, <otbl>, [<nWidth>], [<nHeight>], ;
            [<(ctype)>],[\{<aClrs>\}], [<title>], [<(unit)>] )

#xcommand @ <nRow>, <nCol> PRINT TO <prn> TABLE <otbl> ;
      [SIZE <nWidth> [,<nHeight>] ] ;
      [FONT <ofnt>] ;
      [<lBorder:BORDER>] ;
      [TITLE <title> ] ;
      [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
   => ;
      <prn>:PrintTable( <nRow>, <nCol>, <otbl>, [<nWidth>], [<nHeight>], ;
            [<ofnt>],[<.lBorder.>], [<title>], [<(unit)>] )

#xcommand @ <nRow>, <nCol> PRINT TO <prn> GRAPH <ograph> ;
      SIZE <nWidth>,<nHeight> [<unit: PIXEL,MM,CM,INCHES,SCREEN>] ;
   => ;
      <prn>:PrintGraph( <nRow>, <nCol>, <ograph>, <nWidth>, <nHeight>, [<(unit)>] )

//----------------------------------------------------------------------------//

#endif
