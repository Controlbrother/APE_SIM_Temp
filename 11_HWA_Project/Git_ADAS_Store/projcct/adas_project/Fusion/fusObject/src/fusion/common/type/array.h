#ifndef __ARRAY_H_
#define __ARRAY_H_

#include "base_type.h"
#include "log.h"
#include <assert.h>
#include <limits.h>

extern unsigned long DTC_counter;

#define DECLARE_ARRAY(_struct_name, _data_type, _data_len)                     \
  typedef struct {                                                             \
    unsigned char size;                                                        \
    _data_type elems[_data_len];                                               \
  } _struct_name;

#define init_array_impl(_array, _size, _value, _op)                            \
  DTC_counter = 13;                                                        \
  assert(_size <= sizeof((_array)_op elems) / sizeof((_array)_op elems[0]));   \
  (_array) _op size = _size;                                                   \
  memset((_array)_op elems, _value, sizeof((_array)_op elems));

#define init_array(_array, _size, _value)                                      \
  init_array_impl(_array, _size, _value, .)

#define init_array_ptr(_array, _size, _value)                                  \
  init_array_impl(_array, _size, _value, ->)

#define emplace_back_array_impl(_array, _elem, _op)                            \
DTC_counter = 14;\
  assert((_array)_op size <                                                    \
         sizeof((_array)_op elems) / sizeof((_array)_op elems[0]));            \
  (_array) _op elems[(_array)_op size] = (_elem);                              \
  (_array) _op size++;

#define emplace_back_array(_array, _elem)                                      \
  emplace_back_array_impl(_array, _elem, .)

#define emplace_back_array_ptr(_array, _elem)                                  \
  emplace_back_array_impl(_array, _elem, ->)

#define emplace_back_array_check_impl(_array, _elem, _op)                      \
  {                                                                            \
    size_t _capcity =                                                          \
        sizeof((_array)_op elems) / sizeof((_array)_op elems[0]);              \
DTC_counter = 15;\
    assert((_array)_op size < _capcity);                                       \
    if ((_array)_op size < _capcity) {                                         \
      (_array) _op elems[(_array)_op size] = (_elem);                          \
      (_array) _op size++;                                                     \
    }                                                                          \
  }

#define emplace_back_array_check(_array, _elem)                                \
  emplace_back_array_check_impl(_array, _elem, .)

#define emplace_back_array_ptr_check(_array, _elem)                            \
  emplace_back_array_check_impl(_array, _elem, ->)

#define copy_array_impl(_source_array, _dest_array, _op)                       \
  (_dest_array) _op size = (_source_array)op size;                             \
  memcpy((_dest_array)_op elems, (_source_array)_op elems,                     \
         (_source_array)_op size * sizeof((_source_array)_op elems[0]));

#define copy_array(_source_array, _dest_array)                                 \
  copy_array_impl(_source_array, _dest_array, .)

#define copy_array_ptr(_source_array, _dest_array)                             \
  copy_array_impl(_source_array, _dest_array, ->)

#define find_elem_array_impl(_array, _elem, _idx, _op)                         \
  _idx = INVALID_IDX;                                                          \
  for (unsigned char _i = 0; _i < (_array)_op size; _i++) {                            \
    if ((_array)_op elems[_i] == _elem) {                                      \
      _idx = _i;                                                               \
      break;                                                                   \
    }                                                                          \
  }

#define find_elem_array(_array, _elem, _idx)                                   \
  find_elem_array_impl(_array, _elem, _idx, .)

#define find_elem_array_ptr(_array, _elem, _idx)                               \
  find_elem_array_impl(_array, _elem, _idx, ->)

#define find_sorted_array_impl(_array, _elem, _idx, _op)                       \
  _idx = INVALID_IDX;                                                          \
  {                                                                            \
    short _low = 0, _high = (_array)_op size - 1, _mid;                        \
    while (_low <= _high) {                                                    \
      _mid = (_low + _high) / 2;                                               \
      if ((_array)_op elems[_mid] == _elem) {                                  \
        _idx = _mid;                                                           \
        break;                                                                 \
      }                                                                        \
      if (_elem > (_array)_op elems[_mid]) {                                   \
        _low = _mid + 1;                                                       \
      } else {                                                                 \
        _high = _mid - 1;                                                      \
      }                                                                        \
    }                                                                          \
  }

#define find_sorted_array(_array, _elem, _idx)                                 \
  find_sorted_array_impl(_array, _elem, _idx, .)

#define find_sorted_array_ptr(_array, _elem, _idx)                             \
  find_sorted_array_impl(_array, _elem, _idx, ->)

// assert(_idx < (_array)_op size);                                            //ignore this check since track_id is not inherent with size of tracks
#define remove_index_array_impl(_array, _idx, _idx_op, _op)                    \
  if (_idx < (_array)_op size) {                                               \
    size_t elem_size = sizeof((_array)_op elems[0]);                           \
    memcpy(&((_array)_op elems[_idx]), &((_array)_op elems[_idx + 1]),         \
           ((_array)_op size - _idx) * elem_size);                             \
    (_array) _op size--;                                                       \
    memset(&((_array)_op elems[(_array)_op size]), 0, elem_size);              \
    _idx_op;                                                                   \
  }

#define remove_index_array(_array, _idx)                                       \
  remove_index_array_impl(_array, _idx, NULL, .)

#define remove_index_array_ptr(_array, _idx)                                   \
  remove_index_array_impl(_array, _idx, NULL, ->)

//"--" operator is used here, the input parameter cann't contains any operator anymore
#define order_remove_index_array(_array, _idx)                                 \
  remove_index_array_impl(_array, _idx, _idx--, .)                          

#define order_remove_index_array_ptr(_array, _idx)                             \
  remove_index_array_impl(_array, _idx, _idx--, ->)

//assert(_idx < sizeof((_array)_op elems) / sizeof((_array)_op elems[0]));     //ignore this check since track_id is not inherent with size of tracks
#define empty_elem_array_impl(_array, _idx, _op)                               \
  memset(&((_array)_op elems[_idx]), 0, sizeof((_array)_op elems[0]))

#define empty_elem_array(_array, _idx) empty_elem_array_impl(_array, _idx, .)

#define empty_elem_array_ptr(_array, _idx)                                     \
  empty_elem_array_impl(_array, _idx, ->)

#define array_empty(_array) (_array).size == 0

#define array_ptr_empty(_array) (_array)->size == 0

#define clear_array(_array) memset(&_array, 0, sizeof(_array))

#define clear_array_ptr(_array) memset(_array, 0, sizeof(*_array))

#if LOG_SWITCH
#define log_array_impl(_array, _msg, _format, _op)                             \
  {                                                                            \
    size_t _capcity =                                                          \
        sizeof((_array)_op elems) / sizeof((_array)_op elems[0]);              \
    printf("%s, cap:%lu, size:%d, elems:{", _msg, _capcity, (_array)_op size); \
    for (unsigned char _i = 0; _i < (_array)_op size; _i++) {                          \
      printf(_format, (_array)_op elems[_i]);                                  \
    }                                                                          \
    printf("}\n");                                                             \
  }

#define log_array(_array, _msg, _format)                                       \
  log_array_impl(_array, _msg, _format, .)

#define log_array_ptr(_array, _msg, _format)                                   \
  log_array_impl(_array, _msg, _format, ->)

#define log_whole_array_impl(_array, _msg, _format, _op)                       \
  {                                                                            \
    size_t _capcity =                                                          \
        sizeof((_array)_op elems) / sizeof((_array)_op elems[0]);              \
    printf("%s, cap:%lu, size:%d, elems:{", _msg, _capcity, (_array)_op size); \
    for (unsigned char _i = 0; _i < _capcity; _i++) {                                  \
      printf(_format, (_array)_op elems[_i]);                                  \
    }                                                                          \
    printf("}\n");                                                             \
  }

#define log_whole_array(_array, _msg, _format)                                 \
  log_whole_array_impl(_array, _msg, _format, .)

#define log_whole_array_ptr(_array, _msg, _format)                             \
  log_whole_array_impl(_array, _msg, _format, ->)

#define log_array_with_func_impl(_array, _msg, _func, _op)                     \
  {                                                                            \
    size_t _capcity =                                                          \
        sizeof((_array)_op elems) / sizeof((_array)_op elems[0]);              \
    printf("%s, cap:%lu, size:%d elems:{", _msg, _capcity, (_array)_op size);  \
    for (unsigned char _i = 0; _i < (_array)_op size; _i++) {                          \
      _func(&((_array)_op elems[_i]));                                         \
    }                                                                          \
    printf("}\n");                                                             \
  }

#define log_array_with_func(_array, _msg, _func)                               \
  log_array_with_func_impl(_array, _msg, _func, .)

#define log_array_ptr_with_func(_array, _msg, _func)                           \
  log_array_with_func_impl(_array, _msg, _func, ->)

#else
#define log_array(...)
#define log_array_ptr(...)
#define log_whole_array(...)
#define log_whole_array_ptr(...)
#define log_array_with_func(...)
#define log_array_ptr_with_func(...)
#endif

#endif