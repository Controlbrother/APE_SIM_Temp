/** !------------------------------------------------------------------------->
*
*  @file Rte_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Generated Rte configuration source file.
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

#include "Rte_generated.h"
#include <string.h>
#include <float.h>
#include <limits.h>
#include "StateManager_generated.h"
#include "ScalingFunctions.h"

/* TX Signal Inst_299_IFCFuncAngCmdReqFlag */
static uint8 Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys_last = (uint8)0;
static uint8* Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys = (uint8*)&Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys_last;
void BM_Write_RtParameterRef_12128(uint8 *ioValue) {Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_Checksum_IFC1 */
static uint8 Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys_last = (uint8)0;
static uint8* Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys = (uint8*)&Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys_last;
void BM_Write_RtParameterRef_12129(uint8 *ioValue) {Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCTrqOvlCmdProtnValue */
static uint16 Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys_last = (uint16)7169/*0x1C01*/;
static uint16* Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys = (uint16*)&Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys_last;
void BM_Write_RtParameterRef_12244(uint16 *ioValue) {Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCTrqOvlCmdReqValue */
static float64 Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys_last = (float64)0.0;
static float64* Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys = (float64*)&Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys_last;
void BM_Write_RtParameterRef_13052(float64 *ioValue) {Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCFuncTrqCmdReqFlag */
static uint8 Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys_last = (uint8)0;
static uint8* Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys = (uint8*)&Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys_last;
void BM_Write_RtParameterRef_12130(uint8 *ioValue) {Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCVibrationWarning */
static uint8 Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys_last = (uint8)0;
static uint8* Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys = (uint8*)&Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys_last;
void BM_Write_RtParameterRef_12131(uint8 *ioValue) {Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_Checksum_IFC2 */
static uint8 Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys_last = (uint8)0;
static uint8* Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys = (uint8*)&Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys_last;
void BM_Write_RtParameterRef_12132(uint8 *ioValue) {Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCAngCmdReqValue */
static float64 Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys_last = (float64)0.0;
static float64* Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys = (float64*)&Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys_last;
void BM_Write_RtParameterRef_13053(float64 *ioValue) {Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys = ioValue;}

/* TX Signal Inst_299_IFCAngCmdReqProtnValue */
static uint16 Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys_last = (uint16)7169/*0x1C01*/;
static uint16* Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys = (uint16*)&Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys_last;
void BM_Write_RtParameterRef_12245(uint16 *ioValue) {Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys = ioValue;}



/**************************************************************************************************\
 *** FUNCTION:
 ***    Rte_COMCbk_RxPDU
 *** 
 *** DESCRIPTION:
 ***     Callback for the COM Module to indicate the reception of a PDU.
 ***     This is a non AUTOSAR standard callback function and is used to optimze the
 ***     trace access to physical signal values. Using the callback the scaling algorithm 
 ***     only needs to be executed whenever a new signal value is received, removing the necessity to
 ***     poll COM signal values for trace access.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType       ComRxPduId       ID of the received pdu.
 ***                                     
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
static UNUSED void Rte_COMCbk_RxPDU(PduIdType ComRxPduId)
{
    switch (ComRxPduId)
    {
    }
}

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

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
void Rte_SetPhysicalValue(Rte_SignalIdType SignalId, uint8 always)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(always);
    switch (SignalId) {
            }

}

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
uint8 Rte_SetCodedValue(Rte_SignalIdType SignalId, uint8 always)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(always);
    switch (SignalId) {
        case Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434 :
             {
                uint8 tempVar = *Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys;
                if (Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys_last != tempVar || always) {
                    uint8 tempVarSat = tempVar;
                    *((uint8*)&Com_TX_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_sgn_val) = (uint8)ClampUnsigned(*((uint8*)(void*) &tempVarSat), 0, 7);
                    Rte_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_Checksum_IFC1_206869_119634_232434 :
             {
                uint8 tempVar = *Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys;
                if (Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys_last != tempVar || always) {
                    uint8 tempVarSat = tempVar;
                    *((uint8*)&Com_TX_Inst_299_Checksum_IFC1_206869_119634_232434_sgn_val) = (uint8)*((uint8*)(void*) &tempVarSat);
                    Rte_Inst_299_Checksum_IFC1_206869_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434 :
             {
                uint16 tempVar = *Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys;
                if (Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys_last != tempVar || always) {
                    uint16 tempVarSat = tempVar;
                    *((uint16*)&Com_TX_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_sgn_val) = (uint16)ClampUnsigned(*((uint16*)(void*) &tempVarSat), 0, 16383);
                    Rte_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434 :
             {
                float64 tempVar = *Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys;
                if (memcmp(&Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys_last, &tempVar, sizeof(float64)) != 0 || always) {
                    float64 tempVarSat = tempVar;
                    *((uint16*)&Com_TX_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_sgn_val) = (uint16)ClampFloat(Scale_Linear_From_float64((void*) &tempVarSat, 10.23, 1, 0.01), (double)0, (double)2047);
                    Rte_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434 :
             {
                uint8 tempVar = *Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys;
                if (Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys_last != tempVar || always) {
                    uint8 tempVarSat = tempVar;
                    *((uint8*)&Com_TX_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_sgn_val) = (uint8)ClampUnsigned(*((uint8*)(void*) &tempVarSat), 0, 7);
                    Rte_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCVibrationWarning_206873_119634_232434 :
             {
                uint8 tempVar = *Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys;
                if (Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys_last != tempVar || always) {
                    uint8 tempVarSat = tempVar;
                    *((uint8*)&Com_TX_Inst_299_IFCVibrationWarning_206873_119634_232434_sgn_val) = (uint8)ClampUnsigned(*((uint8*)(void*) &tempVarSat), 0, 3);
                    Rte_Inst_299_IFCVibrationWarning_206873_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_RollingCounter_IFC1_206874_119634_232434 :
             return 1;
        case Rte_Inst_299_Checksum_IFC2_206875_119634_232434 :
             {
                uint8 tempVar = *Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys;
                if (Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys_last != tempVar || always) {
                    uint8 tempVarSat = tempVar;
                    *((uint8*)&Com_TX_Inst_299_Checksum_IFC2_206875_119634_232434_sgn_val) = (uint8)*((uint8*)(void*) &tempVarSat);
                    Rte_Inst_299_Checksum_IFC2_206875_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434 :
             {
                float64 tempVar = *Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys;
                if (memcmp(&Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys_last, &tempVar, sizeof(float64)) != 0 || always) {
                    float64 tempVarSat = tempVar;
                    *((uint16*)&Com_TX_Inst_299_IFCAngCmdReqValue_206876_119634_232434_sgn_val) = (uint16)ClampFloat(Scale_Linear_From_float64((void*) &tempVarSat, 780, 1, 0.1), (double)0, (double)16383);
                    Rte_Inst_299_IFCAngCmdReqValue_206876_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434 :
             {
                uint16 tempVar = *Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys;
                if (Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys_last != tempVar || always) {
                    uint16 tempVarSat = tempVar;
                    *((uint16*)&Com_TX_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_sgn_val) = (uint16)ClampUnsigned(*((uint16*)(void*) &tempVarSat), 0, 16383);
                    Rte_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434_phys_last = tempVar;
                    return 1;
                }
             }
             break;
        case Rte_Inst_299_RollingCounter_IFC2_206878_119634_232434 :
             return 1;
    }

	return 0;
}

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
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_WriteSignal(Rte_SignalIdType SignalId, const void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    return RTE_NO_SUCH_SIGNAL;

}

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
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_ReadSignal(Rte_SignalIdType SignalId, void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);


     return RTE_NO_SUCH_SIGNAL;
}

