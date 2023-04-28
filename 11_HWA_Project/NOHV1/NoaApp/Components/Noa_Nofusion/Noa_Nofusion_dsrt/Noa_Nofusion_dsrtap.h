/*********************** dSPACE target specific file *************************

   Include file Noa_Nofusion_dsrtap.h:

   Definitions for access points to Simulink root ports.

   Wed Mar  9 12:18:59 2022

   Copyright 2020, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#ifndef _DSRT_Noa_Nofusion_DSRTAP_HEADER_
#define _DSRT_Noa_Nofusion_DSRTAP_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

#ifndef DATA_PORT_ACCESS_POINT_API_VERSION
#error The data port access point API version is undefined.
#elif (DATA_PORT_ACCESS_POINT_API_VERSION > 2) || (DATA_PORT_ACCESS_POINT_API_VERSION < 1)
#error The defined data port access point API version is unsupported.
#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)
#include "Noa_Nofusion_types.h"
#else
#include "rtwtypes.h"
#endif

/* Extern declarations for access points */
#ifdef HAVE_Noa_Nofusion_DSRTAP_CUSTOM
#include "Noa_Nofusion_dsrtap_custom.h"
#endif
#endif                                 /* _DSRT_Noa_Nofusion_DSRTAP_HEADER_ */
