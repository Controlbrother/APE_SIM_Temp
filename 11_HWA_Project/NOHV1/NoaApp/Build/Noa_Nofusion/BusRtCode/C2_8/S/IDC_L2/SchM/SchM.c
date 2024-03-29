/** <!------------------------------------------------------------------------->
*
*  @file SchM.c
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

#ifndef SCHM_C
#define SCHM_C

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "SchM.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

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
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

/*************************************************************************************************\
 ***  FUNCTION:
 ***      SchM_Init
 ***
 ***  DESCRIPTION:
 ***      Function for initialization of the SchM module.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
void SchM_Init(void)
{
}

/*************************************************************************************************\
 ***  FUNCTION:
 ***      SchM_DeInit
 ***
 ***  DESCRIPTION:
 ***      Function for de-initialization of the SchM module.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
void SchM_DeInit(void)
{
}

/*************************************************************************************************\
 ***  FUNCTION:
 ***      SchM_GetVersionInfo
 ***
 ***  DESCRIPTION:
 ***      Returns the version information of the module.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      Std_VersionInfoType *VersionInfo         
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
void SchM_GetVersionInfo(Std_VersionInfoType * VersionInfo)
{
   VersionInfo->vendorID = SCHM_VENDOR_ID;
   VersionInfo->moduleID = SCHM_MODULE_ID;
   VersionInfo->sw_major_version = SCHM_SW_MAJOR_VERSION;
   VersionInfo->sw_minor_version = SCHM_SW_MINOR_VERSION;
   VersionInfo->sw_patch_version = SCHM_SW_PATCH_VERSION;
}

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/


#endif/*SCHM_C */
/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
