/*****************************************************************************

   Include file Noa_Nofusion_dsrtmdlfcn.h:

   Definition of model functions.

   Wed Mar  9 12:18:59 2022

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Noa_Nofusion_DSRTMDLFCN_HEADER_
#define _DSRT_Noa_Nofusion_DSRTMDLFCN_HEADER_
#if defined(EXTERN_C_DECL)
#undef EXTERN_C_DECL
#endif

#if defined(__cplusplus)
#define EXTERN_C_DECL                  extern "C"
#else
#define EXTERN_C_DECL                  extern
#endif

#include "rtwtypes.h"
#include <string.h>

/* Model functions declarations */
EXTERN_C_DECL void Noa_Nofusion_DSRTInitMdl(void);
EXTERN_C_DECL void Noa_Nofusion_DSRTStartMdl(void);
EXTERN_C_DECL void Noa_Nofusion_DSRTStopMdl(void);
EXTERN_C_DECL void Noa_Nofusion_DSRTCheckForSimulationStopCondition(void);
EXTERN_C_DECL void Noa_Nofusion_DSRTCheckForErrorStatus(void);
EXTERN_C_DECL void Noa_Nofusion_APTerminateSimulation(void);
EXTERN_C_DECL void Noa_Nofusion_APStopSimulation(void);
EXTERN_C_DECL void Noa_Nofusion_APLastApplStateStopped(uint8_T*);
EXTERN_C_DECL void Noa_Nofusion_APPrintMessage(const char_T*);

#endif                               /* _DSRT_Noa_Nofusion_DSRTMDLFCN_HEADER_ */
