#include "matrix_operation.h"
#include <assert.h>
#include <math.h>

extern unsigned long DTC_counter;

void alloc_matrix(unsigned char rows, unsigned char cols, float *data, Matrix *matrix) {
  matrix->rows = rows;
  matrix->cols = cols;
  memset(matrix->data, 0x00, sizeof(matrix->data));
  for (unsigned char i = 0; i < rows; i++) {
    memcpy(matrix->data[i], &data[i * cols], sizeof(float) * cols);
  }
}

bool matrix_equal(const Matrix *a, const Matrix *b) {
  if (a->rows != b->rows || a->cols != b->cols) {
    return false;
  }
  return memcmp(a->data, b->data, sizeof(a->data)) == 0;
}

/*
 * set identity matrix, only for square matrix
 */
void set_identity_matrix(Matrix *matrix) {
  DTC_counter = 0;
  assert(matrix->rows == matrix->cols);
  memset(matrix->data, 0, sizeof(matrix->data));
  for (unsigned char i = 0; i < matrix->rows; i++) {
    matrix->data[i][i] = 1.;
  }
}

/*
 * swap row r1 and r2
 */
void swap_rows(Matrix *matrix, unsigned char r1, unsigned char r2) {
  DTC_counter = 1;
  assert(r1 < matrix->rows && r2 < matrix->rows);
  float temp[FILTER_MATRIX_COLS] = {0};
  size_t row_size = sizeof(temp);
  memcpy(temp, &(matrix->data[r1]), row_size);
  memcpy(&(matrix->data[r1]), &(matrix->data[r2]), row_size);
  memcpy(&(matrix->data[r2]), temp, row_size);
}

/*
 * row[r1] = scalar * row[r1]
 */
void scale_row(Matrix *matrix, unsigned char r, float scalar) {
  DTC_counter = 2;
  assert(r < matrix->rows);
  for (unsigned char i = 0; i < matrix->cols; i++) {
    matrix->data[r][i] *= scalar;
  }
}

/*
 * row[r1] = row[r1] + scalar * row[r2]
 */
void shear_row(Matrix *matrix, unsigned char r1, unsigned char r2, float scalar) {
    DTC_counter = 3;
    assert(r1 < matrix->rows && r2 < matrix->rows);
    for (unsigned char i = 0; i < matrix->cols; i++) {
    matrix->data[r1][i] += scalar * matrix->data[r2][i];
    }
}

void copy_matrix(const Matrix *source, Matrix *destination) {
  destination->rows = source->rows;
  destination->cols = source->cols;
  memcpy(destination->data, source->data, sizeof(source->data));
}

void add_vector(const Vector *a, const Vector *b, Vector *c) {
    DTC_counter = 4;
    assert(a->rows == b->rows);
    unsigned char i;
    c->rows = a->rows;
    c->cols = a->cols;
    for (i = 0; i < a->rows; i++) {
        c->data[i][0] = a->data[i][0] + b->data[i][0];
    }
}

/*
 * c = a + b
 */
void add_matrix(const Matrix *a, const Matrix *b, Matrix *c) {
    DTC_counter = 5;
    assert(a->rows == b->rows && a->cols == b->cols);
    unsigned char i, j;
    c->rows = a->rows;
    c->cols = a->cols;
    for (i = 0; i < a->rows; i++) {
        for (j = 0; j < a->cols; j++) {
            c->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
}

void subtract_vector(const Vector *a, const Vector *b, Vector *c) {
    DTC_counter = 6;
    assert(a->rows == b->rows);
    unsigned char i;
    c->rows = a->rows;
    c->cols = a->cols;
    for (i = 0; i < a->rows; i++) {
            c->data[i][0] = a->data[i][0] - b->data[i][0];
    } 
}
/*
 * c = a - b
 */
void subtract_matrix(const Matrix *a, const Matrix *b, Matrix *c) {
    DTC_counter = 7;
    assert(a->rows == b->rows && a->cols == b->cols);
    unsigned char i, j;
    c->rows = a->rows;
    c->cols = a->cols;
    for (i = 0; i < a->rows; i++) {
        for (j = 0; j < a->cols; j++) {
            c->data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
}

void multiply_vector(const Matrix* a, const Vector* b, Vector* c)
{
    DTC_counter = 8;
    assert(a->cols == b->rows);
    unsigned char i, j;
    c->rows = a->rows;
    c->cols = b->cols;
    for (i = 0; i < c->rows; ++i)
    {
        c->data[i][0] = 0;
        for (j = 0; j < a->cols; ++j)
        {
            c->data[i][0] += a->data[i][j] * b->data[j][0];
        }
    }
}

/*
 * c = a * b
 */
void multiply_matrix(const Matrix *a, const Matrix *b, Matrix *c) {
    DTC_counter = 9;
    assert(a->cols == b->rows);
    unsigned char i, j, k;
    c->rows = a->rows;
    c->cols = b->cols;
    for (i = 0; i < c->rows; i++) {
    for (j = 0; j < c->cols; j++) {
        c->data[i][j] = 0.0;
        for (k = 0; k < a->cols; ++k) {
        c->data[i][j] += a->data[i][k] * b->data[k][j];
        }
    }
  }
}


/*
 * c = a * transpose(b)
 */
void multiply_transpose_matrix(const Matrix *a, const Matrix *b, Matrix *c) {
    DTC_counter = 10;
    assert(a->cols == b->cols);
    c->rows = a->rows;
    c->cols = b->rows;
    for (unsigned char i = 0; i < c->rows; i++) {
        for (unsigned char j = 0; j < c->cols; j++) {
            c->data[i][j] = 0.0;
            for (unsigned char k = 0; k < a->cols; ++k) {
            c->data[i][j] += a->data[i][k] * b->data[j][k];
            }
        }
    }
}

bool destructive_invert_matrix(Matrix *input, Matrix *output) {
    DTC_counter = 11;
    assert(input->rows == input->cols);
    unsigned char i, j, r;
    float scalar;
    float shear_needed;
    output->rows = input->rows;
    output->cols = input->cols;
    set_identity_matrix(output);
    for (i = 0; i < input->rows; i++) {
    // TODO: != 0 will be fault
    if (fabsf(input->data[i][i]) <= EPSILON) {
        /* We must swap rows to get a nonzero diagonal element. */
        for (r = i + 1; r < input->rows; r++) {
        // TODO: != 0 will be fault
        if (input->data[r][i] <= EPSILON) {
            break;
        }
        }
        if (r == input->rows) {
        /* Every remaining element in this column is zero, so this  matrix
            * cannot be inverted. */
            DTC_counter = 12;
            assert(0);
            return false;
        }
        swap_rows(input, i, r);
        swap_rows(output, i, r);
    }

    /* Scale this row to ensure a 1 along the diagonal.  We might need to worry
     * about overflow from a huge scalar here-> */
    scalar = 1.0f / input->data[i][i];
    scale_row(input, i, scalar);
    scale_row(output, i, scalar);

    /* Zero out the other elements in this column. */
    for (j = 0; j < input->rows; j++) {
      if (i == j) {
        continue;
      }
      shear_needed = -input->data[j][i];
      shear_row(input, j, i, shear_needed);
      shear_row(output, j, i, shear_needed);
    }
  }
  return true;
}