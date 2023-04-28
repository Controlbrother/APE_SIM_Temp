#ifndef _ASSIGNMENT_H
#define _ASSIGNMENT_H

#include "matrix.h"
#include "assignment_type.h"
#include "fusion_config.h"
#include "track.h"


extern unsigned char visited_flags_[UCHAR_MAX];


void assign_by_camera_id(FusionTrackFrame *fusion_track_frame,
                         const CameraObjectFrame *camera_object_frame,
                         AssigmentArray *assigned_idxs,
                         UCharArray64 *unassigned_track_idxs,
                         UCharArray64 *unassigned_object_idxs);

void assign_by_radar_id(FusionTrackFrame *fusion_track_frame,
                        const RadarObjectFrame *radar_object_frame,
                        AssigmentArray *assigned_idxs,
                        UCharArray64 *unassigned_track_idxs,
                        UCharArray64 *unassigned_object_idxs);

void get_camera_unassignment(const FusionTrackFrame *fusion_track_frame,
                             const CameraObjectFrame *camera_object_frame,
                             AssigmentArray *global_assignment_idxs,
                             UCharPairArray64 *local_assignment_idxs,
                             UCharArray64 *unassigned_track_idxs,
                             UCharArray64 *unassigned_object_idxs);

void get_radar_unassignment(const FusionTrackFrame *fusion_track_frame,
                            const RadarObjectFrame *radar_object_frame,
                            AssigmentArray *global_assignment_idxs,
                            UCharPairArray64 *local_assignment_idxs,
                            UCharArray64 *unassigned_track_idxs,
                            UCharArray64 *unassigned_object_idxs);

void get_track_unassignment(const FusionTrackFrame* fusion_track_frame,
                            TrackAssigmentArray* global_assignment_idxs,
                            UCharPairArray64* local_assignment_idxs,
                            UCharArray64* unassigned_pure_camera_idxs,
                            UCharArray64* unassigned_pure_radar_idxs);

bool check_radar_id_assignment(FusionTrack *track, ERadarType radar_type,
                               const RadarObject *object);

bool check_camera_id_assignment(FusionTrack *track,
                                const CameraObject *object);

                                                      
#endif
