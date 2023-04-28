/** <!------------------------------------------------------------------------->
*
*  @file Det.h
*
*  @brief AUTOSAR Development Error Tracer (DET) header file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#pragma once

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include <Std_Types.h>
#include "Config.h"
#include "BusConfiguration.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Vendor ID. */
#define DET_VENDOR_ID           4711

/* Module ID of Development Error Tracer. */
#define DET_MODULE_ID           15

/* AUTOSAR specification where the appropriate implementation is based on. */
#define DET_AR_MAJOR_VERSION    2
#define DET_AR_MINOR_VERSION    1
#define DET_AR_PATCH_VERSION    0

/* Version number of dSPACE specific implementation of the module. */
#define DET_SW_MAJOR_VERSION    1
#define DET_SW_MINOR_VERSION    0
#define DET_SW_PATCH_VERSION    0

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

extern void Det_Init(void);
extern void Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
extern void Det_Start(void);
extern void Det_GetVersionInfo(Std_VersionInfoType *versioninfo);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
