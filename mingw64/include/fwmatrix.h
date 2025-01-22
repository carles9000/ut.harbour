/*
* fwmatrix.h
* source: \fwh\source\function\fwmatrix.c
*
*/

typedef struct _MATRIX
{
   int rows;
   int cols;
   int len;
   int xlen;
   double * array;
} MATRIX, * PMATRIX;

double calc( double x, char cOp, double y, HB_BOOL inverse );
PMATRIX matrix_new( int iRows, int iCols );
void matrix_release( MATRIX * matrix );
PMATRIX matrix_check( PMATRIX matrix, int iRows, int iCols );
PMATRIX matrix_clone( MATRIX * matrix );
void matrix_copyfrom( PMATRIX dst, PMATRIX src );
PMATRIX matrix_identity( int iSize );
PMATRIX matrix_random( int iRows, int iCols, double dMin, double dMax, HB_BOOL bInteger );
PMATRIX matrix_transpose( PMATRIX matrix, PMATRIX result );
PMATRIX matrix_scalar_calc( PMATRIX m1, char cOp, double operand, HB_BOOL inverse, PMATRIX result );
PMATRIX matrix_sigmoid( PMATRIX matrix, PMATRIX result );
PMATRIX matrix_sigmoid_derivative( PMATRIX matrix, PMATRIX result );
PMATRIX matrix_linear_calc( PMATRIX m1, char cOp, PMATRIX m2, PMATRIX result );
PMATRIX matrix_sumofrows( PMATRIX matrix, PMATRIX result );
PMATRIX matrix_mmult( PMATRIX m1, PMATRIX m2, PMATRIX result );
double array_determinant( double * array, int iSize );
double matrix_determinant( PMATRIX matrix );
PMATRIX matrix_invert( PMATRIX matrix );


