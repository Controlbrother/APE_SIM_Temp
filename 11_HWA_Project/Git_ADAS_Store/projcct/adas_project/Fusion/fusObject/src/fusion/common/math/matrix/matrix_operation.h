#ifndef __MATRIX_OPERATION_H_
#define __MATRIX_OPERATION_H_

#include "common.h"
#include "matrix.h"

#define FILTER_MATRIX_ROWS (6)
#define FILTER_MATRIX_COLS (6)
#define VECTOR_MATRIX_COLS (1)

typedef struct {
	uchar rows;
	uchar cols;
	float data[FILTER_MATRIX_ROWS][FILTER_MATRIX_COLS];
} Matrix; 
typedef struct {
	uchar rows;
	uchar cols;
	float data[FILTER_MATRIX_ROWS][VECTOR_MATRIX_COLS];
} Vector; 
//DECLARE_MATRIX(Matrix, float, FILTER_MATRIX_ROWS, FILTER_MATRIX_COLS)
//DECLARE_MATRIX(Vector, float, FILTER_MATRIX_ROWS, VECTOR_MATRIX_COLS)

void alloc_matrix(unsigned char rows, unsigned char cols, float *data, Matrix *matrix);

bool matrix_equal(const Matrix *a, const Matrix *b);

void set_identity_matrix(Matrix *matrix);

#define zero_matrix(matrix_)                                                   \
  memset(&((matrix_).data), 0, sizeof((matrix_).data));

void swap_rows(Matrix *matrix, unsigned char r1, unsigned char r2);

void scale_row(Matrix *matrix, unsigned char r, float scalar);

void shear_row(Matrix *matrix, unsigned char r1, unsigned char r2, float scalar);

void copy_matrix(const Matrix *source, Matrix *destination);

void add_vector(const Vector* a, const Vector* b, Vector* c);

void add_matrix(const Matrix *a, const Matrix *b, Matrix *c);

void subtract_vector(const Vector* a, const Vector* b, Vector* c);

void subtract_matrix(const Matrix *a, const Matrix *b, Matrix *c);

void multiply_vector(const Matrix* a, const Vector* b, Vector* c);

void multiply_matrix(const Matrix *a, const Matrix *b, Matrix *c);

void multiply_transpose_matrix(const Matrix *a, const Matrix *b, Matrix *c);

bool destructive_invert_matrix(Matrix *input, Matrix *output);

#endif