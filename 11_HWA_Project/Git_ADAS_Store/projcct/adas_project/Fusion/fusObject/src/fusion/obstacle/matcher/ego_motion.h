#ifndef __EGO_MOTION_H_
#define __EGO_MOTION_H_

#include "vehicle_info_container.h"
#include "track.h"
#include "geometry.h"
#include "fusion_track_logger.h"

#define MOTION_CAL_TH (M_PI/180*0.05)			//1 degree/s *50ms or 0.0174 rad/s *50ms				//if this number is equals to (M_PI/180*0.05) error introduced

bool compensate_ego_motion(FusionTrack* track, float delta_t, float yaw_rate);


#endif
