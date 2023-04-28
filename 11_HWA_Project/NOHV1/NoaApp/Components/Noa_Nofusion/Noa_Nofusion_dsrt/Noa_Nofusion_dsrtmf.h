/*********************** dSPACE target specific file *************************

   Include file Noa_Nofusion_dsrtmf.h:

   Definition of model functions.

   Wed Mar  9 12:18:59 2022

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Noa_Nofusion_DSRTMF_HEADER_
#define _DSRT_Noa_Nofusion_DSRTMF_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* Model functions declarations */
#define Noa_Nofusion_dsrt_mdl_ApSimEngineOnInitIoPreRtosInit()
#define dsrt_mdl_timesync_simstate()
#define Noa_Nofusion_dsrt_mdl_ApSimEngineIdle()
#endif                                 /* _DSRT_Noa_Nofusion_DSRTMF_HEADER_ */

/****** [EOF] ****************************************************************/
