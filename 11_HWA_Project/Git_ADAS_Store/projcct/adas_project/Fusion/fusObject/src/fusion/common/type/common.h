#ifndef __COMMON_H_
#define __COMMON_H_

#include "array.h"

#define EPSILON_1000 (0.001f)
#define EPSILON (0.000001f)
#define MAX_OBSTACLE_CNT (80)

#define DECLARE_PAIR(_type_name, _type1, _type2)                               \
  typedef struct {                                                             \
    _type1 first;                                                              \
    _type2 second;                                                             \
  } _type_name;

DECLARE_PAIR(UCharPair, unsigned char, unsigned char)
DECLARE_ARRAY(UCharPairArray64, UCharPair, MAX_OBSTACLE_CNT)
DECLARE_ARRAY(UCharArray6, unsigned char, 6)
DECLARE_ARRAY(UCharArray15, unsigned char, 15)
DECLARE_ARRAY(UCharArray32, unsigned char, 32)
DECLARE_ARRAY(UCharArray64, unsigned char, MAX_OBSTACLE_CNT)
DECLARE_ARRAY(FloatArray64, float, MAX_OBSTACLE_CNT)

typedef struct {
  float x;
  float y;
} Point2F;

typedef struct {
  float length;
  float width;
  float height;
} Size3D;

typedef struct {
  float x;
  float y;
} Vector2F;

typedef struct {
  float x;
  float y;
  float z;
} Vector3F;

#endif