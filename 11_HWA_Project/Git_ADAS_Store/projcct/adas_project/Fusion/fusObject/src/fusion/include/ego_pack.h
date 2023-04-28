#ifndef __EGO_PACK_H
#define __EGO_PACK_H

#include "rtwtypes.h"

typedef struct {
    real32_T  axvRefMs2;				/*ax*/
    real32_T  vxvRefMs;				    /*vx*/
    real32_T  axvRoadSlopeMs2;          /*road ax*/
    real32_T  axRefMs2;				    /*ax   add  CAN*/
    real32_T  axRefDt;				    /*ax  changeV*/
    real32_T  psiDtOpt;				    /* hengbai angle  V*/
    real32_T  ayvRefMs2;				/*ay*/
    real32_T  alpSideSlipAngle;		    /* cehua   angle*/
    real32_T  kapTraj;				    /*road   qulv*/
    real32_T  SteerAngleOffset_deg;     /*Steering wheel Angle piancha */
}EgoPack;

#endif
