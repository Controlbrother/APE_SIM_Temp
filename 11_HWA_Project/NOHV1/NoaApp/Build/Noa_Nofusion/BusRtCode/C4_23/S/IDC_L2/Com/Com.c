/** <!------------------------------------------------------------------------->
*
*  @file Com.c
*
*  @brief Implementation of the AUTOSAR COM module.
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

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "Com.h"

/*------------------------------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
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
void Com_GetVersionInfo(Std_VersionInfoType* versionInfo)
{
    if (versionInfo != NULL_PTR)
    {
        versionInfo->vendorID = COM_VENDOR_ID;
        versionInfo->instanceID = COM_INSTANCE_ID;
        versionInfo->moduleID = COM_MODULE_ID;
        versionInfo->sw_major_version = COM_MAJOR_VERSION;
        versionInfo->sw_minor_version = COM_MINOR_VERSION;
        versionInfo->sw_patch_version = COM_PATCH_VERSION;
    }
}

