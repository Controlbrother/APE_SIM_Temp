#ifndef __MATRIX_H_
#define __MATRIX_H_

#include "base_type.h"
#include "log.h"

#define DECLARE_MATRIX(struct_name, data_type, row_len, col_len)               \
  typedef struct {                                                             \
    unsigned char rows;                                                                \
    unsigned char cols;                                                                \
    data_type data[row_len][col_len];                                          \
  } struct_name;

#define init_matrix_impl(_matrix, _rows, _cols, _value, _op)                   \
  (_matrix) _op rows = _rows;                                                  \
  (_matrix) _op cols = _cols;                                                  \
  memset((_matrix)_op data, _value, sizeof((_matrix)_op data));

#define init_matrix(_matrix, _rows, _cols, _value)                             \
  init_matrix_impl(_matrix, _rows, _cols, _value, .)

#define init_matrix_ptr(_matrix, _rows, _cols, _value)                         \
  init_matrix_impl(_matrix, _rows, _cols, _value, ->)

#if LOG_SWITCH
#define log_matrix_impl(_matrix, _msg, _format, _op)                           \
  {                                                                            \
    printf("%s, rows:%d, cols:%d, data:{\n", _msg, (_matrix)_op rows,          \
           (_matrix)_op cols);                                                 \
    for (unsigned char _i = 0; _i < (_matrix)_op rows; _i++) {                         \
      for (unsigned char _j = 0; _j < (_matrix)_op cols; _j++) {                       \
        printf(_format, (_matrix)_op data[_i][_j]);                            \
      }                                                                        \
      printf("\n");                                                            \
    }                                                                          \
    printf("}\n");                                                             \
  }

#define log_matrix(_matrix, _msg, _format)                                     \
  log_matrix_impl(_matrix, _msg, _format, .)

#define log_matrix_ptr(_matrix, _msg, _format)                                 \
  log_matrix_impl(_matrix, _msg, _format, ->)

#define log_whole_matrix_impl(_matrix, _msg, _format, _op)                     \
  {                                                                            \
    printf("%s, rows:%d, cols:%d, data:{\n", _msg, (_matrix)_op rows,          \
           (_matrix)_op cols);                                                 \
    for (unsigned char _i = 0;                                                         \
         _i < sizeof((_matrix)_op data) / sizeof((_matrix)_op data[0]);        \
         _i++) {                                                               \
      for (unsigned char _j = 0; _j < sizeof((_matrix)_op data[0]) /                   \
                                  sizeof((_matrix)_op data[0][0]);             \
           _j++) {                                                             \
        printf(_format, (_matrix)_op data[_i][_j]);                            \
      }                                                                        \
      printf("}\n");                                                           \
    }                                                                          \
  }

#define log_whole_matrix(matrix, _msg, _format)                                \
  log_whole_matrix_impl(matrix, _msg, _format, .)

#define log_whole_matrix_ptr(matrix, _msg, _format)                            \
  log_whole_matrix_impl(matrix, _msg, _format, ->)

#else
#define log_matrix(...)
#define log_matrix_ptr(...)
#define log_whole_matrix(...)
#define log_whole_matrix_ptr(...)
#endif

#endif