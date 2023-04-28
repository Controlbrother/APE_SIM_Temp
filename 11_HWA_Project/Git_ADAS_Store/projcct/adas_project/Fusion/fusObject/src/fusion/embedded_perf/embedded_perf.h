#ifndef __EMBEDDED_PERF_H
#define __EMBEDDED_PERF_H

//#include "autosar_swc_objfusion.h"
//#include "autosar_swc_objfusion_private.h"

#define RUN_EMBEDDED_PERFORMANCE_TEST 0

#if RUN_EMBEDDED_PERFORMANCE_TEST
extern StbM_TimeStampExtendedType OFM_sys_time;
extern StbM_UserDataType OFM_user_data;


#define EMBEDDED_PERFORMANCE_TEST_DEFINE(module)                              \
  double module##_start_;                                                     \
  double module##_end_;                                                       \
  double module##_duration;                                                   \
  double module##_max_duration;


#define EMBEDDED_PERFORMANCE_TEST_START(module)                               \
{                                                                             \
    Rte_Call_GlobalTime_Slave_StbMSynchronizedTimeBase_0_GetCurrentTimeExtended(&OFM_sys_time, &OFM_user_data); \
    module##_start_ = OFM_sys_time.seconds + 1e-9 * (double)OFM_sys_time.nanoseconds;\
}                                                                                   

#define EMBEDDED_PERFORMANCE_TEST_END(module)                                  \
  {                                                                            \
    Rte_Call_GlobalTime_Slave_StbMSynchronizedTimeBase_0_GetCurrentTimeExtended(&OFM_sys_time, &OFM_user_data); \
    module##_end_ = OFM_sys_time.seconds + 1e-9 * (double)OFM_sys_time.nanoseconds; \
    module##_duration =(module##_end_ - module##_start_);                      \
    if (module##_duration > module##_max_duration) {                                    \
      module##_max_duration = module##_duration;                                        \
    }                                                                          \
  }
#else
#define EMBEDDED_PERFORMANCE_TEST_DEFINE(...)
#define EMBEDDED_PERFORMANCE_TEST_START(...)
#define EMBEDDED_PERFORMANCE_TEST_END(...)
#endif

#endif