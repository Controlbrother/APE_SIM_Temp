/** !------------------------------------------------------------------------->
*
*  @file PduR_external.h
*
*  @creationDate 09 March 2022 12:20:14
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

/* File ID: 7d23c880-3f7e-4ad5-9128-e4838325e3c4 */
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

