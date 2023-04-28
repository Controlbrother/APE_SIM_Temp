/** !------------------------------------------------------------------------->
*
*  @file Rte_generated.h
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Generated Rte configuration header file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/

/* File ID: 1eed77ac-554a-4672-80d5-485069661325 */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "../Com/Com_generated.h"
#include <Std_Types.h>

/* Signal ID, uint16 does not match with TLSR callback. */
typedef Com_SignalIdType Rte_SignalIdType;

#define RTE_NO_SUCH_SIGNAL 0x75

/*------------------------------------------------------------------------------------------------*\
  GENERATED RTE SIGNAL IDs 
  RTE Signal Ids are identical to COM SignalIds for performance reasons
\*------------------------------------------------------------------------------------------------*/

/* RTE Signal definitions for the RTE module. */
#define Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434 Com_X_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434
#define Rte_Inst_299_Checksum_IFC1_206869_119634_232434 Com_X_Inst_299_Checksum_IFC1_206869_119634_232434
#define Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434 Com_X_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434
#define Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434 Com_X_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434
#define Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434 Com_X_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434
#define Rte_Inst_299_IFCVibrationWarning_206873_119634_232434 Com_X_Inst_299_IFCVibrationWarning_206873_119634_232434
#define Rte_Inst_299_RollingCounter_IFC1_206874_119634_232434 Com_X_Inst_299_RollingCounter_IFC1_206874_119634_232434
#define Rte_Inst_299_Checksum_IFC2_206875_119634_232434 Com_X_Inst_299_Checksum_IFC2_206875_119634_232434
#define Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434 Com_X_Inst_299_IFCAngCmdReqValue_206876_119634_232434
#define Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434 Com_X_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434
#define Rte_Inst_299_RollingCounter_IFC2_206878_119634_232434 Com_X_Inst_299_RollingCounter_IFC2_206878_119634_232434

/* extern declaration of COM signal buffers */
extern uint8 Com_TX_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_sgn_val;
extern uint8 Com_TX_Inst_299_Checksum_IFC1_206869_119634_232434_sgn_val;
extern uint16 Com_TX_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_sgn_val;
extern uint16 Com_TX_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_sgn_val;
extern uint8 Com_TX_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_sgn_val;
extern uint8 Com_TX_Inst_299_IFCVibrationWarning_206873_119634_232434_sgn_val;
extern uint8 Com_TX_Inst_299_Checksum_IFC2_206875_119634_232434_sgn_val;
extern uint16 Com_TX_Inst_299_IFCAngCmdReqValue_206876_119634_232434_sgn_val;
extern uint16 Com_TX_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_sgn_val;


#define SCALE_IDENTICAL(TARGET_TYPE,TARGET,SOURCE_TYPE,SOURCE,ROUND_SUFFIX) double tmp_val = (*((SOURCE_TYPE*) SOURCE)); \
if (ROUND_SUFFIX && tmp_val > 0) *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val + 0.5); else if (ROUND_SUFFIX && tmp_val < 0)  *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val - 0.5); \
else *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) tmp_val;

#define SCALE_LINEAR(TARGET_TYPE,TARGET,SOURCE_TYPE,SOURCE,N0,N1,D0,ROUND_SUFFIX) double tmp_val = (((( *((SOURCE_TYPE*) SOURCE) ) * N1) + N0) / ((double) D0) ); \
if (ROUND_SUFFIX && tmp_val > 0) *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val + 0.5); else if (ROUND_SUFFIX && tmp_val < 0)  *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val - 0.5); \
else *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) tmp_val;

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetCodedValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new coded value, if the physical value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the physical signal did not change.
 *** 
 *** RETURNS:
 ***     uint8    Boolean flag which inidcates that a calculation was performed and the undelying 
 ***              PDU have to be updated.
 \**************************************************************************************************/
 uint8 Rte_SetCodedValue(Rte_SignalIdType SignalId, uint8 always);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetPhysicalValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new physical value, if the coded value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the coded signal did not change.
 ***                                      This behavior is used for initialization during startup
 *** 
\**************************************************************************************************/
void Rte_SetPhysicalValue(Rte_SignalIdType SignalId, uint8 always);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_WriteSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_WriteSignal(
    Rte_SignalIdType SignalId,
    const void * SignalDataPtr);


/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_ReadSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location
 ***     and performs signal conversion.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be read.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_ReadSignal(
        Rte_SignalIdType SignalId,
        void * SignalDataPtr);





#ifdef __cplusplus
}
#endif /* __cplusplus */ 


