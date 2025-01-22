// msoconst.ch
// for word ole

#define msoLineSolid          1  // Line is solid.
#define msoLineSquareDot      2  // Line is made up of square dots.
#define msoLineRoundDot       3  // Line is made up of round dots.
#define msoLineDash           4  // Line consists of dashes only.
#define msoLineDashDot        5  // Line is a dash-dot pattern.
#define msoLineDashDotDot     6  // Line is a dash-dot-dot pattern.
#define msoLineLongDash       7  // Line consists of long dashes.
#define msoLineLongDashDot    8  // Line is a long dash-dot pattern.
#define msoLineDashStyleMixed -2 // Not supported.

#define wdCell	      12	//A cell.
#define wdCharacter	1	//A character.
#define wdCharacterFormatting	13	//Character formatting.
#define wdColumn	   9	//A column.
#define wdItem	      16	//The selected item.
#define wdLine	      5	//A line.
#define wdParagraph	4	//A paragraph.
#define wdParagraphFormatting	14	//Paragraph formatting.
#define wdRow	      10	//A row.
#define wdScreen	   7	//The screen dimensions.
#define wdSection	   8	//A section.
#define wdSentence	3	//A sentence.
#define wdStory	   6	//A story.
#define wdTable	   15	//A table.
#define wdWindow	   11	//A window.
#define wdWord	      2	//A word.

#define wdExtend	   1	//The end of the selection is extended to the end of the specified unit.
#define wdMove	      0	//The selection is collapsed to an insertion point and moved to the end of the specified unit. Default.wdExtend	1	The end of the selection is extended to the end of the specified unit.

#define wdGoToBookmark	-1	 //A bookmark.
#define wdGoToComment	6	 //A comment.
#define wdGoToEndnote	5	 //An endnote.
#define wdGoToEquation	10	 //An equation.
#define wdGoToField	   7	// A field.
#define wdGoToFootnote	4	// A footnote.
#define wdGoToGrammaticalError	14 //A grammatical error.
#define wdGoToGraphic	8 //A graphic.
#define wdGoToHeading	11 //A heading.
#define wdGoToLine	   3 //A line.
#define wdGoToObject	   9 //An object.
#define wdGoToPage	   1 //A page.
#define wdGoToPercent	12 //A percent.
#define wdGoToProofreadingError	15 //A proofreading error.
#define wdGoToSection	0 //A section.
#define wdGoToSpellingError	13 //A spelling error.
#define wdGoToTable	   2 //A table.

#define wdOrientLandscape	1
#define wdOrientPortrait	0

#define wdPaper10x14	0	//10 inches wide, 14 inches long.
#define wdPaper11x17	1	//Legal 11 inches wide, 17 inches long.
#define wdPaperA3	6	//A3 dimensions.
#define wdPaperA4	7	//A4 dimensions.
#define wdPaperA4Small	8	//Small A4 dimensions.
#define wdPaperA5	9	//A5 dimensions.
#define wdPaperB4	10	//B4 dimensions.
#define wdPaperB5	11	//B5 dimensions.
#define wdPaperCSheet	12	//C sheet dimensions.
#define wdPaperCustom	41	//Custom paper size.
#define wdPaperDSheet	13	//D sheet dimensions.
#define wdPaperEnvelope10	//25	Legal envelope, size 10.
#define wdPaperEnvelope11	//26	Envelope, size 11.
#define wdPaperEnvelope12	//27	Envelope, size 12.
#define wdPaperEnvelope14	//28	Envelope, size 14.
#define wdPaperEnvelope9	//24	Envelope, size 9.
#define wdPaperEnvelopeB4	//29	B4 envelope.
#define wdPaperEnvelopeB5	//30	B5 envelope.
#define wdPaperEnvelopeB6	//31	B6 envelope.
#define wdPaperEnvelopeC3	//32	C3 envelope.
#define wdPaperEnvelopeC4	//33	C4 envelope.
#define wdPaperEnvelopeC5	//34	C5 envelope.
#define wdPaperEnvelopeC6	//35	C6 envelope.
#define wdPaperEnvelopeC65	//36	C65 envelope.
#define wdPaperEnvelopeDL	//37	DL envelope.
#define wdPaperEnvelopeItaly	//38	Italian envelope.
#define wdPaperEnvelopeMonarch	//39	Monarch envelope.
#define wdPaperEnvelopePersonal	//40	Personal envelope.
#define wdPaperESheet	14	//E sheet dimensions.
#define wdPaperExecutive	5	//Executive dimensions.
#define wdPaperFanfoldLegalGerman	15	//German legal fanfold dimensions.
#define wdPaperFanfoldStdGerman	16	//German standard fanfold dimensions.
#define wdPaperFanfoldUS	17	//United States fanfold dimensions.
#define wdPaperFolio	18	//Folio dimensions.
#define wdPaperLedger	19	//Ledger dimensions.
#define wdPaperLegal	4	//Legal dimensions.
#define wdPaperLetter	2	//Letter dimensions.
#define wdPaperLetterSmall 3	//Small letter dimensions.
#define wdPaperNote	20	//Note dimensions.
#define wdPaperQuarto	21	//Quarto dimensions.
#define wdPaperStatement	22	//Statement dimensions.
#define wdPaperTabloid	23	//Tabloid dimensions.

#define msoTextOrientationDownward	3	//Downward
#define msoTextOrientationHorizontal	1	//Horizontal
#define msoTextOrientationHorizontalRotatedFarEast	6	//Horizontal and rotated as required for Asian language support
#define msoTextOrientationMixed		-2	//Not supported
#define msoTextOrientationUpward	2	//Upward
#define msoTextOrientationVertical	5	//Vertical
#define msoTextOrientationVerticalFarEast 4	// Vertical as required for Asian language support

#define wdAlignVerticalBottom   3   //Bottom vertical alignment.
#define wdAlignVerticalCenter   1   //Center vertical alignment.
#define wdAlignVerticalJustify  2   //Justified vertical alignment.
#define wdAlignVerticalTop      0   //Top vertical alignment.

#define wdAlignParagraphLeft    0
#define wdAlignParagraphCentre  1
#define wdAlignParagraphRight   2

#define xlPie                5
#define xlLineMarkersStacked100 67
#define xlLineStacked           63
#define xl3DPie                -4102



#define msoShapeRectangle 1
#define msoShapeRoundedRectangle 5
#define msoShapeOval 9
//https://docs.microsoft.com/en-us/office/vba/api/office.msoautoshapetype


