/** !------------------------------------------------------------------------->
*
*  @file PduR_external.h
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief PduR external API declarations.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/

/* File ID: a2599be9-e746-4620-90e5-801023b87180 */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

extern void* PduR_Config;

/**************************************************************************************************\
 *** FUNCTION:
 ***     PduR_Init
 *** 
 *** DESCRIPTION:
 ***     Initializes internal and external interfaces and variables of the AUTOSAR PduR layer for
 ***     further processing.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     const PduR_PBConfigType *  config  Pointer to the PduR configuration data.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/

extern void PduR_Init(const void* config);

extern void PduR_VariableInitialize(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */ 
