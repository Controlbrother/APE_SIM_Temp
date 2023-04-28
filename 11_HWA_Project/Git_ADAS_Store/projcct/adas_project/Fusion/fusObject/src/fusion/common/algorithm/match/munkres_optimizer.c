#include "munkres_optimizer.h"

#define MAX_MK_ELEM_CNT (COST_MATRIX_ROWS)

DECLARE_ARRAY(MkImageArray, unsigned char, MAX_MK_ELEM_CNT * 2)

typedef struct
{
    unsigned char rows;
    unsigned char cols;
    unsigned char data[MAX_MK_ELEM_CNT][MAX_MK_ELEM_CNT];
}MkMarkMatrix;

CostMatrix cost_matrix_;

typedef void (*StepFunction)(void);
typedef enum { NONE, PRIME, STAR } Mark;
static const unsigned char ROW_NOT_FOUND = INVALID_IDX;
static const unsigned char COLUMN_NOT_FOUND = INVALID_IDX - 1;

void prime_zeroes(void);
void augment_path(void);
void make_augmenting_path(void);

unsigned char max_size_;
StepFunction state_;
UCharArray64 rows_covered_;
UCharArray64 cols_covered_;
UCharArray64 uncov_rows_;
UCharArray64 uncov_cols_;
UCharArray64 stars_in_col_;
MkMarkMatrix marks_;
MkImageArray pre_image_;
MkImageArray image_;


inline bool is_starred(unsigned char row, unsigned char col) {
  return marks_.data[row][col] == STAR;
}

inline void star(unsigned char row, unsigned char col) {
  marks_.data[row][col] = STAR;
  stars_in_col_.elems[col]++;
}

inline void unstar(unsigned char row, unsigned char col) {
  marks_.data[row][col] = NONE;
  stars_in_col_.elems[col]--;
}

inline bool col_contains_star(unsigned char col) {
  return stars_in_col_.elems[col] > 0;
}

inline unsigned char find_star_in_row(unsigned char row) {
  for (unsigned char col = 0; col < max_size_; col++) {
    if (is_starred(row, col)) {
      return col;
    }
  }
  //return COLUMN_NOT_FOUND;
  return 254U;
}

unsigned char find_star_in_col(unsigned char col) {
  if (!col_contains_star(col)) {
    return ROW_NOT_FOUND;
  }
  for (unsigned char row = 0; row < max_size_; row++) {
    if (is_starred(row, col)) {
      return row;
    }
  }
  return ROW_NOT_FOUND;
}

void check_star(void) {
  for (unsigned char row = 0; row < cost_matrix_.rows; row++) {
    unsigned char star_col = COLUMN_NOT_FOUND;
    bool is_single = true;
    for (unsigned char col = 0; col < cost_matrix_.cols; col++) {
      if (is_starred(row, col)) {
        if (star_col == COLUMN_NOT_FOUND) {
          star_col = col;
        } else {
          is_single = false;
          break;
        }
      }
    }
    if (!is_single) {
      for (unsigned char col = 0; col < cost_matrix_.cols; col++) {
        unstar(row, col);
      }
    }
  }
}

inline bool is_primed(unsigned char row, unsigned char col) {
  return marks_.data[row][col] == PRIME;
}

inline void prime(unsigned char row, unsigned char col) { marks_.data[row][col] = PRIME; }

inline unsigned char find_prime_in_row(unsigned char row) {
  for (unsigned char col = 0; col < max_size_; col++) {
    if (is_primed(row, col)) {
      return col;
    }
  }
  //return COLUMN_NOT_FOUND;
  return 254U;
}

inline void clear_primes(void) {
  for (unsigned char row = 0; row < max_size_; row++) {
    for (unsigned char col = 0; col < max_size_; col++) {
      if (is_primed(row, col)) {
        marks_.data[row][col] = NONE;
      }
    }
  }
}

inline bool row_covered(unsigned char row) { return rows_covered_.elems[row]; }

inline void cover_row(unsigned char row) { rows_covered_.elems[row] = true; }

inline void uncover_row(unsigned char row) { rows_covered_.elems[row] = false; }

inline bool col_covered(unsigned char col) { return cols_covered_.elems[col]; }

inline void cover_col(unsigned char col) { cols_covered_.elems[col] = true; }

inline void uncover_col(unsigned char col) { cols_covered_.elems[col] = false; }

void clear_covers(void) {
  for (unsigned char x = 0; x < max_size_; x++) {
    uncover_row(x);
    uncover_col(x);
  }
}

float find_smallest_uncovered(void) {
  float min_cost = (float)INVALID_COST_INIT;
  float cost;
  clear_array(uncov_cols_);
  clear_array(uncov_rows_);
  for (unsigned char i = 0; i < max_size_; i++) {
    if (!row_covered(i)) {
      emplace_back_array(uncov_rows_, i);
    }
    if (!col_covered(i)) {
      emplace_back_array(uncov_cols_, i);
    }
  }
  for (unsigned char row = 0; row < uncov_rows_.size; row++) {
    for (unsigned char col = 0; col < uncov_cols_.size; col++) {
      cost = cost_matrix_.data[uncov_rows_.elems[row]][uncov_cols_.elems[col]];
      if (cost < min_cost) {
        min_cost = cost;
      }
    }
  }
  return min_cost;
}

bool find_zero(unsigned char *zero_row, unsigned char *zero_col) {
  clear_array(uncov_cols_);
  clear_array(uncov_rows_);
  for (unsigned char i = 0; i < max_size_; i++) {
    if (!row_covered(i)) {
      emplace_back_array(uncov_rows_, i);
    }
    if (!col_covered(i)) {
      emplace_back_array(uncov_cols_, i);
    }
  }
  if (array_empty(uncov_rows_) || array_empty(uncov_cols_)) {
    return false;
  }
  for (unsigned char i = 0; i < uncov_rows_.size; i++) {
    for (unsigned char j = 0; j < uncov_cols_.size; j++) {
      if (cost_matrix_.data[uncov_rows_.elems[i]][uncov_cols_.elems[j]] == 0) {
        *zero_row = uncov_rows_.elems[i];
        *zero_col = uncov_cols_.elems[j];
        return true;
      }
    }
  }
  return false;
}

void prime_zeroes(void) {
    for (;;) {
        unsigned char zero_row = 0;
        unsigned char zero_col = 0;
        if (!find_zero(&zero_row, &zero_col)) {
            state_ = &augment_path;
            return;
        }
        prime(zero_row, zero_col);
        unsigned char star_col = find_star_in_row(zero_row);
        if (star_col != COLUMN_NOT_FOUND) {
            cover_row(zero_row);
            uncover_col(star_col);
        }
        else {
            pre_image_.elems[0] = zero_row;
            image_.elems[0] = zero_col;
            state_ = &make_augmenting_path;
            return;
        }
    }
}

void augment_path(void) {
    float min_cost = find_smallest_uncovered();

    for (unsigned char row = 0; row < max_size_; row++) {
        if (row_covered(row)) {
            for (unsigned char c = 0; c < max_size_; c++) {
                cost_matrix_.data[row][c] += min_cost;
            }
        }
    }
    for (unsigned char col = 0; col < max_size_; col++) {
        if (!col_covered(col)) {
            for (unsigned char r = 0; r < max_size_; r++) {
                cost_matrix_.data[r][col] -= min_cost;
            }
        }
    }
    state_ = &prime_zeroes;
}

void cover_starred_zeroes(void) {
    unsigned char num_covered = 0;
    for (unsigned char col = 0; col < max_size_; col++) {
        if (col_contains_star(col)) {
            cover_col(col);
            num_covered++;
        }
    }
    if (num_covered >= max_size_) {
        state_ = NULL;
        return;
    }
    state_ = &prime_zeroes;
}

void star_zeroes(void) {
  for (unsigned char row = 0; row < max_size_; row++) {
    if (row_covered(row)) {
      continue;
    }
    for (unsigned char col = 0; col < max_size_; col++) {
      if (col_covered(col)) {
        continue;
      }
      if (cost_matrix_.data[row][col] == 0) {
        star(row, col);
        cover_row(row);
        cover_col(col);
        break;
      }
    }
  }
  clear_covers();
  state_ = &cover_starred_zeroes;
}



void reduce_rows(void) {
  for (unsigned char row = 0; row < max_size_; row++) {
    float min_cost = cost_matrix_.data[row][0];
    for (unsigned char col = 1; col < max_size_; col++) {
      if (cost_matrix_.data[row][col] < min_cost) {
        min_cost = cost_matrix_.data[row][col];
      }
    }
    for (unsigned char col = 0; col < max_size_; col++) {
      cost_matrix_.data[row][col] -= min_cost;
    }
  }
  state_ = &star_zeroes;
}

void make_augmenting_path(void) {
  bool done = false;
  unsigned char count = 0;
  while (!done) {
    unsigned char row = find_star_in_col(image_.elems[count]);
    if (row != ROW_NOT_FOUND) {
      count++;
      pre_image_.elems[count] = row;
      image_.elems[count] = image_.elems[count - 1];
    } else {
      done = true;
    }
    if (!done) {
      unsigned char col = find_prime_in_row(pre_image_.elems[count]);
      count++;
      pre_image_.elems[count] = pre_image_.elems[count - 1];
      image_.elems[count] = col;
    }
  }
  for (unsigned char i = 0; i <= count; i++) {
    unsigned char row = pre_image_.elems[i];
    unsigned char col = image_.elems[i];
    if (is_starred(row, col)) {
      unstar(row, col);
    } else {
      star(row, col);
    }
  }
  clear_covers();
  clear_primes();
  state_ = &cover_starred_zeroes;
}

void do_munkres(void) {
  unsigned long max_iter = 1000;           //maximum iteration tims 1000
  unsigned char iter_num = 0;
  state_ = reduce_rows;
  while (state_ != NULL && iter_num < max_iter) {
    (*state_)();
    ++iter_num;
  }
  if (iter_num >= max_iter) {
    check_star();
  }
}

void init_mk_cost_matrix(unsigned char rows, unsigned char cols) {
    //init_matrix(cost_matrix_, rows, cols, 0);
    memset(&cost_matrix_.data, 0, rows*cols*sizeof(float));
}

void mk_init_var(void) {
    max_size_ = cost_matrix_.rows > cost_matrix_.cols ? cost_matrix_.rows
        : cost_matrix_.cols;
    init_array(rows_covered_, max_size_, 0);
    init_array(cols_covered_, max_size_, 0);
    init_array(uncov_rows_, 0, 0);
    init_array(uncov_cols_, 0, 0);
    init_array(stars_in_col_, max_size_, 0);
    //init_matrix(marks_, max_size_, max_size_, 0);
    memset(&marks_.data, 0, max_size_*max_size_*sizeof(char));
    init_array(pre_image_, max_size_ * 2, 0);
    init_array(image_, max_size_ * 2, 0);
}

void mk_minimize(UCharPairArray64* assignments, float cost_threshold) {
    bool NOT_ALL_INVALID = false;
    for (unsigned char row = 0; row < cost_matrix_.rows; row++) {
        for (unsigned char col = 0; col < cost_matrix_.cols; col++) {
            if (cost_matrix_.data[row][col] < cost_threshold) {          //judge with ASSIGN_COST directly but not INVALID_COST
                NOT_ALL_INVALID = true;
                break;
            }
        }
        if (NOT_ALL_INVALID == true)
            break;
    }
    if (NOT_ALL_INVALID == false)          //if all the elememt equals to INVALID_COST, return directly
        return;

    if (cost_matrix_.rows == 1 && cost_matrix_.cols == 1) {           //same with do_munkres() but use less time
        if (cost_matrix_.data[0][0] < cost_threshold) {
            assignments->elems[assignments->size].first = 0;
            assignments->elems[assignments->size].second = 0;
            assignments->size++;
#if LOG_MATCH
            printf("committed one assignment, matrix location : \033[1;35mrow: %d\tcol: %d\t\033[0m\n", 1, 1);
#endif
        }
        return;
    }
    mk_init_var();

    do_munkres();
    //log_matrix(cost_matrix_, "cost_matrix_", "%10.4f ");      //cost matrix changes after munkres
    for (unsigned char row = 0; row < cost_matrix_.rows; row++) {
        for (unsigned char col = 0; col < cost_matrix_.cols; col++) {
            //if (is_starred(row, col) && (cost_matrix_.data[row][col] < ASSIGN_COST)) suppose if get a star match, the original cost_matrix value < ASSIGN_COST 
            if (is_starred(row, col)) {
                assignments->elems[assignments->size].first = row;
                assignments->elems[assignments->size].second = col;
                assignments->size++;
#if LOG_MATCH
                printf("committed one assignment, matrix location : \033[1;35mrow: %d\tcol: %d\t\033[0m\n", row + 1, col + 1);
#endif
                break;
            }
        }
    }
}


