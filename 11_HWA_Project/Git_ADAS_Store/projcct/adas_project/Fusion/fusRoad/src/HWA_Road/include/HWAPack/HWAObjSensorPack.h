
#ifndef _HWA_OBJSENSORPACK_H_
#define _HWA_OBJSENSORPACK_H_
#include "aaMacro.h"
#include "HWA_Cali.h"


typedef struct  _tag_HWA_ObjectInput_st
{
	AInt32U   timestamp;
	AInt8U    Object_ID;
	AFloat    ObjExistProb;
	AFloat    ObjObstacleProb;
	AInt8U    ObjMoveclass;
	AInt8U    ObjMoveStatus;
	AInt8U    ObjMoveOrientation;
	AInt8U    ObjTestStatus;
	AInt8U    ObjAge;
	AInt8U    ClassificationProb;
	AInt8U    Classification;
	AFloat    Obj_Dist_X;
	AFloat    Obj_Dist_Y;
	AFloat    Obj_Dist_XStd;
	AFloat    Obj_Dist_YStd;
	AFloat    Absolute_Velocity_Obj;
	AFloat    Absolute_Velocity_Obj_std;
	AFloat    Absolute_Velocity_X;
	AFloat    Absolute_Velocity_Y;
	AFloat    Absolute_Velocity_XStd;
	AFloat    Absolute_Velocity_YStd;
	AFloat    Rel_Velocity_X;
	AFloat    Rel_Velocity_Y;
	AFloat    Rel_Velocity_XStd;
	AFloat    Rel_Velocity_YStd;
	AFloat    Obj_Abs_Acc;
	AFloat    Obj_Abs_Acc_std;
	AFloat    Obj_AbsAcc_X;
	AFloat    Obj_AbsAcc_Y;
	AFloat    Obj_AbsAcc_XStd;
	AFloat    Obj_AbsAcc_YStd;
	AFloat    Obj_RelAcc_X;
	AFloat    Obj_RelAcc_Y;
	AFloat    Obj_RelAcc_XStd;
	AFloat    Obj_RelAcc_YStd;
	AFloat    Object_Angle;
	AFloat    Object_Angle_std;
	AFloat    Object_Angle_Velocity;
	AFloat    Object_Angle_Velocity_std;
	AFloat    Box_Size_X;
	AFloat    Box_Size_X_std;
	AFloat    Box_Size_Y;
	AFloat    Box_Size_Y_std;
	AFloat    Box_Size_Z;
	AFloat    Box_Size_Z_std;
}HWA_ObjectInput_st;
typedef struct  _tag_HWA_SensorInput_st
{
	AInt8U HWA_ValidNumber;
	AInt HWA_SensorType;
	ABool  SensorStatus;
	AInt32U timestamp;
	HWA_ObjectInput_st *objects;
/*	HWA_ObjectInput_st objects[P_RFM_MRR_OBJ_NUM];*/
}HWA_SensorInput_st;

typedef struct _tag_HWAObjectPack
{
	HWA_SensorInput_st  sensors[6];
} HWAObjectPack;
#endif /* _HWA_OBJSENSORPACK_H_ */