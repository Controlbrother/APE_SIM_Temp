#ifndef __CIRCULAR_BUFFER_
#define __CIRCULAR_BUFFER_

#include "base_type.h"
#include "log.h"
#include <assert.h>

#define DECLARE_CIRCULAT_BUFFER(_struct_name, _data_type, _data_len)           \
  typedef struct {                                                             \
    unsigned char head;                                                                \
    unsigned char tail;                                                                \
    bool is_full;                                                              \
    unsigned char capacity;                                                            \
    _data_type elems[_data_len];                                               \
  } _struct_name;

#define init_circular_buffer(_circle_buffer)                                   \
  (_circle_buffer).head = 0;                                                   \
  (_circle_buffer).tail = 0;                                                   \
  (_circle_buffer).is_full = false;                                            \
  (_circle_buffer).capacity =                                                  \
      sizeof((_circle_buffer).elems) / sizeof((_circle_buffer).elems[0]);      \
  memset((_circle_buffer).elems, 0, sizeof((_circle_buffer).elems));

#define emplace_back_circular_buffer(_circle_buffer, _elem)                    \
  (_circle_buffer).elems[(_circle_buffer).head] = _elem;                       \
  if ((_circle_buffer).is_full) {                                              \
    (_circle_buffer).tail =                                                    \
        ((_circle_buffer).tail + 1) % (_circle_buffer).capacity;               \
  }                                                                            \
  (_circle_buffer).head =                                                      \
      ((_circle_buffer).head + 1) % (_circle_buffer).capacity;                 \
  (_circle_buffer).is_full = (_circle_buffer).head == (_circle_buffer).tail;

#define emplace_back_circular_buffer_move_pointer(_circle_buffer)              \
  if ((_circle_buffer).is_full) {                                              \
    (_circle_buffer).tail =                                                    \
        ((_circle_buffer).tail + 1) % (_circle_buffer).capacity;               \
  }                                                                            \
  (_circle_buffer).head =                                                      \
      ((_circle_buffer).head + 1) % (_circle_buffer).capacity;                 \
  (_circle_buffer).is_full = (_circle_buffer).head == (_circle_buffer).tail;

#define get_size_circular_buffer(_circle_buffer, _size)                        \
  _size = 0;                                                                   \
  if (!(_circle_buffer).is_full) {                                             \
    if ((_circle_buffer).tail > (_circle_buffer).head) {                       \
      _size = (_circle_buffer).head - (_circle_buffer).tail +                  \
              (_circle_buffer).capacity;                                       \
    } else {                                                                   \
      _size = (_circle_buffer).head - (_circle_buffer).tail;                   \
    }                                                                          \
  } else {                                                                     \
    _size = (_circle_buffer).capacity;                                         \
  }

#define get_end_index_circular_buffer(_circle_buffer, _end_idx)                \
  _end_idx = INVALID_IDX;                                                      \
  {                                                                            \
    unsigned char get_size_circular_buffer((_circle_buffer), _size);                   \
    if (_size > 0) {                                                           \
      _end_idx =                                                               \
          ((_circle_buffer).tail + _size - 1) % (_circle_buffer).capacity;     \
    }                                                                          \
  }

#define is_circular_buffer_empty(_circle_buffer, _is_empty)                    \
  _is_empty = (!(_circle_buffer).is_full &&                                    \
               ((_circle_buffer).head == (_circle_buffer).tail))

#define pop_front_circle_buffer(_circle_buffer, _elem)                         \
  {                                                                            \
    bool is_circular_buffer_empty(_circle_buffer, _is_empty);                  \
    assert(!_is_empty);                                                        \
    if (!_is_empty) {                                                          \
      _elem = (_circle_buffer).elems[(_circle_buffer).tail];                   \
      (_circle_buffer).tail =                                                  \
          ((_circle_buffer).tail + 1) % (_circle_buffer).capacity;             \
      (_circle_buffer).is_full = false;                                        \
    }                                                                          \
  }

#define discard_front_circle_buffer(_circle_buffer)                            \
  {                                                                            \
    bool is_circular_buffer_empty(_circle_buffer, _is_empty);                  \
    assert(!_is_empty);                                                        \
    if (!_is_empty) {                                                          \
      (_circle_buffer).tail =                                                  \
          ((_circle_buffer).tail + 1) % (_circle_buffer).capacity;             \
      (_circle_buffer).is_full = false;                                        \
    }                                                                          \
  }

#define clear_circular_buffer(_circle_buffer)                                  \
  (_circle_buffer).head = 0;                                                   \
  (_circle_buffer).tail = 0;                                                   \
  (_circle_buffer).is_full = false;

#if LOG_SWITCH
#define log_circular_buffer(_circle_buffer, _msg, _log_func)                   \
  {                                                                            \
    unsigned char _head = (_circle_buffer).tail;                                       \
    unsigned char _tail = (_circle_buffer).head;                                       \
    unsigned char get_size_circular_buffer((_circle_buffer), _size);                   \
    bool is_circular_buffer_empty((_circle_buffer), _is_empty);                \
    printf(                                                                    \
        "%s, cap:%d, size:%d, head:%d, tail:%d, full:%d, empty:%d, elems:{",   \
        _msg, (_circle_buffer).capacity, _size, _tail, _head,                  \
        (_circle_buffer).is_full, _is_empty);                                  \
    for (; _head < (_circle_buffer).tail + _size; _head++) {                   \
      _log_func(&((_circle_buffer).elems[_head % (_circle_buffer).capacity])); \
    }                                                                          \
    printf("}\n");                                                             \
  }
#else
#define log_circular_buffer(...)
#endif

#endif