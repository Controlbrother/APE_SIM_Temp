/*********************** dSPACE target specific file *************************

   Include file Noa_Nofusion_dsrttf.h:

   Extern declarations of task functions.

   Wed Mar  9 12:18:59 2022

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Noa_Nofusion_DSRTTF_HEADER_
#define _DSRT_Noa_Nofusion_DSRTTF_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

EXTERN_C void Noa_Nofusion_DSRTMdlOutputs0(void);
EXTERN_C void Noa_Nofusion_DSRTMdlUpdate0(void);

#endif                                 /* _DSRT_Noa_Nofusion_DSRTTF_HEADER_ */
