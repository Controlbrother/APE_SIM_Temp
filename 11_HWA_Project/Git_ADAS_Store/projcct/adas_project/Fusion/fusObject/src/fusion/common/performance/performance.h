#ifndef __PERFORMANCE_H_
#define __PERFORMANCE_H_

#include <time.h>

#define DO_PERFORMANCE_TEST 0

#if DO_PERFORMANCE_TEST
#define PERFORMANCE_TEST_DEFINE(module)                                        \
  clock_t module##_start_;                                                     \
  clock_t module##_end_;                                                       \
  double module##_max_duration;

#define PERFORMANCE_TEST_START(module) module##_start_ = clock();

#define PERFORMANCE_TEST_END(module, msg)                                      \
  {                                                                            \
    module##_end_ = clock();                                                   \
    double duration =                                                          \
        (double)(module##_end_ - module##_start_) / (double)1e03;              \
    if (duration > module##_max_duration) {                                    \
      module##_max_duration = duration;                                        \
    }                                                                          \
    printf("[perfomance] %s, duration: %.4f ms, max: %.4f ms\n", msg,          \
           duration, module##_max_duration);                                   \
  }
#else
#define PERFORMANCE_TEST_DEFINE(...)
#define PERFORMANCE_TEST_START(...)
#define PERFORMANCE_TEST_END(...)
#endif

#endif