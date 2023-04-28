#ifndef RFMRESULT_H
#define RFMRESULT_H

#include "rtwtypes.h"


#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_LINE_BUS_

typedef struct _tag_RFM_LINE_BUS
{
  boolean_T b_is_line_exist;
  real32_T f_confidence;
  uint8_T en_type;
  real32_T f_C0;
  real32_T f_C1;
  real32_T f_C2;
  real32_T f_C3;
  real32_T f_C0_second;
  real32_T f_C1_second;
  real32_T f_C2_second;
  real32_T f_C3_second;
  real32_T f_C0_rear;
  real32_T f_C1_rear;
  real32_T f_C2_rear;
  real32_T f_C3_rear;
  uint8_T en_line_color;
  real32_T f_view_range_start;
  real32_T f_view_range_end;
  real32_T f_view_range_start_second;
  real32_T f_view_range_end_second;
  real32_T f_view_range_start_rear;
  real32_T f_view_range_end_rear;
} L3_RFM_LINE_BUS;

#endif


#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_LANE_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_LANE_BUS_

typedef struct _tag_RFM_LANE_BUS
{
  boolean_T b_is_avalible;
  uint8_T en_lane_type;
  uint8_T i_speed_max;
  real32_T f_spd_change_dis;
  uint8_T i_change_spd_max;
  real32_T f_width;
  L3_RFM_LINE_BUS st_left_line;
  L3_RFM_LINE_BUS st_right_line;
  boolean_T vanish_valid;
  real32_T vanish_pt_dis;
} L3_RFM_LANE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_LEAVE_ALERT_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_LEAVE_ALERT_BUS_

typedef struct _tag_RFM_LEAVE_ALERT_BUS
{
  boolean_T b_is_avalible;
  real32_T f_distance;
  uint8_T en_direction;
  uint8_T i_speed_limit_max;
  // RFM_REC_LANES_BUS st_recommend_lanes;
  // BRANCH st_branch;
} L3_RFM_LEAVE_ALERT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_REC_LANES_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_REC_LANES_BUS_

typedef struct _tag_BRANCH
{
  boolean_T b_availlable;
  real32_T f_turning_angle;
  L3_RFM_LANE_BUS st_branch_lanes;
  uint8_T en_road_type;
} L3_BRANCH;

typedef struct _tag_RFM_REC_LANES_BUS
{
  uint8_T i_rec_lanes_num;
  uint8_T i_rec_lanes[8];
} L3_RFM_REC_LANES_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_INTERSEC_ALERT_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_INTERSEC_ALERT_BUS_

typedef struct _tag_RFM_INTERSEC_ALERT_BUS
{
  boolean_T b_is_available;
  real32_T f_distance;
  uint8_T en_direction;
  uint8_T en_type;
  //RFM_REC_LANES_BUS st_recommend_lanes;
  L3_BRANCH st_branch;
} L3_RFM_INTERSEC_ALERT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_INTP_ELE_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_INTP_ELE_BUS_

typedef struct _tag_RFM_INTP_ELE_BUS
{
  boolean_T b_intp_is_valid;
  boolean_T b_intp_is_start;
  uint8_T b_intp_type;
  real32_T f_intp_lat_distance;
  real32_T f_intp_long_distance;
} L3_RFM_INTP_ELE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_INTP_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_INTP_BUS_

typedef struct _tag_RFM_INTP_BUS
{
  uint8_T i_intp_count;
  boolean_T b_exit_merge_Available;
  boolean_T b_is_highway_merge_left;
  boolean_T b_is_highway_merge_right;
  boolean_T b_is_highway_exit_left;
  boolean_T b_is_highway_exit_right;
  L3_RFM_INTP_ELE_BUS ast_intp_array[5];
} L3_RFM_INTP_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_OFFSET_PAIR_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_OFFSET_PAIR_BUS_

typedef struct _tag_RFM_OFFSET_PAIR_BUS
{
  real32_T f_offset;
  uint8_T i_lane_number;
} L3_RFM_OFFSET_PAIR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_L3_RFM_ROAD_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_L3_RFM_ROAD_INFO_BUS_

typedef struct _tag_RFM_ROAD_INFO_BUS
{
  L3_RFM_OFFSET_PAIR_BUS ast_lane_number_vec[3];
  boolean_T b_is_crossing;
  uint8_T i_lane_id;
  uint8_T en_road_class;
  uint8_T en_road_type;
  uint8_T en_divided_road;
  boolean_T b_toll;
  real32_T f_toll_distance;
  boolean_T b_tunnel;
  real32_T f_tunnel_distance;
  boolean_T b_bridge;
  real32_T f_bridge_distance;
  boolean_T b_traffic_jam;
  real32_T f_distance_to_jam;
  boolean_T b_traffic_accident;
  real32_T f_distance_to_accident;
  uint8_T en_weather;
} L3_RFM_ROAD_INFO_BUS;

#endif

typedef enum _tag_Lane
{
	LEFTLANE = 0,
	MIDLANE,
	RIGHTLANE,
	LANE_INDEX_MAX,
} L3_LanIndex_en;
typedef enum _tag_LR
{
	LB = 0,
	RB,
	B_INDEX_MAX,
}L3_BoundIndex_en;
typedef struct _tag_Result
{
	uint32_T         i_SysTimeMs;
	L3_RFM_LANE_BUS    st_lanes[LANE_INDEX_MAX];
	L3_RFM_LINE_BUS	st_BundaryLines[B_INDEX_MAX];	   
	L3_RFM_LEAVE_ALERT_BUS     st_leave_alert;
	//RFM_LeaveALert_st		  st_leave_alert;
	L3_RFM_INTERSEC_ALERT_BUS    st_intersec_alert;
	L3_RFM_INTP_BUS              st_intp;
	L3_RFM_ROAD_INFO_BUS         st_road_info;
	L3_RFM_REC_LANES_BUS		  st_rec_lanes;
	L3_RFM_LINE_BUS    RFM_LINE_ENTRY_CL;
	L3_RFM_LINE_BUS    RFM_LINE_EXIT_CL;
} L3_RFMResult_st;

#endif