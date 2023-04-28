/*! \file object_container.h */
#include "track.h"
#include "vehicle_info_container.h"
#include "vehicle_dynamic.h"
#include "fusion_config.h"

const Size3D obstacle_car ={ .length = 3.0f, .width = 1.5f, .height = 1.0f };
const Size3D obstacle_truck = { .length = 6.0f, .width = 2.0f, .height = 1.5f };
const Size3D obstacle_motorbike = { .length = 1.0f, .width = 0.2f, .height = 0.3f };
const Size3D obstacle_bicycle = { .length = 1.0f, .width = 0.1f, .height = 0.3f };
const Size3D obstacle_pedestrian = { .length = 0.2f, .width = 0.2f, .height = 0.5f };
const Size3D obstacle_uncertain_vcl = { .length = 1.0f, .width = 0.5f, .height = 0.5f };
const Size3D obstacle_unknown = { .length = 0.2f, .width = 0.2f, .height = 0.2f };

/*!
change sensor_type to radar_type
\param sensor_type 
\return radar_type
*/
ERadarType sensor_type2radar_type(ESensorType sensor_type)
{
	return (ERadarType)(sensor_type - 1);
}

/*!
change radar_type to sensor_type
\param radar_type
\return sensor_type
*/
ESensorType radar_type2sensor_type(ERadarType rdar_type)
{
	return (ESensorType)(rdar_type + 1);
}

/*!
compare two types report of camera sensor and radar sensor, and return the type of judgement and confidence
 - CONFIDENCE_99: camera object valid and radarcamera_type and radar_type is the same
 - CONFIDENCE_90: camera_type and radar_type is different, The output is based on camera_type
\param pTrack pointer to the track
\param c_type camera type reported
\param r_type radar type reported
\return confidence
*/
EConfidence CompareTwoTypes(FusionTrack* pTrack, CameraObjType c_type, MRR_ObjType r_type)
{
	EConfidence confidence;
	if (c_type == C_TYPE_TRUCK)
	{
		pTrack->type = OBJECT_TYPE_TRUCK;
		if (r_type == MRR_TYPE_TRUCK) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_CAR)
	{
		pTrack->type = OBJECT_TYPE_CAR;
		if (r_type == MRR_TYPE_CAR) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_MOTORCYCLE)
	{
		pTrack->type = OBJECT_TYPE_MOTORBIKE;
		if (r_type == MRR_TYPE_BICYCLE) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_BICYCLE)
	{
		pTrack->type = OBJECT_TYPE_BICYCLE;
		if (r_type == MRR_TYPE_BICYCLE) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_PEDESTRIAN)
	{
		pTrack->type = OBJECT_TYPE_PEDESTRIAN;
		if (r_type == MRR_TYPE_PEDESTRIAN) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_UNKNOWN)
	{
		pTrack->type = OBJECT_TYPE_UNKNOWN;
		if (r_type == MRR_TYPE_UNKNOWN) confidence = CONFIDENCE_99;
		else confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_ANIMAL)
	{
		pTrack->type = OBJECT_TYPE_ANIMAL;
		confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_GENERAL)
	{
		pTrack->type = OBJECT_TYPE_GENERAL;
		confidence = CONFIDENCE_90;
	}
	else if (c_type == C_TYPE_UNCERTAIN_VCL)
	{
		pTrack->type = OBJECT_TYPE_UNCERTAIN_VCL;
		confidence = CONFIDENCE_90;
	}
	else
	{
		pTrack->type = OBJECT_TYPE_UNKNOWN;
		confidence = CONFIDENCE_90;
	}
	return confidence;
}

/*!
get type and confidence from camera type if this track has no radar sensors measurement.
 - CONFIDENCE_80: ONLY camera_type is valid
\param pTrack pointer to the track
\param c_type camera type reported
\return confidence
 */
static EConfidence GetTypeFromCamera(FusionTrack* pTrack, CameraObjType c_type)
{
	if (c_type == C_TYPE_TRUCK) pTrack->type = OBJECT_TYPE_TRUCK;
	else if (c_type == C_TYPE_CAR) pTrack->type = OBJECT_TYPE_CAR;
	else if (c_type == C_TYPE_MOTORCYCLE) pTrack->type = OBJECT_TYPE_MOTORBIKE;
	else if (c_type == C_TYPE_BICYCLE) pTrack->type = OBJECT_TYPE_BICYCLE;
	else if (c_type == C_TYPE_PEDESTRIAN) pTrack->type = OBJECT_TYPE_PEDESTRIAN;
	else if (c_type == C_TYPE_ANIMAL) pTrack->type = OBJECT_TYPE_ANIMAL;
	else if (c_type == C_TYPE_GENERAL) pTrack->type = OBJECT_TYPE_GENERAL;
	else if (c_type == C_TYPE_UNCERTAIN_VCL) pTrack->type = OBJECT_TYPE_UNCERTAIN_VCL;
	else pTrack->type = OBJECT_TYPE_UNKNOWN;
	return CONFIDENCE_80;
}
/*!
* get type and confidence from radar type if this track has no camera sensors measurement.
 - CONFIDENCE_60 : ONLY radar_type
\param pTrack pointer to the track
\param r_type radar type reported
\return confidence
*/
EConfidence GetTypeFromRadar(FusionTrack* pTrack, MRR_ObjType r_type)
{
	if (r_type == MRR_TYPE_TRUCK) pTrack->type = OBJECT_TYPE_TRUCK;
	else if (r_type == MRR_TYPE_CAR) pTrack->type = OBJECT_TYPE_CAR;
	else if (r_type == MRR_TYPE_BICYCLE) pTrack->type = OBJECT_TYPE_BICYCLE;
	else if (r_type == MRR_TYPE_PEDESTRIAN) pTrack->type = OBJECT_TYPE_PEDESTRIAN;
	else pTrack->type = OBJECT_TYPE_UNKNOWN;
	return CONFIDENCE_60;
}

/*!
* get type and confidence from track's sensors measurement.
 - corner radar and rsds radar doesn't report type of object.
\param pTrack pointer to the track
\return confidence from CONFIDENCE_99 to  CONFIDENCE_20
*/
EConfidence GetTrackType(FusionTrack* pTrack)
{
	EConfidence confidence = CONFIDENCE_10;
	if(pTrack->camera_object != NULL && pTrack->radar_object[RADAR_FRONT] != NULL)
	{
		confidence = CompareTwoTypes(pTrack, pTrack->camera_object->type, pTrack->radar_object[RADAR_FRONT]->type);
	}
	else if (pTrack->camera_object != NULL && pTrack->radar_object[RADAR_FRONT] == NULL)
	{
		confidence = GetTypeFromCamera(pTrack, pTrack->camera_object->type);
	}
	else if (pTrack->camera_object == NULL && pTrack->radar_object[RADAR_FRONT] != NULL)
	{
		confidence = GetTypeFromRadar(pTrack, pTrack->radar_object[RADAR_FRONT]->type);
	}
	else 
	{
		confidence = CONFIDENCE_20;
	}
	for (int i = (int)RADAR_FL; i < (int)RADAR_CNT; i++)
	{
		if (pTrack->radar_object[i] != NULL)
			confidence++;
	}
	return confidence;
}
/*!
calculate track object' move_status by track object' motion data
- use track object' motion data and vehicle data calculate track object'absolute velocity 
- judge the sum of  transverse and longitudinal track object' absolute velocity is greater than the 5 times  threshold value 
- yes the track object' move status is  moving  ;
- no judge the sum of  transverse and longitudinal track object' absolute velocity is greater than the  threshold value
- yes the track object' move status is  moving slowly  ;
- no  the track object' move status is  stand ;
\param a pointer to a track object
\return ECalculateMoveStatus(move status by calculate)
*/
ECalculateMoveStatus calculate_move_status(const FusionTrack* track) 
{
	float sum_speed = fabsf(track->abs_vel.x) + fabsf(track->abs_vel.y);
	float sum_distance = fabsf(track->rel_pos.x) + fabsf(track->rel_pos.y);
	if (sum_speed > ((1 + (sum_distance) * 0.02) * 5 * P_OFM_STOP_SPEED_THRESHOLD)) {
		return CALCULATE_MOVING;
	}
	else if (sum_speed > ((1 + (sum_distance) * 0.02)*4 * P_OFM_STOP_SPEED_THRESHOLD)) {
		return CALCULATE_MOVING_L;
	}
	else if (sum_speed > ((1 + (sum_distance) * 0.02)*2 * P_OFM_STOP_SPEED_THRESHOLD)) {
		return CALCULATE_STAND_U;
	}
	else if (sum_speed > ((1 + (sum_distance) * 0.02) * P_OFM_STOP_SPEED_THRESHOLD)) {
		return CALCULATE_MOVING_SLOWLY;
	}
	else {
		return CALCULATE_STAND;
	}
}
/*!
use the motion status of the camera to verify the calculated motion status
- the camera move status is divided into four categories: invalid information, moving, stand, moving slowly
- the camera move status is divided into four categories: invalid information, moving, stand, moving slowly
- invalid information have no contribution for confidence ;
- a positive number is consistent, a negative number is a conflict
- uniformity measurement : agree 2 , close agree 1, useless 0,close conflict -1,conflict -2
\param a camera object move status ,a calculate move status
\return uniformity measurement
*/
static char  check_by_camera(int camera_status, ECalculateMoveStatus calculate_status) {

	if (calculate_status == CALCULATE_STAND) {
		switch (camera_status) {
		case 	C_MOVE_INVALID:
		case 	C_MOVE_UNKNOWN:
			return 0;
		case 	C_MOVE_MOVING:     
			return -2;
		case 	C_MOVE_MOVING_SLOWLY:
			return -1;
		case 	C_MOVE_STATIONARY:
		case 	C_MOVE_STOPPED:
			return 2;
		default:
			break;
		}
	}
	if (calculate_status == CALCULATE_MOVING_SLOWLY|| calculate_status == CALCULATE_STAND_U || calculate_status == CALCULATE_MOVING_L) {
		switch (camera_status) {
		case 	C_MOVE_INVALID:
		case 	C_MOVE_UNKNOWN:
			return 0;
		case 	C_MOVE_MOVING:
			return -1;
		case 	C_MOVE_MOVING_SLOWLY:
			return 2;
		case 	C_MOVE_STATIONARY:
		case 	C_MOVE_STOPPED:
			return -1;
		default:
			break;
		}
	}
	if (calculate_status == CALCULATE_MOVING) {
		switch (camera_status) {
		case 	C_MOVE_INVALID:
		case 	C_MOVE_UNKNOWN:
			return 0;
		case 	C_MOVE_MOVING:
			return 2;
		case 	C_MOVE_MOVING_SLOWLY:
			return -1;
		case 	C_MOVE_STATIONARY:
		case 	C_MOVE_STOPPED:
			return -2;
		default:
			break;
		}
	}
	return 0;
}
/*!
use the motion status of the radar to verify the calculated motion status
- the radar move  status is divided into four categories: invalid information, moving, stand, 
- invalid information have no contribution for confidence ;
- a positive number is consistent, a negative number is a conflict
- uniformity measurement : agree 2 , close agree 1, useless 0,close conflict -1,conflict -2
\param a radar object move status ,a calculate move status
\return uniformity measurement
*/
static char  check_by_radar(int radar_status, ECalculateMoveStatus calculate_status) {

	if (calculate_status== CALCULATE_STAND) {
		switch (radar_status) {
		case 	MRR_MOVE_INIT:
		case 	MRR_MOVE_UNKNOWN:
			return 0;
		case 	MRR_MOVE_MOVING:
			return -2;
		case 	MRR_MOVE_STOPPED:
		case 	MRR_MOVE_STATIONARY:
			return 2;
		default:
			break;
		}
	}
	if (calculate_status == CALCULATE_MOVING_SLOWLY || calculate_status == CALCULATE_STAND_U || calculate_status == CALCULATE_MOVING_L) {
		switch (radar_status) {
		case 	MRR_MOVE_INIT:
		case 	MRR_MOVE_UNKNOWN:
			return 0;
		case 	MRR_MOVE_MOVING:
			return 1;
		case 	MRR_MOVE_STOPPED:
		case 	MRR_MOVE_STATIONARY:
			return -1;
		default:
			break;
		}
	}
	if (calculate_status == CALCULATE_MOVING) {
		switch (radar_status) {
		case 	MRR_MOVE_INIT:
		case 	MRR_MOVE_UNKNOWN:
			return 0;
		case 	MRR_MOVE_MOVING:
			return 2;
		case 	MRR_MOVE_STOPPED:
		case 	MRR_MOVE_STATIONARY:
			return -2;
		default:
			break;
		}
	}
	return 0;
}

/*!
use the motion status of the last track object to verify the calculated motion status
- the last track  move  status is divided into four categories: invalid information, moving, stand, moving slowly
- invalid information have no contribution for confidence ;
- a positive number is consistent, a negative number is a conflict
- uniformity measurement : agree 2 , close agree 1, useless 0,close conflict -1,conflict -2
- use base confidence 6 add uniformity measurement(min -5 ,max 5) the result is the EConfidence
\param a camera object move status ,a calculate move status
\return EConfidence
*/
static EConfidence check_by_track(FusionTrack* pTrack, ECalculateMoveStatus calculate_status, char confidence_weight) {
	if (pTrack->radar_object[RADAR_FRONT] != NULL) {
		switch (pTrack->radar_object[RADAR_FRONT]->move_status)
		{
		case MRR_MOVE_MOVING:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			return CONFIDENCE_99;
		case MRR_MOVE_STATIONARY:
			pTrack->move_status = MOVE_STATUS_STAND;
			return CONFIDENCE_99;
		case MRR_MOVE_STOPPED:
			pTrack->move_status = MOVE_STATUS_STOPPED;
			return CONFIDENCE_99;
		default:
			break;
		}
	}

	switch (pTrack->move_status)
	{
	case MOVE_STATUS_INVALID:
	case MOVE_STATUS_INIT:
	case MOVE_STATUS_UNKNOWN:
		switch (calculate_status) {
		case CALCULATE_STAND:
			pTrack->move_status = MOVE_STATUS_STAND;
			break;
		case CALCULATE_MOVING_SLOWLY:
		case CALCULATE_STAND_U:
		case CALCULATE_MOVING_L:
			pTrack->move_status = MOVE_STATUS_SLOWLY;
			break;
		case CALCULATE_MOVING:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			break;
		default:
			break;
		}
		break;
	case MOVE_STATUS_DRIVE:
		switch (calculate_status)
		{
		case CALCULATE_STAND:
			pTrack->move_status = MOVE_STATUS_STOPPED;
			confidence_weight--;
			break;
		case CALCULATE_MOVING_SLOWLY:
		case CALCULATE_STAND_U:
			pTrack->move_status = MOVE_STATUS_SLOWLY;
			break;
		case CALCULATE_MOVING:
		case CALCULATE_MOVING_L:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			confidence_weight++;
			break;
		default:
			break;
		}
		break;
	case MOVE_STATUS_SLOWLY:
		switch (calculate_status)
		{
		case CALCULATE_STAND:
			pTrack->move_status = MOVE_STATUS_STOPPED;
			break;
		case CALCULATE_MOVING_SLOWLY:
		case CALCULATE_STAND_U:
		case CALCULATE_MOVING_L:
			pTrack->move_status = MOVE_STATUS_SLOWLY;
			confidence_weight++;
			break;
		case CALCULATE_MOVING:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			break;
		default:
			break;
		}
		break;
	case MOVE_STATUS_STOPPED:
		switch (calculate_status)
		{
		case CALCULATE_STAND:
		case CALCULATE_MOVING_SLOWLY:
			pTrack->move_status = MOVE_STATUS_STOPPED;
			confidence_weight++;
			break;
		case CALCULATE_STAND_U:
		case CALCULATE_MOVING_L:
			pTrack->move_status = MOVE_STATUS_SLOWLY;
			break;
		case CALCULATE_MOVING:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			confidence_weight--;
			break;
		default:
			break;
		}
		break;
	case MOVE_STATUS_STAND:
		switch (calculate_status)
		{
		case CALCULATE_STAND:
		case CALCULATE_MOVING_SLOWLY:
			pTrack->move_status = MOVE_STATUS_STAND;
			confidence_weight++;
			break;
		case CALCULATE_STAND_U:
		case CALCULATE_MOVING_L:
			pTrack->move_status = MOVE_STATUS_SLOWLY;
			break;
		case CALCULATE_MOVING:
			pTrack->move_status = MOVE_STATUS_DRIVE;
			confidence_weight--;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	return (6 + confidence_weight);
}

/*!
get track object' move_status by track information 
- use track object' motion data and vehicle data calculate move_status (by track object'absolute velocity)
- use sensor (camera or radar)check calculated move_status
- use track object' last move_status check calculated move_status and calculate confidence
\param a pointer to a track object 
\return EConfidence
*/
EConfidence GetTrackMoveStatus(FusionTrack* pTrack)
{
	char confidence_weight;
	ECalculateMoveStatus calculate_status;
	confidence_weight = 0;
	calculate_status = calculate_move_status(pTrack);		//calculate move_status with track information
	if (pTrack->camera_object != NULL) {
		confidence_weight += check_by_camera(pTrack->camera_object->move_status, calculate_status);		//check by camera sensor
	}
	if (pTrack->radar_object[RADAR_FRONT] != NULL) {
		confidence_weight += check_by_radar(pTrack->radar_object[RADAR_FRONT]->move_status, calculate_status);//check by radar sensor
	}
	return  check_by_track(pTrack, calculate_status, confidence_weight);           //check by last move_status and calculate confidence 
	
}

unsigned char GetTrackOrientation(FusionTrack* pTrack)
{
	unsigned char orientation;
	if (pTrack->camera_object && (pTrack->camera_object->type == C_TYPE_CAR || pTrack->camera_object->type == C_TYPE_TRUCK))
	{
		if ((pTrack->heading >= -45.0f) && (pTrack->heading <= 45.0f))
		{
			orientation = OREINTATION_NORTH;
		}
		else if (((pTrack->heading > -135.0f) && (pTrack->heading < -45.0f)) || ((pTrack->heading < 135.0f) && (pTrack->heading > 45.0f)))
		{
			orientation = OREINTATION_EAST;
		}
		else
		{
			orientation = OREINTATION_SOUTH;
		}
	}
	else {
		float move_angle = atan2f(pTrack->abs_vel.y, pTrack->abs_vel.x) * 180.0f / P_Globle_PI;
		if ((move_angle >= -45.0f) && (move_angle <= 45.0f)) 
		{
			orientation = OREINTATION_NORTH;
		}
		else if (((move_angle > -135.0f) && (move_angle < -45.0f)) ||((move_angle < 135.0f) && (move_angle > 45.0f))) 
		{
			orientation = OREINTATION_EAST;
		}
		else 
		{
			orientation = OREINTATION_SOUTH;
		}
	}
	if (pTrack->orientation == 0) {
		pTrack->orientation_new = 0;
		pTrack->orientation_new_age = 0;
		return orientation;
	}else if (pTrack->orientation != orientation) {
		if (pTrack->orientation_new != orientation)
		{
			pTrack->orientation_new = orientation;
			pTrack->orientation_new_age = 1;
			return pTrack->orientation;
		}
		else
		{
			pTrack->orientation_new_age++;
			if (pTrack->orientation_new_age > 30)
			{
				pTrack->orientation_new = 0;
				pTrack->orientation_new_age = 0;
				return orientation;
			}
			return pTrack->orientation;
		}
	}
	pTrack->orientation_new = 0;
	pTrack->orientation_new_age = 0;
	return pTrack->orientation;
}

float GetTrackYawAngle(FusionTrack* pTrack)
{
	float yawAngle = atanf(pTrack->abs_vel.y / pTrack->abs_vel.x);
	if (pTrack->abs_vel.y < 0 && pTrack->abs_vel.x < 0) yawAngle -= P_Globle_PI;
	else if (pTrack->abs_vel.y > 0 && pTrack->abs_vel.x < 0) yawAngle += P_Globle_PI;
	else {}
	yawAngle *= 180 / P_Globle_PI;
	return yawAngle;
}

float GetTrackExistProb(FusionTrack* pTrack)
{
	float exist_prob = 0;
	if (pTrack->camera_object)
	{
		exist_prob += 0.3f;
		exist_prob += 0.6f * (pTrack->camera_object->exist_prob);
		exist_prob += (float)(pTrack->camera_object->age) / 100.0f;
	}
	if (pTrack->radar_object[RADAR_FRONT])
	{
		exist_prob += (pTrack->radar_object[RADAR_FRONT]->exist_prob);
		exist_prob += (float)(pTrack->radar_ages[RADAR_FRONT])/100.0f;
	}
	if (pTrack->status == 'C') exist_prob += 0.2f;
	for (int i = RADAR_FL; i < RADAR_CNT - 1; i++)
	{
		if (pTrack->radar_object[i]) exist_prob += 0.1f;
		exist_prob += (float)(pTrack->radar_ages[i])/100.0f;
	}
	if (exist_prob > 1.0f) exist_prob = 1.0f;
	return exist_prob;
}

static float GetProbBy3dSize(const Size3D* pCustom, const Size3D* pStd)
{
	float prob = 0;
	if (pCustom->length > pStd->length) prob += 0.1f;
	if (pCustom->width > pStd->width) prob += 0.1f;
	if (pCustom->height > pStd->height) prob += 0.1f;
	return prob;
}

static float GetProbBy2dSize(const Size3D* pCustom, const Size3D* pStd)
{
	float prob = 0;
	if (pCustom->length > pStd->length) prob += 0.1f;
	if (pCustom->width > pStd->width) prob += 0.1f;
	return prob;
}

static float GetObstacleProbFromSensor(FusionTrack* pTrack)
{
	float obstacle_prob = 0;
	if (pTrack->camera_object)
	{
		/*if (pTrack->type == OBJECT_TYPE_CAR)
		{
			obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_car);
			obstacle_prob += (float)(pTrack->camera_object->age) / 100;
			if (pTrack->radar_object[RADAR_FRONT] == NULL) obstacle_prob -= 0.3f;
		}
		else if (pTrack->type == OBJECT_TYPE_TRUCK)
		{
			obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_car);
			obstacle_prob += (float)(pTrack->camera_object->age) / 100;
			if (pTrack->radar_object[RADAR_FRONT] == NULL) obstacle_prob -= 0.3f;
		}
		else if (pTrack->type == OBJECT_TYPE_MOTORBIKE)
		{
			obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_motorbike);
			obstacle_prob += (float)(pTrack->camera_object->age) / 100;
			if (pTrack->radar_object[RADAR_FRONT] == NULL) obstacle_prob -= 0.3f;
		}
		else if (pTrack->type == OBJECT_TYPE_BICYCLE) obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_bicycle);
		else if (pTrack->type == OBJECT_TYPE_PEDESTRIAN) obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_pedestrian);
		else if (pTrack->type == OBJECT_TYPE_UNCERTAIN_VCL) obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_uncertain_vcl);
		else obstacle_prob += GetProbBy3dSize(&(pTrack->size3d), &obstacle_unknown);
		if (pTrack->camera_object->object_in_drivable_area) obstacle_prob += 0.1f;
		if (pTrack->camera_object ->object_has_cut_lane) obstacle_prob += 0.2f;
		if (pTrack->camera_object->object_has_cut_path)  obstacle_prob += 0.2f;*/
		obstacle_prob = 1.0f;
	}
	else if (pTrack->radar_object[RADAR_FRONT])
	{
		obstacle_prob += pTrack->radar_object[RADAR_FRONT]->obs_prob;
		/*if (pTrack->type == OBJECT_TYPE_CAR) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_car);
		else if (pTrack->type == OBJECT_TYPE_TRUCK) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_car);
		else if (pTrack->type == OBJECT_TYPE_MOTORBIKE) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_motorbike);
		else if (pTrack->type == OBJECT_TYPE_BICYCLE) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_bicycle);
		else if (pTrack->type == OBJECT_TYPE_PEDESTRIAN) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_pedestrian);
		else if (pTrack->type == OBJECT_TYPE_UNCERTAIN_VCL) obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_uncertain_vcl);
		else obstacle_prob += GetProbBy2dSize(&(pTrack->size3d), &obstacle_unknown);*/
		//currently radar do not output realistic size but a fixed value
	}
	else
		obstacle_prob = 0.1f;		//coasting track
	return obstacle_prob;
}

static float GetTrackObstacleProb(FusionTrack* pTrack)
{
	float obstacle_prob = 0.2f * pTrack->exist_prob;
	obstacle_prob += GetObstacleProbFromSensor(pTrack);//judgement by typesize
	if (obstacle_prob > 1.0f) obstacle_prob = 1.0f;
	else if(obstacle_prob <0) obstacle_prob = 0;
	return obstacle_prob;
}

EMatchStatus GetTrackMatchStatus(FusionTrack* pTrack)
{
	EMatchStatus match_status = MATCH_NONE;
	if (pTrack->camera_kf_data.inited == true) match_status |= MATCH_CAMERA;
	for (int i = 0; i < RADAR_CNT; i++)
	{
		if(pTrack->radar_kf_data[i].inited == true) match_status |= 1 << (i + 1);         //radar_type counting from 0,1,2,3,4
	}
	return match_status;
}

void GetTrackAllProperties(FusionTrack* pTrack) 
{
	pTrack->type_confidence = GetTrackType(pTrack);
	pTrack->move_status_confidence = GetTrackMoveStatus(pTrack);
	pTrack->orientation = GetTrackOrientation(pTrack);
	pTrack->yaw_angle = GetTrackYawAngle(pTrack);
	//pTrack->exist_prob = GetTrackExistProb(pTrack);
	//pTrack->obstacle_prob = GetTrackObstacleProb(pTrack);
	//pTrack->match_status = GetTrackMatchStatus(pTrack);
	
}
/*! compare type of camera object and track
	\return 1 if they have the same type
	\return 0 if they have relevant type
	\return -1 if they have different type
*/
int CompareTypeCameraToTrack(CameraObjType c_type, EObjectType t_type)
{
	int rtn = 0;
	if ((t_type == OBJECT_TYPE_CAR && c_type == C_TYPE_CAR) || (t_type == OBJECT_TYPE_TRUCK && c_type == C_TYPE_TRUCK) ||
		(t_type == OBJECT_TYPE_MOTORBIKE && c_type == C_TYPE_MOTORCYCLE) || (t_type == OBJECT_TYPE_BICYCLE && c_type == C_TYPE_BICYCLE) ||
		(t_type == OBJECT_TYPE_PEDESTRIAN && c_type == C_TYPE_PEDESTRIAN))
		rtn = 1;
	return rtn;
}

int CompareTypeRadarToTrack(CameraObjType r_type, EObjectType t_type)
{
	int rtn = 0;
	if ((t_type == OBJECT_TYPE_CAR && r_type == MRR_TYPE_CAR) || (t_type == OBJECT_TYPE_TRUCK && r_type == MRR_TYPE_TRUCK) ||
		(t_type == OBJECT_TYPE_BICYCLE && r_type == MRR_TYPE_BICYCLE) || (t_type == OBJECT_TYPE_PEDESTRIAN && r_type == MRR_TYPE_PEDESTRIAN))
		rtn = 1;
	return rtn;
}

inline int CompareTypeTrackToTrack(EObjectType t_type1, EObjectType t_type2)
{
	if (t_type1 == t_type2) return 1;
	else return 0;
}

int CompareMoveStatusCameraToTrack(CameraObjMoveStatus c_move, EMoveStatus t_move)
{
	int rtn = 0;
	if ((c_move == C_MOVE_MOVING && t_move == MOVE_STATUS_DRIVE) || (c_move == C_MOVE_STATIONARY && t_move == MOVE_STATUS_STAND) ||
		(c_move == C_MOVE_STOPPED && t_move == MOVE_STATUS_STOPPED) || (c_move == C_MOVE_MOVING_SLOWLY && t_move == MOVE_STATUS_SLOWLY))
		rtn = 1;
	return rtn;
}

int CompareMoveStatusRadarToTrack(MRR_ObjMoveStatus r_move, EMoveStatus t_move)
{
	int rtn = 0;
	if ((r_move == MRR_MOVE_MOVING && t_move == MOVE_STATUS_DRIVE) || (r_move == C_MOVE_STATIONARY && t_move == MOVE_STATUS_STAND) ||
		(r_move == C_MOVE_STOPPED && t_move == MOVE_STATUS_STOPPED))
		rtn = 1;
	return rtn;
}

int CompareMoveStatusTrackToTrack(EMoveStatus t_move1, EMoveStatus t_move2)
{
	int rtn = 0;
	if (t_move1 == t_move2) return 1;
	return rtn;
}


