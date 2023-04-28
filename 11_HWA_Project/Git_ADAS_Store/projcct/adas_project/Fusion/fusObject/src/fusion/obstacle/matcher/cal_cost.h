#ifndef _CAL_COST_H
#define _CAL_COST_H

#include "matrix.h"
#include "common.h"
#include "track.h"

void calc_cost_matrix_by_camera(UCharArray64 *unassigned_track_idxs, const FusionTrackFrame *tracks,
                                UCharArray64 *unassigned_object_idxs, const CameraObjectFrame *objects);

void calc_cost_matrix_by_radar(UCharArray64 *unassigned_track_idxs, const FusionTrackFrame *tracks,
                               UCharArray64 *unassigned_object_idxs, const RadarObjectFrame *objects);

void calc_cost_matrix_by_track(UCharArray64* pure_camera_track_idxs, UCharArray64* pure_radar_track_idxs, const FusionTrackFrame* tracks);

float cost_of_track_to_camera(const FusionTrack *track, const CameraObject *object);
float cost_of_track_to_radar(const FusionTrack *track, ERadarType radar_type, const RadarObject *object);
float cost_of_track_to_track(const FusionTrack* track, const FusionTrack* track2);


#endif
