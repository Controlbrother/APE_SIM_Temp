#include "camera_EQ4.h"

#define MIN_X_CAR 3.
#define MIN_X_TRUCK 6.
#define MIN_X_UNCERTAIN_VCL 2.
#define MIN_X_MOTOCYCLE 2.
#define MIN_X_BICYCLE 2.



bool check_point_in_camera_bbox(Point2F* rel_pos, CameraObject* object)
{
	return false;
}


static float MinObjectSizeX(CameraObject* object)
{
	float minSizeX = object->size3d.length;
	if (object->type == C_TYPE_CAR)
		minSizeX = MIN_X_CAR;
	else if (object->type == C_TYPE_TRUCK)
		minSizeX = MIN_X_TRUCK;
	else if (object->type == C_TYPE_UNCERTAIN_VCL)
		minSizeX = MIN_X_UNCERTAIN_VCL;
	else if (object->type == C_TYPE_MOTORCYCLE)
		minSizeX = MIN_X_MOTOCYCLE;
	else if (object->type == C_TYPE_BICYCLE)
		minSizeX = MIN_X_BICYCLE;
	return  minSizeX;
}

int AdjustCameraObjectSize(CameraObject* object)
{
	if (object->type == C_TYPE_BICYCLE || object->type == C_TYPE_CAR || object->type == C_TYPE_MOTORCYCLE ||
		object->type == C_TYPE_TRUCK || object->type == C_TYPE_UNCERTAIN_VCL)
	{
		float minObjSizeX = MinObjectSizeX(object);
		if (object->size3d.length < minObjSizeX)
		{
			object->size3d.length = minObjSizeX;
			return -1;
		}
		else
			return 0;
	}
	else
		return 0;
}

