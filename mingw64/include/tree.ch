// Trees for FiveWin

#ifndef _TREE_CH
#define _TREE_CH

#xcommand TREE [<oTree>] ;
             [ BITMAPS <cBmpOpen>, <cBmpClose> ] ;
             [ USING <bTreeItemClass> ] ;
       => ;
          [<oTree>:=] TreeBegin( <cBmpOpen>, <cBmpClose>, [<{bTreeItemClass}>] )

#xcommand TREEITEM [<oItem> PROMPT ] <cLabel> ;
             [ RESOURCE <cResName1> [, <cResName2> ] ] ;
             [ FILENAME <cBmpOpen> [, <cBmpClose> ] ] ;
             [ <lOpened: OPENED, OPEN> ] ;
             [ ACTION <uAction> ] ;
             [ CARGO <uCargo> ] ;
             [ VALUE <uValue> ] ;
       => ;
          [<oItem> :=] _TreeItem( <cLabel>, <cResName1>, <cResName2>,;
                                  <cBmpOpen>, <cBmpClose>, <.lOpened.>, ;
                                  <{uAction}>, <uCargo>, <uValue> )

#xcommand ENDTREE => TreeEnd()

#endif
