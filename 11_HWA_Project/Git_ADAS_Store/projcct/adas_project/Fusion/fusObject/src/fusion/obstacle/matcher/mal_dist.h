#ifndef __MAL_DIST_H_
#define __MAL_DIST_H_

#include "common.h"
#include "matrix.h"
/*add Mahalanobis distance*/
#include "matrix_operation.h"
#include "munkres_optimizer.h"
#include "track.h"
#include "fusion_track_filter.h"
#include "camera.h"
#include <math.h>
#include <assert.h>
/*************************/

#define INVALID_DIST (9999.)


/**/
float track_camera_mal_dist(const FusionTrack *track, const CameraObject* object);
//float radar_radar_mal_dist(const RadarObject *old_object, const RadarObject* new_object);                            
float track_radar_mal_dist(const FusionTrack* track, ERadarType radar_type, const RadarObject* object);
float track_track_mal_dist(const FusionTrack* track, const FusionTrack* track2);
/**/



#endif

