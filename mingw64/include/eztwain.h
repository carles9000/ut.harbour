// EZTWAIN.H - interface to Easy TWAIN library
// Copyright (C) 1999-2001 by Dosadi.  All Rights Reserved.

/*---------------------------------------------------------------------
Licensing Terms - EZTWAIN 2.70

This is a legal agreement between you (or your employer if you are an
employee), and Dosadi (a company in Washington State, U.S.A.)
By using this EZTWAIN code ('EZTWAIN'), you and Dosadi agree as follows:

  1. EZTWAIN is and shall remain the property of Dosadi.

  2. Dosadi grants you a nonexclusive, world-wide, royalty-free
  license to use this code to create Windows applications for personal,
  educational, or not-for-profit use.

  3. You agree to redistribute EZTWAIN to others only as an integral
  component of a software or software/hardware system, and then
  only to other members of an educational or not-for-profit organization
  to which you belong.

  4. You agree to indemnify and hold Dosadi, its owners, officers and employees
  harmless from any liabilities arising out of your use of EZTWAIN.

  5. You may modify EZTWAIN.  Any such modified EZTWAIN is subject to this
  agreement just as the original is.

  6. Dosadi reserves all rights not specifically granted in this agreement.

  7. EZTWAIN is provided "as is", and Dosadi makes no warranty of any kind
  regarding EZTWAIN.

  8. Where this agreement is in conflict with applicable law, it shall be
  construed as having been written to conform to such law while
  while giving priority to the rights of Dosadi.

---------------------------------------------------------------------*/

// Download from:    www.dosadi.com
//
// Support contact:  support@dosadi.com
//
// To license the EZTWAIN code for commercial use within your company
// or in a product, send e-mail to:
//     sales@dosadi.com
//
// >>> Maintenance history is at the end of eztwain.c <<<


#ifndef EZTWAIN_H
#define EZTWAIN_H

#ifndef _WINDOWS_
#include "windows.h"
#endif

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif	/* __cplusplus */

#ifndef EZTAPI
  #ifdef _WIN32
    #define EZTAPI WINAPI
  #else
    #define EZTAPI FAR PASCAL
  #endif
#endif

//--------- Test Call

HANDLE EZTAPI TWAIN_Testing123(LPCSTR pz, int n, HANDLE h, double d, unsigned u);
// Displays a dialog box with the parameter values in it.  Use this to
// test that you can call EZTWAIN and pass parameters correctly.
// It returns the value of the HANDLE h parameter.

//--------- Top-Level Calls

HANDLE EZTAPI TWAIN_Acquire(HWND hwndApp);
// Acquires a single image, from the currently selected Data Source, using
// EZTWAIN's preferred transfer mode.  *Currently the preferred mode is NATIVE*
//
// The minimal use of EZTWAIN.DLL is to call this function with a 0 argument.
//
// The return value is a handle to global memory containing a DIB - 
// a Device-Independent Bitmap.  Numerous EZTWAIN DIB_xxx functions can
// be used to examine, modify, and save these DIB images.  Remember to
// use TWAIN_FreeNative to free each DIB when you are done with it!
//
// Normally only one image is acquired per call: All Acquire functions shut
// down TWAIN before returning.  Use TWAIN_SetMultiTransfer to change this.
//
// By default, the default data source (DS) is opened, displays its dialog,
// and determines all the parameters of the acquisition and transfer.
// If you want to (try to) hide the DS dialog, see TWAIN_SetHideUI.
// To set acquisition parameters, you need to do something like this:
//     TWAIN_OpenDefaultSource() -or- TWAIN_OpenSource(sourceName)
//     TWAIN_Set*        - one or more capability-setting functions
//     hdib = TWAIN_Acquire(hwnd)
//     if (hdib) { ... process image, TWAIN_FreeNative(hdib); }

void EZTAPI TWAIN_FreeNative(HANDLE hdib);
// Release the memory allocated to a DIB, as returned by
// TWAIN_AcquireNative. (If you are coding in C or C++, this is just a call
// to GlobalFree.)
// If you use TWAIN_AcquireNative and don't free the returned image handle,
// it stays around taking up Windows (virtual) memory until your application
// terminates.

int EZTAPI TWAIN_SelectImageSource(HWND hwnd);
// This is the routine to call when the user chooses the "Select Source..."
// menu command from your application's File menu.
// In the standard implementation of "Select Source...", your application
// doesn't need to do anything except make this one call.
// Note: If only one TWAIN device is installed on a system, it is selected
// automatically, so there is no need for the user to do Select Source.
// You should not require your users to do Select Source before Acquire.
//
// This function posts the Source Manager's Select Source dialog box.
// It returns after the user either OK's or CANCEL's that dialog.
// A return of 1 indicates OK, 0 indicates one of the following:
//   a) The user cancelled the dialog
//   b) The Source Manager found no data sources installed
//   c) There was a failure before the Select Source dialog could be posted
//
// If you want to be meticulous, disable your "Acquire" and "Select Source"
// menu items or buttons if TWAIN_IsAvailable() returns 0 - see below.
//
// To enumerate the available data sources, see:
//     TWAIN_GetSourceList and TWAIN_GetNextSourceName

HANDLE EZTAPI TWAIN_AcquireNative(HWND hwndApp, unsigned wPixTypes);
// Acquires a single image, from the currently selected Data Source, using
// Native Transfer Mode. It waits until the source closes (if it's modal) or
// forces the source closed if not.  The return value is a handle to the
// acquired image.  Only one image can be acquired per call.
//
// The return value is a handle to global memory containing a DIB - 
// a Device-Independent Bitmap.  Numerous EZTWAIN functions can
// be used to examine, modify, and save these DIBs.  Remember to
// use TWAIN_FreeNative to free each DIB when you are done with it,
// these things eat up a lot of memory.
//
// For the 2nd parameter, you can OR or add together the following
// masks to indicate what kind(s) of image you prefer to receive.
// Caution: Some TWAIN devices will ignore your preference here.
// -- If you care, check the parameters of the DIB.

#define TWAIN_BW		0x0001	// 1-bit per pixel, B&W
#define TWAIN_GRAY		0x0002	// 1,4, or 8-bit grayscale
#define TWAIN_RGB		0x0004	// 24-bit RGB color
#define TWAIN_PALETTE	0x0008	// 1,4, or 8-bit palette

#define TWAIN_ANYTYPE	0x0000	// any of the above (use by itself)

int EZTAPI TWAIN_AcquireToClipboard(HWND hwndApp, unsigned wPixTypes);
// Like AcquireNative, but puts the resulting image, if any, into the
// system clipboard as a CF_DIB item. If this call fails, the clipboard is
// either empty or retains its previous content.
// Returns TRUE (1) for success, FALSE (0) for failure.
//
// Useful for environments like Visual Basic where it is hard to make direct
// use of a DIB handle.  In fact, TWAIN_AcquireToClipboard uses
// TWAIN_AcquireNative for all the hard work.

HANDLE EZTAPI TWAIN_AcquireMemory(HWND hwnd);
// Like TWAIN_Acquire, but always specifies a 'memory mode' transfer.

typedef BOOL (WINAPI *MEMXFERCALLBACK)(LPVOID data);

BOOL EZTAPI TWAIN_AcquireMemoryCallback(HWND hwnd, MEMXFERCALLBACK cb, LPVOID data);
// Like TWAIN_AcquireMemory, but you provide a call-back function.
// The call-back is called when the transfer is ready, and is responsible for
// setting up the transfer, transferring the data, and doing clean-up.
// See the function MemoryXferHandler in EZTWAIN.C for an example.

int EZTAPI TWAIN_AcquireToFilename(HWND hwndApp, LPCSTR pszFile);
// Acquire an image and write it to a file using the current Save Format,
// (See TWAIN_SetSaveFormat) which by default is BMP.  
// If pszFile is NULL or an empty string, the user is prompted for
// the file name *and format* in a standard Save File dialog,
// See also TWAIN_AcquireFile below.
//
// Return values:
//  0  success.
// -1  the Acquire failed.
// -2  file open error (invalid path or name, or access denied)
// -3  invalid DIB, or image incompatible with file format, or...
// -4  writing failed, possibly output device is full.
// -10 user cancelled File Save dialog

int EZTAPI TWAIN_AcquireFile(HWND hwndApp, int nFF, LPCSTR pszFile);
// Acquire an image directly to a file, using the given format and filepath.
// * Unlike AcquireToFilename, this function uses TWAIN File Transfer Mode.
// * The image is written to disk by the Data Source, not by EZTWAIN.
// * Warning: This mode is -not- supported by all TWAIN devices.
// 
// Use TWAIN_SupportsFileXfer to see if the open DS supports File Transfer.
//
// You can use TWAIN_Get(ICAP_IMAGEFILEFORMAT) to get an enumeration of
// the available file formats, and CONTAINER_ContainsValue to check for
// a particular format you are interested in.
//
// nFF can be any file format supported by the DS, see the TWFF_* constants
// in twain.h for the list of allowed formats.  A compliant DS should
// at least support TWFF_BMP, but as usual there are no guarantees.
//
// If pszFile is NULL or an empty string, the user is prompted for
// the file name in a standard Save File dialog.
//
// Return values (N.B. A Boolean, not an error code like AcquireToFilename!)
//  TRUE(1) for success
//  FALSE(0) for failure - use GetResultCode/GetConditionCode for details.
//  If the user cancels the Save File dialog, the result code is TWRC_CANCEL


//--------- Basic TWAIN Inquiries

int EZTAPI TWAIN_IsAvailable(void);
// Call this function any time to find out if TWAIN is installed on the
// system.  It takes a little time on the first call, after that it's fast,
// just testing a flag.  It returns 1 if the TWAIN Source Manager is
// installed & can be loaded, 0 otherwise. 


int EZTAPI TWAIN_EasyVersion(void);
// Returns the version number of EZTWAIN.DLL, multiplied by 100.
// So e.g. version 2.01 will return 201 from this call.

int EZTAPI TWAIN_State(void);
// Returns the TWAIN Protocol State per the spec.
#define TWAIN_PRESESSION		1	// source manager not loaded
#define TWAIN_SM_LOADED			2	// source manager loaded
#define TWAIN_SM_OPEN			3	// source manager open
#define TWAIN_SOURCE_OPEN		4	// source open but not enabled
#define TWAIN_SOURCE_ENABLED	5	// source enabled to acquire
#define TWAIN_TRANSFER_READY	6	// image ready to transfer
#define TWAIN_TRANSFERRING		7	// image in transit

char* EZTAPI TWAIN_SourceName(void);
// Returns a pointer to the name of the currently or last opened source.
// Note: Even on NT or other Unicode-enabled platform, this is still
// a pointer to an 8-bit ASCII string.

void EZTAPI TWAIN_GetSourceName(LPSTR pzName);
// Like TWAIN_SourceName, but copies current/last source name into pzName.
// Please allocate enough space - 256 char at least.


//--------- DIB handling utilities ---------

void     EZTAPI DIB_SetResolution(HANDLE hdib, double xdpi, double ydpi);
// Sets the horizontal and vertical resolution of the DIB.
double   EZTAPI DIB_XResolution(HANDLE hdib);
// Horizontal (x) resolution of DIB, in DPI (dots per inch)
double   EZTAPI DIB_YResolution(HANDLE hdib);
// Vertical (y) resolution of DIB, in DPI (dots per inch)
int      EZTAPI DIB_Depth(HANDLE hdib);
// Depth of DIB, in bits i.e. bits per pixel.
int      EZTAPI DIB_Width(HANDLE hdib);
// Width of DIB, in pixels (columns)
int      EZTAPI DIB_Height(HANDLE hdib);
// Height of DIB, in lines (rows)
size_t   EZTAPI DIB_RowBytes(HANDLE hdib);
// Number of bytes needed to store one row of the DIB.
int      EZTAPI DIB_ColorCount(HANDLE hdib);
// Number of colors in color table of DIB

BITMAPINFOHEADER* EZTAPI DIB_Lock(HANDLE hdib);
// Lock the given DIB handle and return a pointer to the header structure.
// Technically, increments the lock count of hdib and returns its address.
void     EZTAPI DIB_Unlock(HANDLE hdib);
// Unlock the given DIB handle (decrement the lock count.)
// When the number of Unlocks = the number of Locks, any pointers
// into the DIB should be presumed invalid.

void     EZTAPI DIB_ReadRow(HANDLE hdib, int nRow, BYTE* prow);
void     EZTAPI DIB_ReadRowRGB(HANDLE hdib, int nRow, BYTE* prow);
// Read row n of the given DIB into buffer at prow.
// Caller is responsible for ensuring buffer is large enough.
// Row 0 is the *top* row of the image, as it would be displayed.
// The first variant reads the data as-is from the DIB, including
// BGR pixels from 24-bit DIBs, or packed 1-bit, 4-bit or 8-bit.
// The RGB variant unpacks every DIB pixel into 3-byte RGB pixels.

void     EZTAPI DIB_WriteRow(HANDLE hdib, int r, const BYTE* pdata);
// Write data from buffer into row r of the given DIB.
// Caller is responsible for ensuring buffer and row exist, etc.
void     EZTAPI DIB_WriteRowChannel(HANDLE hdib, int r, const BYTE* pdata, int nChannel);
// Write data from buffer into one color channel of row r of the given DIB.
// Channels are: 0=Red, 1=Green, 2=Blue.  If the DIB depth < 24, acts like WriteRow.

HANDLE   EZTAPI DIB_Allocate(int nDepth, int nWidth, int nHeight);
// Create a DIB with the given dimensions.  Resolution is set to 0.  A default
// color table is provided if depth <= 8.
// The image data is uninitialized i.e. garbage.

void EZTAPI DIB_Free(HANDLE hdib);
// Release the storage of the DIB.

HANDLE EZTAPI DIB_Copy(HANDLE hdib);
// Create and return a byte-for-byte copy of a DIB.

void     EZTAPI DIB_SetGrayColorTable(HANDLE hdib);
// Fill the DIB's color table with a gray ramp - so color 0 is black, and
// the last color (largest pixel value) is white.  No effect if depth > 8.
void     EZTAPI DIB_SetColorTableRGB(HANDLE hdib, int i, int R, int G, int B);
// Set the ith entry in the DIB's color table to the specified color.
// R G and B range from 0 to 255.

int EZTAPI DIB_ColorTableR(HANDLE hdib, int i);
int EZTAPI DIB_ColorTableG(HANDLE hdib, int i);
int EZTAPI DIB_ColorTableB(HANDLE hdib, int i);
// Return the R,G, or B component of the ith color table entry of a DIB.
// If i < 0 or >= DIB_ColorCount(hdib), returns 0.

void EZTAPI DIB_SwapRedBlue(HANDLE hdib);
// For 24-bit DIB only, exchange R and B components of each pixel.

HPALETTE EZTAPI DIB_CreatePalette(HANDLE hdib);
// Create and return a logical palette to be used for drawing the DIB.
// For 1, 4, and 8-bit DIBs the palette contains the DIB color table.
// For 24-bit DIBs, a default halftone palette is returned.

void EZTAPI DIB_SetColorCount(HANDLE hdib, int n);


void     EZTAPI DIB_DrawToDC(HANDLE hdib,   // DIB handle
                             HDC hDC,       // destination device context
                             int dx, int dy,// destination (x,y)
                             int w, int h,  // width and height
                             int sx, int sy // source (x,y) in DIB
                             );
// Draws DIB on a device context.
// You should call CreateDibPalette, select that palette
// into the DC, and do a RealizePalette(hDC) first.

int EZTAPI DIB_PutOnClipboard(HANDLE hdib);
// Place DIB on the clipboard (format CF_DIB)
// ** IMPORTANT ** After this call, the clipboard owns the
// DIB and you do not - you should erase your copy of the handle
// and do not attempt any subsequent operations on it.
// Treat this call just as you would a call to DIB_Free.
// Returns 1 = success, 0 = failure.

HANDLE EZTAPI DIB_GetFromClipboard(void);

int EZTAPI DIB_WriteToBmp(HANDLE hdib, LPCSTR pszFile);
int EZTAPI DIB_WriteToBmpFile(HANDLE hdib, HFILE fh);
int EZTAPI DIB_WriteToJpeg(HANDLE hdib, LPCSTR pszFile);

HANDLE EZTAPI DIB_LoadFromFilename(LPCSTR pszFile);

//--- OBSOLETE: The following functions are for backward compatibility only:
int EZTAPI TWAIN_DibDepth(HANDLE hdib);
int EZTAPI TWAIN_DibWidth(HANDLE hdib);
int EZTAPI TWAIN_DibHeight(HANDLE hdib);
int EZTAPI TWAIN_DibNumColors(HANDLE hdib);
long EZTAPI TWAIN_DibRowBytes(HANDLE hdib);
void EZTAPI TWAIN_DibReadRow(HANDLE hdib, int nRow, BYTE* prow);
HPALETTE EZTAPI TWAIN_CreateDibPalette(HANDLE hdib);
void EZTAPI TWAIN_DrawDibToDC(HDC hDC,int dx,int dy,int w,int h,HANDLE hdib,int sx, int sy);

//--------- File Read/Write

//---- File Formats
#define TWFF_BMP         2
#define TWFF_JFIF        4

int EZTAPI TWAIN_IsJpegAvailable(void);
// Return TRUE (1) if JPEG/JFIF image files can be read and written.
// Returns 0 if JPEG support has not been installed.

int EZTAPI TWAIN_SetSaveFormat(int nFF);
// Select the file format for subsequent calls to WriteNativeToFilename
// Displays a warning message if the format is not available.
// Returns TRUE (1) if ok, FALSE (0) if format is invalid or not available.
//  nFF  type    ext    notes
//   2   BMP    .bmp    uncompressed by default
//   4   JFIF   .jpg    JPEG File Interchange Format 1.02

int EZTAPI TWAIN_GetSaveFormat(void);
// Return the currently selected save format.

void EZTAPI TWAIN_SetJpegQuality(int nQ);
int EZTAPI TWAIN_GetJpegQuality(void);
// Set the 'quality' of subsequently saved JPEG/JFIF image files.
// nQ = 100 is maximum quality & minimum compression.
// nQ = 75 is 'good' quality, the default.
// nQ = 1 is minimum quality & maximum compression.
 
int EZTAPI TWAIN_WriteNativeToFilename(HANDLE hdib, LPCSTR pszFile);
// Writes a DIB handle to a file using the current save format.
//
// hdib		= DIB handle, as returned by TWAIN_AcquireNative
// pszFile	= far pointer to NUL-terminated filename
//
// If pszFile is NULL or points to a null string, the user is
// prompted for the filename *and format* with a standard Windows
// file-save dialog.
//
// Return values:
//	 0	success
//	-1	user cancelled File Save dialog
//	-2	file open error (invalid path or name, or access denied)
//	-3	image is invalid, or cannot be written in this format.
//	-4	writing data failed, possibly output device is full


HANDLE EZTAPI TWAIN_LoadNativeFromFilename(LPCSTR pszFile);
// Load a .BMP file (or JPEG) and return a DIB handle.
// Accepts a filename (including path & extension).
// If pszFile is NULL or points to a null string, the user is
// prompted to choose a file with a standard File Open dialog.
// Returns a DIB handle if successful, otherwise NULL.

HANDLE EZTAPI TWAIN_LoadNativeFromFile(HFILE fh);


//--------- Global Options

void EZTAPI TWAIN_SetMultiTransfer(int fYes);
int EZTAPI TWAIN_GetMultiTransfer(void);
// This function controls the 'multiple transfers' flag.
// If this flag is non-zero: After an Acquire, the Data Source
// is not closed, but is left open to allow additional images
// to be acquired in the same session.  The programmer may
// need to close the Data Source after all images have been
// transferred, for example by calling
//     TWAIN_CloseSource or
//     TWAIN_UnloadSourceManager
//
// In multi-transfer mode, you can check for the availability of
// more images by calling TWAIN_State.  A state of 6 (TWAIN_TRANSFER_READY)
// means that the Data Source knows it has at least one more image.
// A state of 5 (TWAIN_SOURCE_ENABLED) means that the user has not
// closed the Data Source, so it might be able to acquire another image.
//
// See also: TWAIN_UserClosedSource()
//
// If you try to acquire and the Data Source can't do it, the acquire
// function will return an error indication.
//
// By default, this feature is set to FALSE (0).

void EZTAPI TWAIN_SetHideUI(int fHide);
int EZTAPI TWAIN_GetHideUI(void);
// These functions control the 'hide source user interface' flag.
// This flag is cleared initially, but if you set it non-zero, then when
// a source is enabled it will be asked to hide its user interface.
// Note that this is only a request - some sources will ignore it!
// This affects AcquireNative, AcquireToClipboard, and EnableSource.
// If the user interface is hidden, you will probably want to set at least
// some of the basic acquisition parameters yourself - see
// SetCurrentUnits, SetCurrentPixelType, SetBitDepth and
// SetCurrentResolution below.
// See also: HasControllableUI

void EZTAPI TWAIN_DisableParent(int fYes);
// Disable the parent window during _Acquire...
// (The parent window is the window you pass to the Acquire function.
// Typically this is your main application window or dialog.)
// By default this setting is TRUE - the parent
// window, if you provide it, is disabled during an Acquire.
//
// Note 1: If you set this to FALSE, your window can receive user input while
// an Acquire is in progress, and your code must be prepared for this.
// Note 2: Some TWAIN data sources will disable the parent window on their
// own, and EZTWAIN cannot prevent this.

int EZTAPI TWAIN_GetDisableParent(void);
// return current setting of 'disable parent' flag.

//--------- Application Registration

void EZTAPI TWAIN_RegisterApp(
    int   nMajorNum,      // major and incremental revision of application.
    int   nMinorNum,      // e.g. version 4.5: nMajorNum = 4, nMinorNum = 5
    int   nLanguage,      // (human) language (use TWLG_xxx from TWAIN.H)
    int   nCountry,       // country (use TWCY_xxx from TWAIN.H)
    LPCSTR lpszVersion,   // version info string e.g. "1.0b3 Beta release"
    LPCSTR lpszMfg,       // name of mfg/developer e.g. "Crazbat Software"
    LPCSTR lpszFamily,    // product family e.g. "BitStomper"
    LPCSTR lpszProduct);  // specific product e.g. "BitStomper Deluxe Pro"
//
// TWAIN_RegisterApp can be called *AS THE FIRST CALL*, to register the
// application. If this function is not called, the application is given a
// 'generic' registration by EZTWAIN.
// Registration only provides this information to the Source Manager and any
// sources you may open - it is used for debugging, and (frankly) by some
// sources to give special treatment to certain applications.

void EZTAPI TWAIN_SetAppTitle(LPCSTR lpszTitle);
// The short form.
// Sets the product name as far as TWAIN is concerned, and also the
// title of any dialog boxes / error boxes that are displayed by EZTWAIN.

//--------- Error Analysis and Reporting ------------------------------------

unsigned EZTAPI TWAIN_GetResultCode(void);
// Return the result code (TWRC_xxx) from the last triplet sent to TWAIN

unsigned EZTAPI TWAIN_GetConditionCode(void);
// Return the condition code from the last triplet sent to TWAIN.
// (To be precise, from the last call to TWAIN_DS below)
// If a source is NOT open, return the condition code of the source manager.

int EZTAPI TWAIN_UserClosedSource(void);
// Return TRUE (1) if during the last acquire the user asked
// the DataSource to close.  0 otherwise of course.
// This flag is cleared each time you start any kind of acquire,
// or just call ModalEventLoop, and it is set if EZTWAIN receives a
// MSG_XFERREADY message through TWAIN.

void EZTAPI TWAIN_ErrorBox(LPCSTR pzMsg);
// Post an error message dialog with an OK button,
// and the title 'TWAIN Error'.
// pszMsg points to a null-terminated message string.
// If messages are suppressed (see below) this function does nothing.

int EZTAPI TWAIN_SuppressErrorMessages(int nSuppress);
// Enable or disable EZTWAIN error messages to the user.
// When nSuppress = 0, error messages are displayed.
// When nSuppress <> 0, error messages are suppressed.
// By default, error messages are displayed.
// Note that EZTWAIN cannot prevent messages from TWAIN or DSs.
//
// Return the previous state of the flag.

void EZTAPI TWAIN_ReportLastError(LPCSTR pzMsg);
// Like TWAIN_ErrorBox, but if some details are available from
// TWAIN about the last failure, they are included in the message box.

typedef enum {
	EZTEC_NONE,
	EZTEC_START_TRIPLET_ERRS,
	EZTEC_CAP_GET,				// MSG_GET triplet on a capability failed
	EZTEC_CAP_SET,				// MSG_SET triplet on capability failed
	EZTEC_DSM_FAILURE,			// TWAIN DSM returned TWRC_FAILURE
	EZTEC_DS_FAILURE,			// source returned TWRC_FAILURE
    EZTEC_XFER_FAILURE,         // image transfer failed
	EZTEC_END_TRIPLET_ERRS,
    EZTEC_OPEN_DSM,             // opening DSM failed
    EZTEC_OPEN_DEFAULT_DS,
	EZTEC_NOT_STATE_4,			// operation invoked in wrong state
	EZTEC_NULL_HCON,			// MSG_GET returned a null container handle
	EZTEC_BAD_HCON,			    // MSG_GET returned an invalid/unlockable container handle
	EZTEC_BAD_CONTYPE,			// returned container ConType is not valid.
	EZTEC_BAD_ITEMTYPE,		    // returned container ItemType is not valid.
	EZTEC_CAP_GET_EMPTY,		// returned container has 0 items.
	EZTEC_CAP_SET_EMPTY,		// trying to restrict a cap to empty set
    EZTEC_INVALID_HWND,         // function passed an invalid window handle
    EZTEC_PROXY_WINDOW,         // internal proxy window create failed (unlikely!)
    EZTEC_USER_CANCEL,          // user cancelled operation
    EZTEC_RESOLUTION,           // Set failed for Resolution
} EZTWAIN_ERROR_CODE;


int EZTAPI TWAIN_LastErrorCode(void);
// Return the last internal EZTWAIN error code.

void EZTAPI TWAIN_ClearError(void);
// Set the EZTWAIN internal error code to EZTEC_NONE


//--------- TWAIN State Control ------------------------------------

int EZTAPI TWAIN_LoadSourceManager(void);
// Finds and loads the Data Source Manager, TWAIN.DLL.
// If Source Manager is already loaded, does nothing and returns TRUE.
// This can fail if TWAIN.DLL is not installed (in the right place), or
// if the library cannot load for some reason (insufficient memory?) or
// if TWAIN.DLL has been corrupted.

int EZTAPI TWAIN_OpenSourceManager(HWND hwnd);
// Opens the Data Source Manager, if not already open.
// If the Source Manager is already open, does nothing and returns TRUE.
// This call will fail if the Source Manager is not loaded.

int EZTAPI TWAIN_OpenDefaultSource(void);
// This opens the source selected in the Select Source dialog.
// If some source is already open, does nothing and returns TRUE.
// Will load and open the Source Manager if needed.
// If this call returns TRUE, TWAIN is in STATE 4 (TWAIN_SOURCE_OPEN)

// These two functions allow you to enumerate the available data sources:
int EZTAPI TWAIN_GetSourceList(void);
// Fetches the list of sources into memory, so they can be returned
// one by one by TWAIN_GetNextSourceName, below.
// Returns TRUE (1) if successful, FALSE (0) otherwise.

int EZTAPI TWAIN_GetNextSourceName(LPSTR pzName);
// Copies the next source name in the list into pzName.
// Returns TRUE (1) if successful, FALSE (0) if there are no more.

int EZTAPI TWAIN_GetDefaultSourceName(LPSTR pzName);
// Copies the name of the TWAIN default source into pzName.
// Normally returns TRUE (1) but will return FALSE (0) if:
//   - the TWAIN Source Manager cannot be loaded & initialized or
//   - there is no current default source (e.g. no sources are installed)

int EZTAPI TWAIN_OpenSource(LPCSTR pzName);
// Opens the source with the given name.
// If that source is already open, does nothing and returns TRUE
// If another source is open, closes it and attempts to open the specified source.
// Will load and open the Source Manager if needed.

int EZTAPI TWAIN_EnableSource(HWND hwnd);
// Enables the open Data Source. This posts the source's user interface
// and allows image acquisition to begin.  If the source is already enabled,
// this call does nothing and returns TRUE.

int EZTAPI TWAIN_DisableSource(void);
// Disables the open Data Source, if any.
// This closes the source's user interface.
// If there is not an enabled source, does nothing and returns TRUE.

int EZTAPI TWAIN_CloseSource(void);
// Closes the open Data Source, if any.
// If the source is enabled, disables it first.
// If there is not an open source, does nothing and returns TRUE.

int EZTAPI TWAIN_CloseSourceManager(HWND hwnd);
// Closes the Data Source Manager, if it is open.
// If a source is open, disables and closes it as needed.
// If the Source Manager is not open, does nothing and returns TRUE.

int EZTAPI TWAIN_UnloadSourceManager(void);
// Unloads the Data Source Manager i.e. TWAIN.DLL - releasing
// any associated memory or resources.
// If necessary, it will abort transfers, close the open source
// if any, and close the Source Manager.
// If successful, it returns 1 (TRUE)


int EZTAPI TWAIN_MessageHook(LPMSG lpmsg);
// This function detects Windows messages that should be routed
// to an enabled Data Source, and picks them off.  In a full TWAIN
// app, TWAIN_MessageHook is called inside the main GetMessage loop.
// The skeleton code looks like this:  
//		MSG msg;
//  	while (GetMessage((LPMSG)&msg, NULL, 0, 0)) {
//			if (!TWAIN_MessageHook ((LPMSG)&msg)) {
//				TranslateMessage ((LPMSG)&msg);
//				DispatchMessage ((LPMSG)&msg);
//			}
//		} // while


HANDLE EZTAPI TWAIN_WaitForNativeXfer(HWND hwnd);

int EZTAPI TWAIN_IsTransferReady(void);

void EZTAPI TWAIN_ModalEventLoop(void);
// Process messages until termination, source disable, or image transfer.


int EZTAPI TWAIN_EndXfer(void);

int EZTAPI TWAIN_AbortAllPendingXfers(void);

//--------- High-level Capability Negotiation Functions --------
// These functions should only be called in State 4 (TWAIN_SOURCE_OPEN)

int EZTAPI TWAIN_NegotiateXferCount(int nXfers);
// Negotiate with open Source the number of images application will accept.
// nXfers = -1 means any number
// Returns: 1 for success, 0 for failure.

int EZTAPI TWAIN_NegotiatePixelTypes(unsigned wPixTypes);
// Negotiate with the source to restrict pixel types that can be acquired.
// This tries to restrict the source to a *set* of pixel types.
// Returns: 1 for success, 0 for failure.
// See TWAIN_AcquireNative for some mask constants.
// A parameter of 0 (TWAIN_ANYTYPE) causes no negotiation & no restriction.
// You should not assume that the source will honor your restrictions, even
// if this call succeeds!

//----- Unit of Measure
// TWAIN unit codes (from twain.h)
#define TWUN_INCHES      0
#define TWUN_CENTIMETERS 1
#define TWUN_PICAS       2
#define TWUN_POINTS      3
#define TWUN_TWIPS       4
#define TWUN_PIXELS      5

int EZTAPI TWAIN_GetCurrentUnits(void);
// Return the current unit of measure: inches, cm, pixels, etc.
// Many TWAIN parameters such as resolution are set and returned
// in the current unit of measure.
// There is no error return - in case of error it returns 0 (TWUN_INCHES)

int EZTAPI TWAIN_SetCurrentUnits(int nUnits);
// Set the current unit of measure for the source.
// Common unit codes are given above.
// 1. Most sources do not support all units, some support *only* inches!
// 2. If you want to get or set resolution in DPI, make sure the current
// units are inches, or you might get Dots-Per-Centimeter!
// 3. Similarly for ImageLayout, see below.

int EZTAPI TWAIN_GetBitDepth(void);
// Get the current bitdepth, which can depend on the current PixelType.
// Bit depth is per color channel e.g. 24-bit RGB has bit depth 8.
// If anything goes wrong, this function returns 0.

int EZTAPI TWAIN_SetBitDepth(int nBits);
// (Try to) set the current bitdepth (for the current pixel type).
// Note: You should set a PixelType, then set the bitdepth for that type.

//------- TWAIN Pixel Types (from twain.h)
#define TWPT_BW          0 /* Black and White */
#define TWPT_GRAY        1
#define TWPT_RGB         2
#define TWPT_PALETTE     3

int EZTAPI TWAIN_GetPixelType(void);
// Ask the source for the current pixel type.
// If anything goes wrong (it shouldn't), this function returns 0 (TWPT_BW).

int EZTAPI TWAIN_SetCurrentPixelType(int nPixType);
// Try to set the current pixel type for acquisition.
// The source may select this pixel type, but don't assume it will.

double EZTAPI TWAIN_GetCurrentResolution(void);
// Ask the source for the current (horizontal) resolution.
// Resolution is in dots per current unit! (See TWAIN_GetCurrentUnits above)
// If anything goes wrong (it shouldn't) this function returns 0.0

double EZTAPI TWAIN_GetYResolution(void);
// Returns the current vertical resolution, in dots per *current unit*.
// In the event of failure, returns 0.0.

int EZTAPI TWAIN_SetCurrentResolution(double dRes);
// Try to set the current resolution (in both x & y).
// Resolution is in dots per current unit! (See TWAIN_GetCurrentUnits above)
// Note: The source may select this resolution, but don't assume it will.
int EZTAPI TWAIN_SetXResolution(double dxRes);
int EZTAPI TWAIN_SetYResolution(double dyRes);

int EZTAPI TWAIN_SetContrast(double dCon);
// Try to set the current contrast for acquisition.
// The TWAIN standard *says* that the range for this cap is -1000 ... +1000

int EZTAPI TWAIN_SetBrightness(double dBri);
// Try to set the current brightness for acquisition.
// The TWAIN standard *says* that the range for this cap is -1000 ... +1000

int EZTAPI TWAIN_SetThreshold(double dThresh);
// Try to set the threshold for black and white scanning.
// Should only affect 1-bit scans i.e. PixelType == TWPT_BW.
// The TWAIN default threshold value is 128.
// After staring at the TWAIN 1.6 spec for a while, I imagine that it implies
// that for 8-bit samples, values >= nThresh are thresholded to 1, others to 0.

double EZTAPI TWAIN_GetCurrentThreshold(void);
// Try to get and return the current value (MSG_GETCURRENT) of the
// ICAP_THRESHOLD capability.  If this fails for any reason, it
// will return -1.  *VERSIONS BEFORE 2.65 RETURNED 128.0*

int EZTAPI TWAIN_SetXferMech(int mech);
int EZTAPI TWAIN_XferMech(void);
// Try to set or get the transfer mode - one of the following:
#define XFERMECH_NATIVE    0
#define XFERMECH_FILE      1
#define XFERMECH_MEMORY    2
// You should not need to set this mode directly - using
// TWAIN_Acquire, TWAIN_AcquireNative and TWAIN_AcquireFile will set
// the appropriate transfer mode for you.

int EZTAPI TWAIN_SupportsFileXfer(void);
// Returns TRUE(1) if the open DS claims to support file transfer mode (XFERMECH_FILE)
// This mode is optional.  If TRUE, you can use AcquireFile.

int EZTAPI TWAIN_SetPaperSize(int nPaper);
// See TWSS_* in TWAIN.H 
#define PAPER_A4LETTER    1
#define PAPER_B5LETTER    2
#define PAPER_USLETTER    3
#define PAPER_USLEGAL     4
#define PAPER_A5          5
#define PAPER_B4          6
#define PAPER_B6          7
#define PAPER_USLEDGER    9
#define PAPER_USEXECUTIVE 10
#define PAPER_A3          11
#define PAPER_B3          12
#define PAPER_A6          13
#define PAPER_C4          14
#define PAPER_C5          15
#define PAPER_C6          16

//-------- Document Feeder -------

BOOL EZTAPI TWAIN_HasFeeder(void);
// Return TRUE(1) if the source indicates it has a document feeder.
// Note: A FALSE(0) is returned if the source does not handle this inquiry.

BOOL EZTAPI TWAIN_IsFeederSelected(void);
// Return TRUE(1) if the document feeder is selected.

int EZTAPI TWAIN_SelectFeeder(int fYes);
// (Try to) select or deselect the document feeder.
// Return TRUE(1) if successful, FALSE(0) otherwise.

BOOL EZTAPI TWAIN_IsAutoFeedOn(void);
// Return TRUE(1) if automatic feeding is enabled, otherwise FALSE(0).
// Make sure the feeder is selected before calling this function.

int EZTAPI TWAIN_SetAutoFeed(int fYes);
// (Try to) turn on/off automatic feeding thru the feeder.
// Return TRUE(1) if successful, FALSE(0) otherwise.
// This function selects the feeder, so to start scanning
// pages from an ADF, just do: TWAIN_SetAutoFeed(TRUE).

BOOL EZTAPI TWAIN_IsFeederLoaded(void);
// Return TRUE(1) if there are documents in the feeder.
// Make sure the feeder is selected before calling this function.

//-------- Duplex Scanning -------

int EZTAPI TWAIN_GetDuplexSupport(void);
// Query the device for duplex scanning support.
//   Return values:
// 0    = no support (or error, or query not recognized)
// 1    = 1-pass duplex
// 2    = 2-pass duplex

int EZTAPI TWAIN_EnableDuplex(int fYes);
// Enable (fYes=1) or disable (fYes=0) duplex scanning.
// Returns TRUE(1) if successful, FALSE(0) otherwise.

BOOL EZTAPI TWAIN_IsDuplexEnabled(void);
// Returns TRUE(1) if the device supports duplex scanning
// and duplex scanning is enabled.  FALSE(0) otherwise.

//--------- Other 'exotic' capabilities --------

int EZTAPI TWAIN_HasControllableUI(void);
// Return 1 if source claims UI can be hidden (see SetHideUI above)
// Return 0 if source says UI *cannot* be hidden
// Return -1 if source (pre TWAIN 1.6) cannot answer the question.

int EZTAPI TWAIN_SetIndicators(BOOL bVisible);
// Tell the source to show (hide) progress indicators during acquisition.

int EZTAPI TWAIN_Compression(void);
int EZTAPI TWAIN_SetCompression(int compression);
// Set/Return compression style for transferred data

BOOL EZTAPI TWAIN_Tiled(void);
int EZTAPI TWAIN_SetTiled(BOOL bTiled);
// Set/Return whether source does memory xfer via strips or tiles.
// bTiled = TRUE if it uses tiles for transfer.

int EZTAPI TWAIN_PlanarChunky(void);
int EZTAPI TWAIN_SetPlanarChunky(int shape);
// Set/Return current pixel shape (TWPC_CHUNKY or TWPC_PLANAR), or -1.

#define CHUNKY_PIXELS    0
#define PLANAR_PIXELS    1

int EZTAPI TWAIN_PixelFlavor(void);
int EZTAPI TWAIN_SetPixelFlavor(int flavor);
// Set/Return pixel 'flavor' - whether 0 is black or white:

#define CHOCOLATE_PIXELS   0     // zero pixel represents darkest shade
#define VANILLA_PIXELS     1  // zero pixel represents lightest shade


int EZTAPI TWAIN_SetLightPath(BOOL bTransmissive);
// Tries to select transparent or reflective media on the open source.
// A parameter of TRUE(1) means transparent, FALSE(0) means reflective.
// A return of TRUE(1) implies success, FALSE(0) means that
// the data source refused the request.

int EZTAPI TWAIN_SetAutoBright(BOOL bOn);
int EZTAPI TWAIN_SetGamma(double dGamma);
int EZTAPI TWAIN_SetShadow(double d);       // 0..255
int EZTAPI TWAIN_SetHighlight(double d);    // 0..255

//--------- Image Layout (Region of Interest) --------

int EZTAPI TWAIN_SetImageLayout(double L, double T, double R, double B);
// Specify the area to scan, sometimes called the ROI (Region of Interest)
// This call is only valid in State 4.
// L, T, R, B = distance to left, top, right, and bottom edge of
// area to scan, measured in the current unit of measure,
// from the top-left corner of the 'original page' (TWAIN 1.6 8-22)

int EZTAPI TWAIN_GetImageLayout(double *L, double *T, double *R, double *B);
int EZTAPI TWAIN_GetDefaultImageLayout(double *L, double *T, double *R, double *B);
// Get the current or default (power-on) area to scan.
// This call is valid in States 4-6.
// 1 = success, 0 = failure.  Supposedly the returned values (see above)
// are in the current unit of measure (ICAP_UNITS), but I observe that
// many DS's ignore ICAP_UNITS when dealing with Image Layout.

int EZTAPI TWAIN_ResetImageLayout(void);
// Reset the area to scan to the default (power-on) settings.
// This call is only valid in State 4.
// 1 = success, 0 = failure.

//--------- Fun With Containers --------

// Capability values are passed thru the TWAIN API in blocks of
// global memory called 'containers'.  EZTWAIN represents these
// containers with a handle (an integer) called HCONTAINER.
// The following functions provide reasonably comprehensive access
// to the contents of containers.  See also TWAIN_Get, TWAIN_Set.
//
// There are four shapes of containers, which I call 'formats'.
// Depending on its format, a container holds some 'items' - these
// are simple data values, all the same type in a given container.

// Container formats, same codes as in TWAIN.H
#define CONTAINER_ARRAY           3
#define CONTAINER_ENUMERATION     4
#define CONTAINER_ONEVALUE        5
#define CONTAINER_RANGE           6

typedef DWORD HCONTAINER;
// If you are coding in VB or similar, this is a 32-bit integer.

void EZTAPI CONTAINER_Free(HCONTAINER hcon);
// Free the memory and resources of a capability container.

HCONTAINER EZTAPI CONTAINER_Copy(HCONTAINER hcon);
// Create an exact copy of the container.

int EZTAPI CONTAINER_Format(HCONTAINER hcon);
// Return the 'format' of this container: CONTAINER_ONEVALUE, etc.

int EZTAPI CONTAINER_ItemType(HCONTAINER hcon);
// Return the item type (what exact kind of values are in the container.)
// See the TWTY_* definitions in TWAIN.H

int EZTAPI CONTAINER_ItemCount(HCONTAINER hcon);
// Return the number of values in the container.
// For a ONEVALUE, return 1.

double EZTAPI CONTAINER_FloatValue(HCONTAINER hcon, int n);
int EZTAPI CONTAINER_IntValue(HCONTAINER hcon, int n);
// Return the value of the nth item in the container.
// n is forced into the range 0 to ItemCount(hcon)-1. 

BYTE* EZTAPI CONTAINER_ValuePtr(HCONTAINER hcon, int n);

int EZTAPI CONTAINER_ContainsValue(HCONTAINER hcon, double d);
// Return 1 (TRUE) if the value d is one of the items in the container.
int EZTAPI CONTAINER_FindValue(HCONTAINER hcon, double d);
// Return the index of the value d in the container, or -1 if not found.

double EZTAPI CONTAINER_CurrentValue(HCONTAINER hcon);
double EZTAPI CONTAINER_DefaultValue(HCONTAINER hcon);
// Return the container's current or power-up (default) value.
// Array containers do not have these and will return -1.0.
// OneValue containers always return their (one) value.

int EZTAPI CONTAINER_DefaultIndex(HCONTAINER hcon);
int EZTAPI CONTAINER_CurrentIndex(HCONTAINER hcon);
// Return the index of the Default or Current value, in an Enumeration.
// Return -1 if the container is not an Enumeration.

double EZTAPI CONTAINER_MinValue(HCONTAINER hcon);
double EZTAPI CONTAINER_MaxValue(HCONTAINER hcon);
double EZTAPI CONTAINER_StepSize(HCONTAINER hcon);
// Return the three parameters that define a Range container.
// Returns -1.0 if the container is not a Range.

// The following four functions create containers from scratch:
// nItemType is one of the TWTY_* item types from TWAIN.H
// nItems is the number of items, in an array or enumeration.
// dMin, dMax, dStep are the beginning, ending, and step value of a range.
HCONTAINER EZTAPI CONTAINER_OneValue(int nItemType, double dVal);
HCONTAINER EZTAPI CONTAINER_Range(int nItemType, double dMin, double dMax, double dStep);
HCONTAINER EZTAPI CONTAINER_Array(int nItemType, int nItems);
HCONTAINER EZTAPI CONTAINER_Enumeration(int nItemType, int nItems);

int EZTAPI CONTAINER_SetItem(HCONTAINER hcon, int n, double dVal);
int EZTAPI CONTAINER_SetItemString(HCONTAINER hcon, int n, LPCTSTR pzVal);
int EZTAPI CONTAINER_SetItemFrame(HCONTAINER hcon, int n, double l, double t, double r, double b);
// Set the nth item of the container to dVal or pzText, or frame(l,t,r,b).
// NOTE: A OneValue is treated as an array with 1 element. 
// Return 1 (TRUE) if successful. 0 (FALSE) for failure:
//    The container is not an array, enumeration, or onevalue
//    n < 0 or n >= CONTAINER_ItemCount(hcon)
//    the value cannot be represented in this container's ItemType. 

int EZTAPI CONTAINER_SelectDefaultValue(HCONTAINER hcon, double dVal);
int EZTAPI CONTAINER_SelectDefaultItem(HCONTAINER hcon, int n);
int EZTAPI CONTAINER_SelectCurrentValue(HCONTAINER hcon, double dVal);
int EZTAPI CONTAINER_SelectCurrentItem(HCONTAINER hcon, int n);
// Select the current or default value within an enumeration or range,
// by specifying either the value, or its index.
// Returns 1 (TRUE) if successful, 0 (FALSE) otherwise.
// This will fail if:
//    The container is not an enumeration or range.
//    dVal is not one of the values in the container
//    n < 0 or n >= CONTAINER_ItemCount(hcon)

int EZTAPI CONTAINER_DeleteItem(HCONTAINER hcon, int n);
// Delete the nth item from an Array or Enumeration container.
// Returns 1 (TRUE) for success, 0 (FALSE) otherwise. Failure causes:
//   invalid container handle
//   container is not an array or enumeration
//   n < 0 or n >= ItemCount(hcon)

int EZTAPI CONTAINER_InsertItem(HCONTAINER hcon, int n, double dVal);
// Insert an item with value dVal into the container at position n.
// If n = -1, the item is inserted at the end of the container.

//--------- Low-level Capability Negotiation Functions --------
// Setting a capability is valid only in State 4 (TWAIN_SOURCE_OPEN)
// Getting a capability is valid in State 4 or any higher state.
 
HCONTAINER EZTAPI TWAIN_Get(unsigned uCap);
// Issue a DAT_CAPABILITY/MSG_GET to the open source.
// Return a capability 'container' - the 'MSG_GET' value of the capability.
// Use CONTAINER_* functions to examine and modify the container object.
// Use CONTAINER_Free to release it when you are done with it.
// A return value of 0 indicates failure:  Call GetConditionCode
// or ReportLastError above.

HCONTAINER EZTAPI TWAIN_GetDefault(unsigned uCap);
HCONTAINER EZTAPI TWAIN_GetCurrent(unsigned uCap);
// Issue a DAT_CAPABILITY/MSG_GETDEFAULT or MSG_GETCURRENT.  See Get above.

int EZTAPI TWAIN_Set(unsigned uCap, HCONTAINER hcon);
// Issue a DAT_CAPABILITY/MSG_SET to the open source,
// using the specified capability and container.
// Return value as for TWAIN_DS

int EZTAPI TWAIN_Reset(unsigned uCap);
// Issue a MSG_RESET on the specified capability.
// State must be 4.  Returns 1 (TRUE) if successful, 0 (FALSE) otherwise.

BOOL EZTAPI TWAIN_GetCapBool(unsigned cap, BOOL bDefault);
// Issue a DAT_CAPABILITY/MSG_GETCURRENT on the specified capability,
// assuming the value type is TW_BOOL.
// If successful, return the returned value.  Otherwise return bDefault.
// This is only valid in State 4 (TWAIN_SOURCE_OPEN) or higher.

double EZTAPI TWAIN_GetCapFix32(unsigned cap, double dDefault);
int EZTAPI TWAIN_GetCapUint16(unsigned cap, int nDefault);

int EZTAPI TWAIN_SetCapFix32(unsigned Cap, double dVal);
int EZTAPI TWAIN_SetCapOneValue(unsigned Cap,
                                unsigned ItemType,
                                long ItemVal);
// Do a DAT_CAPABILITY/MSG_SET, on capability 'Cap' (e.g. ICAP_PIXELTYPE,
// CAP_AUTOFEED, etc.) using a TW_ONEVALUE container with the given item type
// and value.  Use SetCapFix32 for capabilities that take a FIX32 value,
// use SetCapOneValue for the various ints and uints.  These functions
// do not support FRAME or STR items.
// Return Value: TRUE (1) if successful, FALSE (0) otherwise.
int EZTAPI TWAIN_SetCapFix32R(unsigned Cap, int Numerator, int Denominator);
// Just like TWAIN_SetCapFix32, but uses the value Numerator/Denominator
// This is useful for languages that make it hard to pass double parameters.

int EZTAPI TWAIN_GetCapCurrent(unsigned Cap,
                               unsigned ItemType,
                               void FAR *pVal);
// Do a DAT_CAPABILITY/MSG_GETCURRENT on capability 'Cap'.
// Copy the current value out of the returned container into *pVal.
// If the operation fails (the source refuses the request), or if the
// container is not a ONEVALUE or ENUMERATION, or if the item type of the
// returned container is incompatible with the expected TWTY_ type in nType,
// returns FALSE.  If this function returns FALSE, *pVal is not touched.

long EZTAPI TWAIN_ToFix32(double d);
// Convert a floating-point value to a 32-bit TW_FIX32 value that can be passed
// to e.g. TWAIN_SetCapOneValue
long EZTAPI TWAIN_ToFix32R(int Numerator, int Denominator);
// Convert a rational number to a 32-bit TW_FIX32 value.
// Returns a TW_FIX32 value that approximates Numerator/Denominator

double EZTAPI TWAIN_Fix32ToFloat(long nfix);
// Convert a TW_FIX32 value (as returned from some capability inquiries)
// to a double (floating point) value.

//--------- Lowest-level functions for TWAIN protocol --------


int EZTAPI TWAIN_DS(unsigned long DG, unsigned DAT, unsigned MSG, void FAR *pData);
// Pass the triplet (DG, DAT, MSG, pData) to the open data source if any.
// Returns 1 (TRUE) if the result code is TWRC_SUCCESS, 0 (FALSE) otherwise.
// The last result code can be retrieved with TWAIN_GetResultCode(), and the
// corresponding condition code can be retrieved with TWAIN_GetConditionCode().
// If no source is open this call will fail, result code TWRC_FAILURE,
// condition code TWCC_NODS.

int EZTAPI TWAIN_Mgr(unsigned long DG, unsigned DAT, unsigned MSG, void FAR *pData);
// Pass a triplet to the Data Source Manager (DSM).
// Returns 1 (TRUE) for success, 0 (FALSE) otherwise.
// See GetResultCode, GetConditionCode, and ReportLastError functions
// for diagnosing and reporting a TWAIN_Mgr failure.
// If the Source Manager is not open, this call fails setting result code
// TWRC_FAILURE, and condition code=TWCC_SEQERROR (triplet out of sequence).


//--------- Dosadi Special --------

char* EZTAPI TWAIN_BuildName(void);
// Return a string describing the build of EZTWAIN e.g. "Beta1 Debug"

void EZTAPI TWAIN_GetBuildName(LPSTR psName);

int EZTAPI TWAIN_GetSourceIdentity(LPVOID ptwid);

void EZTAPI TWAIN_LogFile(int fLog);
// Turn logging to c:\eztwain.log on or off.
// fLog = 0    close log file and turn off logging
// fLog != 0   open log file (if not already) and start logging

int EZTAPI TWAIN_SelfTest(unsigned f);
// Perform internal self-test.
//   f      ignored for now
// Return value:
//   0      success
//   other  internal test failed.

// For use only by direct-linked applications:
int EZTWAIN_Attach();
int EZTWAIN_Detach();

#ifdef __cplusplus
}
#endif

#endif

// History: See end of file eztwain.c
