#ifndef _HWA_EGO_TIME_PACK_H_
#define _HWA_EGO_TIME_PACK_H_
#include "aaMacro.h"
typedef struct _tag_HWATimePack {
	AInt64U  hwacurTime;			/*ms*/	            
} HWATimePack;
typedef struct _tag_HWAEgoPack {

	AFloat	Acc_x;							
	AFloat	Vel;													
	AFloat	RAcc_x;							
	AFloat	CANAcc_x;						
	AFloat	Acc_rate;						
	AFloat	Yawrate;						
	AFloat	Acc_y;							
	AFloat	SideSlipAngle;					
	AFloat	Road_curve;					//curvature		
	AFloat	SteerAngleOffset_deg;			
} HWAEgoPack;
#endif