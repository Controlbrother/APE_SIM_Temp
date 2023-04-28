#ifndef __MUNKRES_OPTIMIZER_H_
#define __MUNKRES_OPTIMIZER_H_

#include "common.h"
#include "matrix.h"

#define CAMERA_ASSIGN_COST 150	//used for double check of cost
#define RADAR_ASSIGN_COST 50	//used for double check of cost
#define TRACK_ASSIGN_COST 60	//used for double check of cost

#define CAMERA_SEPERATE_COST 200
#define RADAR_SEPERATE_COST 100

enum
{
    INVALID_COST_INIT = 10000,
    INVALID_COST_DX = 9999,
    INVALID_COST_DY = 9998,
    INVALID_COST_VX = 9997,
    INVALID_COST_VY = 9996,
    INVALID_COST_NEW_TRACK =10001
};

#define COST_MATRIX_ROWS (MAX_OBSTACLE_CNT)
#define COST_MATRIX_COLS (MAX_OBSTACLE_CNT)

typedef struct
{
    unsigned char rows;
    unsigned char cols;
    float data[COST_MATRIX_ROWS][COST_MATRIX_COLS];
}CostMatrix;

extern CostMatrix cost_matrix_;

void init_mk_cost_matrix(unsigned char rows, unsigned char cols);

void mk_init_var(void);
void mk_minimize(UCharPairArray64* assignments, float cost_threshold);

bool is_starred(unsigned char row, unsigned char col);
void star(unsigned char row, unsigned char col);
void unstar(unsigned char row, unsigned char col);
bool col_contains_star(unsigned char col);
unsigned char find_star_in_row(unsigned char row);
unsigned char find_star_in_col(unsigned char col);
void check_star(void);
bool is_primed(unsigned char row, unsigned char col);
void prime(unsigned char row, unsigned char col);
unsigned char find_prime_in_row(unsigned char row);
void clear_primes(void);
bool row_covered(unsigned char row);
void cover_row(unsigned char row);
void uncover_row(unsigned char row);
bool col_covered(unsigned char col);
void cover_col(unsigned char col);
void uncover_col(unsigned char col);
void clear_covers(void);
float find_smallest_uncovered(void);
bool find_zero(unsigned char *zero_row, unsigned char *zero_col);
void star_zeroes(void);

void reduce_rows(void);
void cover_starred_zeroes(void);
void make_augmenting_path(void);
void augment_pah(void);

void do_munkres(void);
#endif