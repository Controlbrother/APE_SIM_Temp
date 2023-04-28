#ifndef __CAMERA_H
#define __CAMERA_H

#include "camera_EQ4.h"


#include "PubIfFusionOFM_MDL_types.h"

//#include "Rte_type.h"

#include "object.h"

#define USE_EQ4
#define DEFAULT_INVALID_FLOAT ((float)0)
#define CHECK_FLOAT_VALID(x) (fabsf(x-DEFAULT_INVALID_FLOAT)>EPSILON)

extern CameraObjectFrameQueue camera_frame_queue;
extern unsigned char camera_frame_cnt;

void init_camera_object_container(void);
void add_camera_object_frame(const EQ4_OBJ_BUS* pack);
int get_latest_camera_object_frame(CameraObjectFrame** object_frame);
void get_camera_object_frames(ObjectFrameArray* object_frame_array);

#endif // !__CAMERA_H
