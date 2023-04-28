/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Definition of Pdu CounterSignal Feature related behavior.
*    This is a generated configuration source file. Any changes will be lost,
*    during the next generation cycle
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

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "Feature_Types.h"
#include "Feature_generated.h"
#include "Feature_Com.h"
#include "StateManager_generated.h"
#include <float.h>
#include <limits.h>
#include <string.h>
#include "Com_generated.h"
#include "CounterSignal_generated.h"


/* Additional feature specific includes */

/*------------------------------------------------------------------------------------------------*\
  DEFINES AND VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/* The communication status of this FEATURE module. */
static uint8 Feature_Status = 0;

/* Definition of the Features that are available in the Feature module */

/* Structures to handle Counter Signal-Features */
static CounterSignal_Type Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434;
static CounterSignalState_Type Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434_state_last;
static CounterSignal_Type Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434;
static CounterSignalState_Type Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434_state_last;

/*------------------------------------------------------------------------------------------------*\
  FUNCTIONS
\*------------------------------------------------------------------------------------------------*/
#include "ScalingFunctions.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
#define COUNTERSIGNAL_OK                0x00    /* RX-CounterSignal value as expected     */
#define COUNTERSIGNAL_INITIAL           0x04    /* no RX-CounterSignal received           */
#define COUNTERSIGNAL_WRONGSEQUENCE     0x40    /* RX-CounterSignal value not as expected */

static void ComControllerStateChanged6(uint32 index, uint8 newState, uint8 oldState);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterDoStep
 ***
 *** DESCRIPTION:
 ***     Increment or decrement the connected CounterSignal of a ISignal
 ***     The counting direction depends on configuration parameter 'Increment'
 ***     'Increment' > 0: Counting Up, else Counting Down
 ***
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***    CounterSignal_Type *CounterSignal   Pointer to the structure of the CounterSignal
 ***     uint8              CallDirection   if = 0 (COUNTERSIGNAL_CALLED_FROM_UPPERLAYER or 
 ***                                        COUNTERSIGNAL_CALLED_FROM_IPDUM_JIT_UPDATE), 
 ***                                        the function was called to transfer PDU via CAN/ETH
 ***                                        with this, the CAN/ETH-ComControllers are to be examined
 ***    CounterSignal_Mode  Mode            TX_COUNTERSIGNAL: Check ComController, calculate and save the result
 ***                                        RX_COUNTERSIGNAL: just calculate
 *** RETURNS:
 ***    sint64              currentCounter  next calculated value of the counter
 ***
\**************************************************************************************************/
static sint64 CounterDoStep(CounterSignal_Type *CounterSignal, uint8 CallDirection, CounterSignal_Mode Mode)
{
    sint64 currentCounter;

    /* Use the initial value until the first valid calculation */
    if(CounterSignal->State.FirstUsed == TRUE)
    {
        currentCounter = CounterSignal->Config.InitialValue;
    }
    else
    {
        currentCounter = CounterSignal->State.ActualValue;
    }

    /* Check Environment for TX-path only */
    if(Mode == CHECK_COMCTRL)
    {
        if(CallDirection == COUNTERSIGNAL_CALLED_FROM_UPPERLAYER)
        {
            /* If calling from Upper Layer (e.g. CAN) check for at least one CAN-ComControllerEnable to be enabled */
            if((CounterSignal->Config.StateManagerFromUpper < 0) || ! StateManager_GetState((uint32)CounterSignal->Config.StateManagerFromUpper))
                return currentCounter;
        }
        else
        {
            /* If calling from Lower Layer (e.g. LIN) check that no CAN/ETH-ComControllerEnable is set */
            if((CounterSignal->Config.StateManagerFromUpper >= 0) && StateManager_GetState((uint32)CounterSignal->Config.StateManagerFromUpper))
                return currentCounter;

            /* If calling from Lower Layer (e.g. LIN) check for at least one LIN-ComControllerEnable to be enabled */
            if((CounterSignal->Config.StateManagerFromLower < 0) || ! StateManager_GetState((uint32)CounterSignal->Config.StateManagerFromLower))
                return currentCounter;
        }
    }

    /* Check for a valid value for StepLength to avoid an overrun ?*/
    if(CounterSignal->Config.StepLength <= 0)
        return currentCounter;

    /* Increment the stepcounter anyway */
    CounterSignal->State.ActualStepCounter++;

    /* Only calculate the next value after first run */
    if(CounterSignal->State.FirstUsed == FALSE)
    {
        /* Only calculate a new counter value if the CounterParameter StepLength is reached */
        if(CounterSignal->State.ActualStepCounter < CounterSignal->Config.StepLength)
            return currentCounter;

        /* Calculate the new value */
        {
        sint64 min = (sint64)CounterSignal->Config.Minimum;
        sint64 max = (sint64)CounterSignal->Config.Maximum;
        sint64 base, lowLimit;
        sint64 range;
        if (max > min) { range = max - min + 1; lowLimit = min; } else { range = min - max + 1; lowLimit = max; }
        base = (sint64)CounterSignal->State.ActualValue + (sint64)CounterSignal->Config.Increment - lowLimit;
        if (base < 0) { base = -(-base % range) + range; }
        currentCounter = (sint64)((base % range) + lowLimit);
        }
    }

    /* Set flag to use ActualValue from this time (not the initial value) */
    CounterSignal->State.FirstUsed = FALSE;
    /* Reset the StepCounter after calculate the next step for correct counting */
    CounterSignal->State.ActualStepCounter = 0;
    /* Save the calculated value in structure */
    CounterSignal->State.ActualValue = currentCounter;
    return currentCounter;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Count
 ***
 *** DESCRIPTION:
 ***     Decrement or Increment the connected CounterSignal of a ISignal
 ***
 *** PARAMETERS:
 ***     Type                   Name                    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint8                  CallDirection           if = 0 (COUNTERSIGNAL_CALLED_FROM_UPPERLAYER), the
 ***                                                    function was called to transfer PDU via CAN/ETH
 ***                                                    with this the CAN/ETH-ComControllers are to be examined
 ***
 ***     Feature_SignalIdType   SignalId                Feature ISignal ID
 ***
 *** RETURNS:
 ***    sint64                  value of Physical Datatype
 ***
\**************************************************************************************************/
sint64 CounterSignal_Count(uint8 CallDirection, Feature_SignalIdType SignalId, void *DestinationPtr)
{
    sint64 nextValue;
    POSSIBLE_UNREFERENCED_PARAMETER(CallDirection);
    POSSIBLE_UNREFERENCED_PARAMETER(DestinationPtr);

    switch (SignalId)
    {
        case Feature_IFC_FD1_RollingCounter_IFC2_206878_119634_232434_TX:
        {
            memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434_state_last, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State, sizeof(CounterSignalState_Type));
            /* Calculate the next Value of the Counter feature */
            nextValue = CounterDoStep(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434, CallDirection, CHECK_COMCTRL);
            /* Convert physical data to coded data and write the converted data into Destination */
            if(DestinationPtr != NULL_PTR)
            {
                // Physical to coded conversion
*((uint8*)DestinationPtr) = (uint8)ClampSignedToUnsigned(*((sint64*)&nextValue), 0, 15);
            }
            return nextValue;
        }
        case Feature_IFC_FD1_RollingCounter_IFC1_206874_119634_232434_TX:
        {
            memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434_state_last, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State, sizeof(CounterSignalState_Type));
            /* Calculate the next Value of the Counter feature */
            nextValue = CounterDoStep(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434, CallDirection, CHECK_COMCTRL);
            /* Convert physical data to coded data and write the converted data into Destination */
            if(DestinationPtr != NULL_PTR)
            {
                // Physical to coded conversion
*((uint8*)DestinationPtr) = (uint8)ClampSignedToUnsigned(*((sint64*)&nextValue), 0, 15);
            }
            return nextValue;
        }
    }
    return (sint64)0;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Revert
 ***
 *** DESCRIPTION:
 ***     Revert the CounterSignal after transmission failure
 ***
 *** PARAMETERS:
 ***     Type                   Name                    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_SignalIdType   SignalId                Feature ISignal ID
 ***
 *** RETURNS:
 ***    void
 ***
\**************************************************************************************************/
void CounterSignal_Revert(Feature_SignalIdType SignalId)
{
    switch (SignalId)
    {
        case Feature_IFC_FD1_RollingCounter_IFC2_206878_119634_232434_TX:
        {
            memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434_state_last, sizeof(CounterSignalState_Type));
            break;
        }
        case Feature_IFC_FD1_RollingCounter_IFC1_206874_119634_232434_TX:
        {
            memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434_state_last, sizeof(CounterSignalState_Type));
            break;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Analyze
 ***
 *** DESCRIPTION:
 ***     Evaluate a received CounterSignal value according to the expected CounterSignal value
 ***     Indicate the evaluation in the CounterSignal.status (0: datas equal; 64: datas different)
 ***
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_SignalIdType   SignalId        Feature ISignal
 ***     void *                 ptrCodedRxValue memory location of a received (coded) value of a configured CounterSignal.
 ***
 *** RETURNS:
 ***     Std_Return             E_OK            Counter Signal value was analysed and functionport was set
 ***                            E_NOT_OK        Incorrect SignalID
 \**************************************************************************************************/
Std_ReturnType CounterSignal_Analyze(Feature_SignalIdType SignalId, void *ptrCodedRxValue)
{
	POSSIBLE_UNREFERENCED_PARAMETER(ptrCodedRxValue);

    /* switch Signal Id */
    switch (SignalId)
    {
    }
    return E_NOT_OK;
}

 
/**************************************************************************************************\
*** FUNCTION:
***    
*** 
*** DESCRIPTION:
***     This function resets the CounterSignal for the corresponding PDU 
***     when at least one relevant com controller is re-enabled
***
*** PARAMETERS:
***     Type                 Name           Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     uint32    index    StateManager index
***     uint8     state    New state value
***
*** RETURNS:
***     void
 \**************************************************************************************************/
static void ComControllerStateChanged6(uint32 index, uint8 newState, uint8 oldState)
 {
    INTENDED_UNREFERENCED_PARAMETER(index);
    INTENDED_UNREFERENCED_PARAMETER(oldState);
    if(newState)
    {
      /* Counter Signal-Feature RollingCounter_IFC2 */
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.ActualValue = (sint64)(sint32)0L/*0x0*/;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.ActualStepCounter = 0;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.Status = COUNTERSIGNAL_INITIAL;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.FirstUsed = TRUE;  
    /* Counter Signal-Feature RollingCounter_IFC1 */
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.ActualValue = (sint64)(sint32)0L/*0x0*/;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.ActualStepCounter = 0;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.Status = COUNTERSIGNAL_INITIAL;
                Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.FirstUsed = TRUE;  
    }
 }
 


/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the CounterSignal Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_Init(void)
{
    {
            StateManager_RegisterCallback(6, ComControllerStateChanged6);
        /* Init static part of Counter Signal-Feature RollingCounter_IFC2 */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.InitialValue = (sint32)0L/*0x0*/;                  /* This is the previous counter value before the init value will be reached during next (first) counting */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.Maximum = (sint32)14L/*0xE*/;                        /* Maximum value for the counter */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.Minimum = (sint32)0L/*0x0*/;                        /* Minimum value for the counter */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.Increment = (sint32)1L/*0x1*/;                /* Amount of counter steps on a new calculation */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.StepLength = (sint32)1L/*0x1*/;                    /* Amount of sending before the counter value will be new calculated */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.StateManagerFromUpper = 6;    /* From Upper: CAN or ETH controller StateManager index */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.Config.StateManagerFromLower = -1;    /* From Lower: e.g. LIN controller StateManager index */
    }
    {
        /* Init static part of Counter Signal-Feature RollingCounter_IFC1 */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.InitialValue = (sint32)0L/*0x0*/;                  /* This is the previous counter value before the init value will be reached during next (first) counting */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.Maximum = (sint32)14L/*0xE*/;                        /* Maximum value for the counter */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.Minimum = (sint32)0L/*0x0*/;                        /* Minimum value for the counter */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.Increment = (sint32)1L/*0x1*/;                /* Amount of counter steps on a new calculation */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.StepLength = (sint32)1L/*0x1*/;                    /* Amount of sending before the counter value will be new calculated */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.StateManagerFromUpper = 6;    /* From Upper: CAN or ETH controller StateManager index */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.Config.StateManagerFromLower = -1;    /* From Lower: e.g. LIN controller StateManager index */
    }


    Feature_Status = 1;
}


/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. Depending on 
 ***     InitialValueUsage parameter, it is called either in OnInit or OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_VariableInitialize(void)
{
    if(!Feature_Status) return;

    {
        /* Init runtime part of Counter Signal-Feature RollingCounter_IFC2 */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.ActualValue = (sint64)(sint32)0L/*0x0*/;           /* Holds the actual calculated Counter value */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.ActualStepCounter = 0;                  /* Used to check if the necessary amount of steps (see StepLength) is reached for counting */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.Status = COUNTERSIGNAL_INITIAL;         /* Holds the actual evaluated status of the received CounterSignal-Value */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State.FirstUsed = TRUE;                       /* Indicator to use the initial- or the actual value for sending */
    }
    {
        /* Init runtime part of Counter Signal-Feature RollingCounter_IFC1 */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.ActualValue = (sint64)(sint32)0L/*0x0*/;           /* Holds the actual calculated Counter value */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.ActualStepCounter = 0;                  /* Used to check if the necessary amount of steps (see StepLength) is reached for counting */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.Status = COUNTERSIGNAL_INITIAL;         /* Holds the actual evaluated status of the received CounterSignal-Value */
        Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State.FirstUsed = TRUE;                       /* Indicator to use the initial- or the actual value for sending */
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_OnStart
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. It is called in 
 ***     OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_OnStart(void)
{
    if(!Feature_Status) return;

    {
        /* OnStart Counter Signal-Feature RollingCounter_IFC2 */
        memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434_state_last, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC2_206878_119634_232434.State, sizeof(CounterSignalState_Type));
    }
    {
        /* OnStart Counter Signal-Feature RollingCounter_IFC1 */
        memcpy(&Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434_state_last, &Feature_CounterSignal_TX_Feature_RollingCounter_IFC1_206874_119634_232434.State, sizeof(CounterSignalState_Type));
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_MainFunction
 *** 
 *** DESCRIPTION:
 ***     Main Function of the Feature layer for further cyclic processing. It is called from 
 ***     Com_MainFunction.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     sint64                      period         period of main function calls
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_MainFunction(void)
{
    if(!Feature_Status) return;

}
/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_SetValue
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be sent.
 ***     const void *                SetValuePtr    Reference to the SetValue to get the write data from.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SetValuePtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}
    
/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_SetValueWithReset
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be sent.
 ***     const void *                SetValuePtr    Reference to the SetValue to get the trigger value.
 ***     const void *                RewritePtr     Reference to the e.g. TA_ReplaceValue to clear the value.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SetValuePtr);
    POSSIBLE_UNREFERENCED_PARAMETER(RewritePtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_GetValue
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be read.
 ***     void *                      ValueArrayPtr  Reference to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(ValueArrayPtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}
