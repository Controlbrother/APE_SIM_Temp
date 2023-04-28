#ifndef __HUNGRAIN_MATCH_H_
#define __HUNGRAIN_MATCH_H_

#include "array.h"
#include "matrix.h"

// #define HM_NODE_MATRIX_ROWS (32)
// #define HM_NODE_MATRIX_COLS (32)

// DECLARE_ARRAY(HmArray, uchar, HM_NODE_MATRIX_ROWS)

// DECLARE_MATRIX(HmNodeMatrix, uchar, HM_NODE_MATRIX_ROWS, HM_NODE_MATRIX_COLS)
// DECLARE_MATRIX(HmSubCostMatrix, float, HM_NODE_MATRIX_ROWS / 2,
//                HM_NODE_MATRIX_COLS / 2)

bool AssignByHungarian();

void BuildSubTrees();

void MinimizeAssignment();

void BuildBFSTrees();

#endif
