#ifndef __FUSION_MATCHER_H_
#define __FUSION_MATCHER_H_

#include "fusion_track.h"
#include "assignment.h"

void match_camera_frame(FusionTrackFrame *track_frame,const CameraObjectFrame *object_frame,AssigmentArray *assigned_idxs,
                        UCharArray64 *unassigned_track_idxs,UCharArray64 *unassigned_object_idxs);

void match_radar_frame(FusionTrackFrame *track_frame,const RadarObjectFrame *object_frame,AssigmentArray *assigned_idxs,
                       UCharArray64 *unassigned_track_idxs,UCharArray64 *unassigned_object_idxs);

unsigned char fuse_tracks(FusionTrackFrame* trackFrame, TrackAssigmentArray* assigned_idxs, 
                  UCharArray64* pure_camera_track_idxs,UCharArray64* pure_radar_track_idxs);


#endif