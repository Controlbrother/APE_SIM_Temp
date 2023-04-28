/** <!------------------------------------------------------------------------->
*
*  @file SchM_SecOC.c
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
*  @version
*
*<!-------------------------------------------------------------------------->*/

#ifndef SCHM_SECOC_C
#define SCHM_SECOC_C

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "SchM_SecOC.h"
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
 ***      SchM_Enter_SecOC
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
void SchM_Enter_SecOC(uint8 Instance, uint8 ExclusiveArea)
{
   switch (Instance) {
      case SECOC_INSTANCE: {
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
 ***      SchM_Exit_SecOC
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
void SchM_Exit_SecOC(uint8 Instance, uint8 ExclusiveArea)
{
   switch (Instance) {
      case SECOC_INSTANCE: {
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


#endif/*SCHM_SECOC_C */
/*----------------------------------------------------------------------------*\
 END OF FILE
\*----------------------------------------------------------------------------*/
