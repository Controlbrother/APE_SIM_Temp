#ifndef __TRACK_H
#define __TRACK_H

#include "track_type.h"

ERadarType sensor_type2radar_type(ESensorType sensor_type);
ESensorType radar_type2sensor_type(ERadarType rdar_type);

void GetTrackAllProperties(FusionTrack* pTrack);

int CompareTypeCameraToTrack(CameraObjType c_type, EObjectType t_type);
int CompareTypeRadarToTrack(CameraObjType r_type, EObjectType t_type);
inline int CompareTypeTrackToTrack(EObjectType t_type1, EObjectType t_type2);
int CompareMoveStatusCameraToTrack(CameraObjMoveStatus c_move, EMoveStatus t_move);
int CompareMoveStatusRadarToTrack(MRR_ObjMoveStatus r_move, EMoveStatus t_move);
int CompareMoveStatusTrackToTrack(EMoveStatus t_move1, EMoveStatus t_move2);

EConfidence CompareTwoTypes(FusionTrack* pTrack, CameraObjType c_type, MRR_ObjType r_type);
EConfidence GetTypeFromRadar(FusionTrack* pTrack, MRR_ObjType r_type);

#endif