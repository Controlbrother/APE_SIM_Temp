/** <!------------------------------------------------------------------------->
*
*  @file SchM_LinIf.c
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
#ifndef SCHM_LINIF_C
#define SCHM_LINIF_C

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "SchM_LinIf.h"
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
UNUSED static uint32 InterruptStatus = 0;

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

/*************************************************************************************************\
 ***  FUNCTION:
 ***      SchM_Enter_LinIf
 ***
 ***  DESCRIPTION:
 ***      Enter a module local exclusive area.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      uint8              Instance            
 ***      uint8              ExclusiveArea       
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
void SchM_Enter_LinIf(uint8 Instance, uint8 ExclusiveArea)
{
   switch (Instance) {
      case LINIF_INSTANCE_ID: {
         switch (ExclusiveArea) {
            default: {
               DS_RTOS_INT_SAVE_AND_DISABLE(InterruptStatus);
               break;
            }
         }
         break;
      }
   }
}

/*************************************************************************************************\
 ***  FUNCTION:
 ***      SchM_Exit_LinIf
 ***
 ***  DESCRIPTION:
 ***      Exit a module local exclusive area.
 ***
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 ***      uint8              Instance            
 ***      uint8              ExclusiveArea       
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\*************************************************************************************************/
void SchM_Exit_LinIf(uint8 Instance, uint8 ExclusiveArea)
{
   switch (Instance) {
      case LINIF_INSTANCE_ID: {
         switch (ExclusiveArea) {
            default: {
               DS_RTOS_INT_RESTORE(InterruptStatus);
               break;
            }
         }
         break;
      }
   }
}

/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/


#endif/*SCHM_LINIF_C */
/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
