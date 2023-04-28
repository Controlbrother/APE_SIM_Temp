/** !------------------------------------------------------------------------->
*
*  @file Rte_generated.h
*
*  @creationDate 09 March 2022 12:20:14
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

/* File ID: 8ec1286f-bf19-4238-b040-763db1d71af4 */
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
#define Rte_Inst_1136_Sync_CRC_197911_119558_232436 Com_X_Inst_1136_Sync_CRC_197911_119558_232436
#define Rte_Inst_1136_Sync_OVS_197912_119558_232436 Com_X_Inst_1136_Sync_OVS_197912_119558_232436
#define Rte_Inst_1136_Sync_Resd_197913_119558_232436 Com_X_Inst_1136_Sync_Resd_197913_119558_232436
#define Rte_Inst_1136_Sync_Counter_197914_119558_232436 Com_X_Inst_1136_Sync_Counter_197914_119558_232436
#define Rte_Inst_1136_Sync_SGW_197915_119558_232436 Com_X_Inst_1136_Sync_SGW_197915_119558_232436
#define Rte_Inst_1136_Sync_SyncTime_197916_119558_232436 Com_X_Inst_1136_Sync_SyncTime_197916_119558_232436
#define Rte_Inst_1136_Sync_TimeDomain_197917_119558_232436 Com_X_Inst_1136_Sync_TimeDomain_197917_119558_232436
#define Rte_Inst_1136_Sync_Type_197918_119558_232436 Com_X_Inst_1136_Sync_Type_197918_119558_232436

/* extern declaration of COM signal buffers */
extern uint8 Com_TX_Inst_1136_Sync_CRC_197911_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_OVS_197912_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_Resd_197913_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_Counter_197914_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_SGW_197915_119558_232436_sgn_val;
extern uint32 Com_TX_Inst_1136_Sync_SyncTime_197916_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_TimeDomain_197917_119558_232436_sgn_val;
extern uint8 Com_TX_Inst_1136_Sync_Type_197918_119558_232436_sgn_val;


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


