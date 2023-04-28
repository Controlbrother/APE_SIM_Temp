/** <!------------------------------------------------------------------------->
*
*  @file SchM.h
*
*  @brief 
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

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "Config.h"
#include "BusConfiguration.h"

#include <Std_Types.h>
#include <DsStd.h>
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/


/* version information */
#define SCHM_VENDOR_ID ((uint8) 35) /* Vendor ID */
#define SCHM_MODULE_ID ((uint16) 130) /* Module ID */
#define SCHM_SW_MAJOR_VERSION ((uint8) 3) /* Major Version */
#define SCHM_SW_MINOR_VERSION ((uint8) 2) /* Minor Version */
#define SCHM_SW_PATCH_VERSION ((uint8) 1) /* Patch Version */

/* service identifiers */
#define SCHM_ID_INIT ((uint8) 0) 
#define SCHM_ID_DEINIT ((uint8) 1) 
#define SCHM_ID_GET_VERSION_INFO ((uint8) 2) 
#define SCHM_ID_ENTER ((uint8) 3) 
#define SCHM_ID_EXIT ((uint8) 4) 
#define SCHM_ID_ACT_MAIN ((uint8) 5) 
#define SCHM_ID_CANCEL_MAIN ((uint8) 6) 

/* schedule manager return type values */
#define SCHM_E_OK 0x0 /* No error occurred */
#define SCHM_E_LIMIT 0x4 /* An internal limit has been exceeded */
#define SCHM_E_NOFUNC 0x5 /* Requested service has not the desired effect */
#define SCHM_E_STATE 0x7 /* Requested service is already in use */

/* development error values */
#define SCHM_E_PARAM_CONFIG 0x1 /* API service called with wrong parameter */
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

typedef uint8 SchM_ReturnType;
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

extern void SchM_Init(void);
extern void SchM_DeInit(void);
extern void SchM_GetVersionInfo(Std_VersionInfoType * VersionInfo);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */ 

/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
