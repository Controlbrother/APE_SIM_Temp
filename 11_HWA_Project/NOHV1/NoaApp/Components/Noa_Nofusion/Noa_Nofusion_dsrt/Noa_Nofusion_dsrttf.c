/*****************************************************************************

   Include file Noa_Nofusion_dsrttf.c:

   Definition of task functions.

   Wed Mar  9 12:18:59 2022

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header files */
#include "Noa_Nofusion_dsrttf.h"
#include "Noa_Nofusion.h"
#include "Noa_Nofusion_private.h"

/* Task function for TID0 */
void Noa_Nofusion_DSRTMdlOutputs0()
{
  /* Call to Simulink model output function */
  Noa_Nofusion_output();
}

void Noa_Nofusion_DSRTMdlUpdate0()
{
  /* Call to Simulink model upadte function */
  Noa_Nofusion_update();
}
