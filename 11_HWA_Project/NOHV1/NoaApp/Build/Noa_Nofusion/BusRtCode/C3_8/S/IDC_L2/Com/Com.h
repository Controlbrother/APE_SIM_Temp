/** <!------------------------------------------------------------------------->
*
*  @file Com.h
*
*  @brief Definition of AUTOSAR COM header.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/
#pragma once

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "Com_generated.h"
#if (COM_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#include "StateManager_generated.h"

/*------------------------------------------------------------------------------------------------*\
  Defines
\*------------------------------------------------------------------------------------------------*/

/* The service is currently not available e.g. the corresponding I-PDU group is stopped (or a development error has been detected). */
#define COM_SERVICE_NOT_AVAILABLE          0x80

/* a timeout has occurred. */
#define COM_TIMEOUT                        0x81

/* COM module version information. */
#define COM_MODULE_ID                      ((uint16)50)
#define COM_VENDOR_ID                      0x23 /* 35 */
#define COM_INSTANCE_ID                    0x0
#define COM_MAJOR_VERSION                  0x03
#define COM_MINOR_VERSION                  0x02
#define COM_PATCH_VERSION                  0x01

#define COM_SID_START_OF_RECEPTION         0x46
#define COM_SID_TP_RX_INDICATION           0x45
#define COM_SID_TP_TX_CONFIRMATION         0x48
#define COM_SID_COPY_RX_DATA               0x44
#define COM_SID_COPY_TX_DATA               0x43

#define COM_E_PARAM                        0x01
#define COM_E_UNINIT                       0x02
#define COM_E_PARAM_POINTER                0x03
#define COM_E_INIT_FAILED                  0x04
#define COM_E_SKIPPED_TRANSMISSION         0x05
#define COM_E_PDU_ID_INVALID               0x15

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_GetVersionInfo
 *** 
 *** DESCRIPTION:
 ***     This service returns the version information of this module. The version information
 ***     includes:
 ***     1) Module ID
 ***     2) Vendor ID
 ***     3) Vendor specific version numbers (BSW00407).
 *** 
 *** PARAMETERS:
 ***     Type                  Name         Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Std_VersionInfoType*  versioninfo  Pointer to where to store the version information of
 ***     this module.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_GetVersionInfo(Std_VersionInfoType* versionInfo);
