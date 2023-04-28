 
/** <!------------------------------------------------------------------------->
*
*  @file Feature_external.h 
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief External Services for Feature
*
*  @author
*    Tobias Siebert
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/* File ID: ba72e6c1-e907-45e2-9e61-f1634cb2d8df */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Feature_Init(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. Depending on 
 ***     InitialValueUsage parameter, it is called either in OnInit or OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Feature_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_OnStart
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. It is called in 
 ***     OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Feature_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_MainFunction
 *** 
 *** DESCRIPTION:
 ***     Main Function of the Feature layer for further processing
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     sint64                      period         period of main function calls
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Feature_MainFunction(sint64 period);

#ifdef __cplusplus
}
#endif /* __cplusplus */

