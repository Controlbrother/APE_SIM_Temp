/** <!------------------------------------------------------------------------->
*
*  @file Det.c
*
*  @brief AUTOSAR Development Error Tracer (DET) implementation.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "Det.h"
#include <stdio.h>

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4100) //Unreferenced formal parameter (In case of inactive Development Error Detection)
#endif

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  FUNCTION IMPLEMENTATION
\*------------------------------------------------------------------------------------------------*/

void Det_Init(void)
{

}

void Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
 printf("%s: 0x%02x 0x%02x %d %d", __FUNCTION__, ModuleId, InstanceId, ApiId, ErrorId);
}

void Det_Start(void)
{

}

void Det_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
    INTENDED_UNREFERENCED_PARAMETER(versioninfo);
}

#ifdef _MSC_VER
#pragma warning (pop)
#endif