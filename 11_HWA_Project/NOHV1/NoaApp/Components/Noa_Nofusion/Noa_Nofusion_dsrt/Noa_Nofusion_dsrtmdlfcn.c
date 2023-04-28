/**************************************************************************** *
 * FILE :
 *  Noa_Nofusion_dsrtmdlfcn.c
 *
 *
 *
 * Copyright 2017, dSPACE GmbH. All rights reserved
 *
   \****************************************************************************/

#ifndef TEMP_DSRT_RTI
#include <rtmodel.h>
#include "rtwtypes.h"
#include "Noa_Nofusion_dsrtmdlfcn.h"
#include <stdio.h>

int32_T DSRTStopSimulation = 0;
EXTERN_C_DECL void Noa_Nofusion_initialize();
EXTERN_C_DECL void Noa_Nofusion_terminate();

/* Initialization of model */
void Noa_Nofusion_DSRTInitMdl(void)
{
  /* Initialize model */
  Noa_Nofusion_initialize();

  /* Initialize structs generated for untyped bus signals, and for bus element ports that pass buses */
#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2) && defined(DATA_PORT_MUST_INITIALIZE_BUSSTRUCTS)

  InitializeBusStructs();

#endif

  /* Check for initialization errors */
  Noa_Nofusion_DSRTCheckForErrorStatus();

  /* Reinit Stop Simulation flag*/
  DSRTStopSimulation = 0;
}

/* Model start function */
void Noa_Nofusion_DSRTStartMdl(void)
{
  uint8_T lastApplStateStopped;
  Noa_Nofusion_APLastApplStateStopped(&lastApplStateStopped);
  if (lastApplStateStopped) {
    /* Reinit main simulation structure */
    Noa_Nofusion_DSRTInitMdl();
  }
}

/* Model stop function */
void Noa_Nofusion_DSRTStopMdl(void)
{
  /* Call terminate function */
  Noa_Nofusion_terminate();

  /* Check for model error status */
  Noa_Nofusion_DSRTCheckForErrorStatus();
}

/* Check for model error status */
void Noa_Nofusion_DSRTCheckForErrorStatus()
{
  const char_T* errorStatus = rtmGetErrorStatus(Noa_Nofusion_M);
  if (errorStatus != NULL && strcmp(errorStatus, "Simulation finished") == 0) {
    /* The RTM errorStatus field has been set */
    Noa_Nofusion_APTerminateSimulation();
    Noa_Nofusion_APPrintMessage("Model 'Noa_Nofusion' error status:");
    Noa_Nofusion_APPrintMessage(errorStatus);
  }
}

/* Check for simulation stop conditions */
void Noa_Nofusion_DSRTCheckForSimulationStopCondition(void)
{
  const char_T* errorStatus = rtmGetErrorStatus(Noa_Nofusion_M);
  if (errorStatus != NULL) {
    if (DSRTStopSimulation != 1) {
      /* The RTM errorStatus field was set */
      Noa_Nofusion_APTerminateSimulation();
      Noa_Nofusion_APPrintMessage("Model 'Noa_Nofusion' error status:");
      Noa_Nofusion_APPrintMessage(errorStatus);
      DSRTStopSimulation = 1;
    }
  } else if (rtmGetStopRequested(Noa_Nofusion_M)) {
    if (DSRTStopSimulation != 1) {
      Noa_Nofusion_APStopSimulation();
      Noa_Nofusion_APPrintMessage(
        "Model 'Noa_Nofusion': Executed a Simulink Stop Simulation block or request.");
      DSRTStopSimulation = 1;
    }
  }
}

#endif
