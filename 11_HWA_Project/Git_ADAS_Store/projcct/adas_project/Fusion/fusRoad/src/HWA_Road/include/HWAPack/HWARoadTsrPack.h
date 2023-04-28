/******************************************************************************/
/**
 * @file: HWARoadTSRPack.h
 * @brief: HWUA道路部分接口信号头文件。
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @LastEditTime: 2020-09-28
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_TSR_PACK_H_
#define _HWA_ROAD_TSR_PACK_H_

/*
********************************************************************************
* Include Files Section
********************************************************************************
*/
#include "aaMacro.h"
#include "HWA_Cali.h"
/*
********************************************************************************
* Define Section
********************************************************************************
*/



/*
********************************************************************************
* Typedef Section
********************************************************************************
*/


typedef enum _tag_enum_TSR_Sign_Name {
	e_Speed_Limit_10 = 0,
	e_Speed_Limit_20,
	e_Speed_Limit_30,
	e_Speed_Limit_40,
	e_Speed_Limit_50,
	e_Speed_Limit_60,
	e_Speed_Limit_70,
	e_Speed_Limit_80,
	e_Speed_Limit_90,
	e_Speed_Limit_100,
	e_Speed_Limit_110,
	e_Speed_Limit_120,
	e_Speed_Limit_130,
	e_Speed_Limit_140,
	e_TSR_Reserved_0 = 20,
	e_Bus_Stop = 22,
	e_Car_Limit,
	e_Car_Motorcycle_Limit,
	e_Minimun_Sign,
	e_Motorcycle_Limit,
	e_Left_or_Straighr_Arrow,
	e_Electronic_Speed_Limet_10,
	e_Electronic_Speed_Limet_20,
	e_Electronic_Speed_Limet_30,
	e_Electronic_Speed_Limet_40,
	e_Electronic_Speed_Limet_50,
	e_Electronic_Speed_Limet_60,
	e_Electronic_Speed_Limet_70,
	e_Electronic_Speed_Limet_80,
	e_Electronic_Speed_Limet_90,
	e_Electronic_Speed_Limet_100,
	e_Electronic_Speed_Limet_110,
	e_Electronic_Speed_Limet_120,
	e_Electronic_Speed_Limet_130,
	e_Electronic_Speed_Limet_140,
	e_Post_Exit,
	e_Directional_Sign,
	e_TSR_Reserved_1,
	e_Right_or_Straight_Arrow,
	e_No_Turn_On_Red,
	e_Oncoming_Priority,
	e_No_U_turn,
	e_Back_of_Sign,
	e_TSR_Reserved_2,
	e_End_of_Children,
	e_Pedestrian_Crossing,
	e_AT_BUMP,
	e_Divided_Highway,
	e_Double_Reverse_Curve,
	e_Fire_Station,
	e_Low_Clearance,
	e_No_Outlet,
	e_Pedestrian_Lane,
	e_Pedestrian_Limit,
	e_Pedestrian_Limit_Diagonal,
	e_Shared_Lane,
	e_Shared_Separate_Lane,
	e_End_General,
	e_Electronic_End_General,
	e_End_of_Diversion,
	e_Highway_Announcement_1,
	e_Highway_Announcement_2,
	e_Highway_Announcement_3,
	e_Unknown_Circular_Sign,
	e_No_Parking_End,
	e_No_Parling_Begin,
	e_No_Parking_Continuous,
	e_No_Stopping_End,
	e_No_Stopping_Begin,
	e_No_Stopping_Continuous,
	e_End_No_Parking_Zone,
	e_AUSFAHRT,
	e_End_of_Speed_Limit_2_Digits,
	e_End_of_Speed_Limit_3_Digits,
	e_LED_End_of_Speed_Limit_2_Digits,
	e_LED_End_of_Speed_Limit_3_Digits,
	e_Cancelled_Sign,
	e_TSR_Reserved_3,
	e_Speed_Limit_150,
	e_Speed_Limit_160,
	e_TSR_Reserved_4,
	e_TSR_Reserved_5,
	e_TSR_Reserved_6,
	e_TSR_Reserved_7,
	e_TSR_Reserved_8,
	e_Obstruction_Fishbone_Left,
	e_Obstruction_Fishbone_Right,
	e_Obstruction_Thin,
	e_Reverse_Curve_Left,
	e_Reverse_Curve_Right,
	e_Turn_Left,
	e_Turn_Right,
	e_Pole,
	e_Speed_Limit_5,
	e_Speed_Limit_15,
	e_Speed_Limit_25,
	e_Speed_Limit_35,
	e_Speed_Limit_45,
	e_Speed_Limit_55,
	e_Speed_Limit_65,
	e_Speed_Limit_75,
	e_Speed_Limit_85,
	e_Speed_Limit_95,
	e_Speed_Limit_105,
	e_Speed_Limit_115,
	e_Speed_Limit_125,
	e_Speed_Limit_135,
	e_Speed_Limit_145,
	e_LED_Speed_Limit_5,
	e_LED_Speed_Limit_15,
	e_LED_Speed_Limit_25,
	e_LED_Speed_Limit_35,
	e_LED_Speed_Limit_45,
	e_LED_Speed_Limit_55,
	e_LED_Speed_Limit_65,
	e_LED_Speed_Limit_75,
	e_LED_Speed_Limit_85,
	e_LED_Speed_Limit_95,
	e_LED_Speed_Limit_105,
	e_LED_Speed_Limit_115,
	e_LED_Speed_Limit_125,
	e_Short_Pole,
	e_Reflector,
	e_Horseback_Riders,
	e_Triangular_Beware_Of_Snow,
	e_Triangular_Bicycle_Crossing,
	e_Triangular_Buses,
	e_Triangular_Children,
	e_Triangular_Congestion_Hazard,
	e_Curve_Left,
	e_Warning_Curve_Right,
	e_Warning_Domestic_Animals_Crossing,
	e_Warning_Double_Curve_Left,
	e_Warning_Double_Curve_Right,
	e_Warning_Draw_Bridge,
	e_Warning_Falling_Rocks,
	e_Warning_General_Danger,
	e_Warning_Guarded_Railway_Crossing,
	e_Warning_Intersection,
	e_Warning_Left_Merge,
	e_Warning_Loose_Gravel,
	e_Warning_Low_Flying_Aircraft,
	e_Warning_Pedestrians,
	e_Warning_Pedestrians_Crossing,
	e_Warning_Priority,
	e_Warning_Right_Merge,
	e_Warning_Construction_Area_Ahead,
	e_Warning_Road_Narrows,
	e_Warning_Road_Narrows_Left,
	e_Warning_Road_Narrows_Right,
	e_Warning_Road_Work,
	e_Warning_Rough_Road,
	e_Warning_Roundabout,
	e_Warning_Slippery_When_Wet,
	e_Warning_Steep_Downgrade,
	e_Warning_Steep_Upgrade,
	e_Warning_Strong_Cross_Wind,
	e_Warning_Traffic_Signals,
	e_Warning_Two_Way_Traffic,
	e_Warning_Unguarded_Railway_Crossing,
	e_Warning_Wild_Animal_Crossing,
	e_Triangular_Yield,
	e_Priority_Road,
	e_End_Of_Priority_Road,
	e_Motorway_Begin,
	e_Regular_End_Of_Motorway,
	e_Expressway_Begin,
	e_Expressway_End,
	e_Playground_Residential_Area_Begin,
	e_End_Of_Playground_Residential_Area,
	e_City_Entrance,
	e_Combined_City_Exit,
	e_Tunnel,
	e_Warning_Additional_Left,
	e_Warning_Additional_Right,
	e_Warning_Left_Lane_Ends,
	e_Warning_Right_Lane_Ends,
	e_Warning_Exit_Right,
	e_Triangular_City_Entrance_China,
	e_Camera,
	e_TSR_Warning_Lane_Merge_Left,
	e_TSR_Warning_Lane_Merge_Right,
	e_Priority_Oncoming,
	e_Warning_Lane_split_Right,
	e_Warning_Winding_Left,
	e_Warning_Winding_Right,
	e_Warning_Side_Road_Left,
	e_Warning_USA_Side_Road_Right,
	e_Warning_Thru_Traffic_Merge_Txt,
	e_Warning_Stop_Ahead,
	e_Warning_Loose_Shoulder,
	e_TSR_Reserved_9,
	e_No_Entrance,
	e_No_Passing_Start,
	e_End_Of_No_Passing,
	e_No_Passing_Truck_Start,
	e_End_Of_No_Passing_Truck,
	e_Road_work_with_distance_information,
	e_End_Road_Works_Txt,
	e_End_Construction,
	e_No_Stopping,
	e_No_Parking,
	e_Stop_Sign_Alert,
	e_Stop_Sign,
	e_Truck_Limit,
	e_Warning_Cross_Roads,
	e_Warning_Side_Road,
	e_Warning_Road_Work_Ahead_Text,
	e_Warning_Road_Construction_Ahead_Text,
	e_Warning_Bridge_Ice,
	e_Warning_Bump,
	e_TSR_End_School_Zone,
	e_City_Entrance_Black_Background,
	e_LED_No_Passing,
	e_LED_No_Passing_End,
	e_Built_Up_Area,
	e_End_of_Built_Up_Area,
	e_Roundabout,
	e_LED_No_Passing_Truck,
	e_LED_No_Passing_Truck_End,
	e_Bridge,
	e_Warning_River_Bank,
	e_End_Of_City,
	e_Obstruction_Black_and_White = 239,
	e_Arrow_Straight,
	e_Arrow_Right,
	e_Arrow_Left,
	e_Arrow_Right_Ahead,
	e_Arrow_Left_Ahead,
	e_Arrow_No_Left,
	e_Arrow_No_Right,
	e_Arrow_Keep_Left,
	e_Arrow_Keep_Right,
	e_Arrow_Either_Side,
	e_Road_Closed,
	e_Cone,
	e_Barrel,
	e_Obstruction_Left,
	e_Obstruction_Right,
	e_Not_relevant_sign_not_reported,
	e_Bicycle_Lane,
	e_Bicycle_Limit,
	e_Bus_Limit,
	e_Hazardous_Truck_Limit,
	e_Height_Limit,
	e_No_Littering,
	e_Parking,
	e_Pedestrian_Diagonal_Bicycle,
	e_TSR_Reserved_10,
	e_Trucks_Only,
	e_Weight_Limit,
	e_Width_Limit,
	e_Motor_Up_Car_Down,
	e_Low_Emission_Zone,
	e_End_Of_Low_Emission_Zone,
	e_Toll_Road,
	e_Round_Road_Number,
	e_Tunnel_Entrance,
	e_Tunnel_Exit,
	e_TSR_Reserved_11,
	e_AV_Vertical = 277,
	e_AV_Horizontal,
	e_TSR_Reserved_12 = 280,
	e_Tractor_Limit = 295,
	e_Tractor_Horse_Limit,
	e_Horse_Limit,
	e_Explosives_Limit,
	e_Horn_Limit,
	e_TSR_Reserved_13,
	e_Keep_Distance,
	e_Load_Limit,
	e_Bus_Lane,
	e_Tram_Lane,
	e_Bus_Lane_End,
	e_Bicycle_Lane_End,
	e_No_Straight,
	e_U_Turn,
	e_Toll_Road_End,
	e_High_Beam,
	e_Snow_Chains,
	e_End_of_Hazardous_Truck_Limit,
	e_Toll_Japan_Electronic,
	e_Toll_Japan_electronic_and_Manual,
	e_Toll_Japan_Manual,
	e_Construction_arrow_right,
	e_Construction_arrow_left,
	e_Directional_sign_Japan,
	e_Roadwork_Japan,
	e_Construction_right_or_left_Japan,
	e_Roadwork_electronic_sign_Japan,
	e_Roadwork_right_Japan,
	e_bicycles,
	e_end_of_bicycles,
	e_one_way,
	e_end_of_one_way,
	e_end_of_tunnel,
	e_parking,
	e_DIRECTIONAL_LANE,
	e_Distance_to_directed_road,
	e_Direction_info_on_highway,
	e_Exit_toward_a_direction,
	e_Road_topology,
	e_Closed_Lane,
	e_Open_Lane,
	e_Water_Course,
	e_Interchange_Name,
	e_TSR_Reserved_14,
	e_TSR_Reserved_15,
	e_Exit_Left,
	e_Offset_Roads,
	e_Pass_Left_or_Right,
	e_Nature_Reserve_Switzerland_Only,
	e_Slow_Korea_Only,
	e_Speed_Limit_Ahead_USA_Only,
	e_Flaggers_Ahead,
	e_Warning_Playground,
	e_Warning_Yield_Ahead,
	e_Warning_Uneven_Lanes,
	e_Warning_School_Zone,
	e_School_Bus_Stp_Ahead,
	e_Road_May_Flood,
	e_Be_Prepared_to_Stop,
	e_DIP,
	e_Hidden_Driveway,
	e_Special_Needs_Child_Area,
	e_Dead_End,
	e_Truck_Crossing,
	e_Hairpin_Turn_Left,
	e_Lane_Split_Left,
	e_Hairpin_Turn_Right,
	e_T_Road,
	e_Entrance_Left,
	e_Entrance_Right,
	e_Warning_Truck_Rollover,
	e_Reverse_Curve_Left_2_lanes,
	e_Reverse_Curve_Right_2_lanes,
	e_Reverse_Curve_Left_3_lanes,
	e_Reverse_Curve_Right_3_lanes,
	e_Merge_to_Main_From_Right,
	e_Warning_Tunnel,
	e_Offset_Roads_Right_Left,
	e_Offset_Roads_Left_Right,
	e_Railway_Crossing_Left,
	e_Railway_Crossing_Right,
	e_Thru_Traffic_Merge_Left,
	e_Thru_Traffic_Merge_Right,
	e_Share_Road_Pedestrians_Bicycle,
	e_Share_Road_Cars_Bicycle,
	e_TSR_Reserved_16,
	/*e_TSR_Reserved_17,
	e_TSR_Reserved_18,
	e_TSR_Reserved_19,
	e_TSR_Reserved_20,*/
	e_End_of_Divided_Way,
	e_Accident_Spot,
	e_Narrow_Bridge,
	e_Detour_Ahead,
	e_std_oneWayLeft,
	e_std_oneWayRight,
	e_bay,
	e_diversion,
	e_std_obstruction,
	e_std_noTurn,
	e_crossPriorityRoad,
	e_sharp_deviation_left,
	e_sharp_deviation_right,
	e_exit_chinese,
	e_level_crossing,
	Electronic_sign_Off = 399,
	Junction = 416,
	Manhole_cover_Sewage = 430,
	Manhole_Cover_Drainage

} TSR_Name;

typedef enum _tag_enum_TSR_Sup_SignName {
	e_none,
	e_rain,
	e_snow,
	e_trailer,
	e_time,
	e_Arrow_left,
	e_Arrow_right,
	e_BendArrow_left,
	e_BendArrow_right,
	e_truck,
	e_distance_arrow,
	e_weight,
	e_distance_in,
	e_tractor,
	e_snow_rain,
	e_school,
	e_rain_cloud,
	e_fog,
	e_hazardous_materials,
	e_night,
	e_supp_sign_generic,
	e_rappel,
	e_zone,
	e_ramp,
	e_end,
	e_exit,
	e_advisory,
	e_minimum,
	e_reduced_ahead,
	e_distance_stop,
	e_par_verglas,
	e_ahead,
	e_area,
	e_road_work_au,
	e_arrow_bidirectional,
	e_work_zone,
	e_distance_in_for,
	e_zone_end,
	e_supp_end_school_zone,
	e_supp_camera,
	e_larmschutz,
	e_car,
	e_shared_zone,
	e_supp_bump,
	e_snow_rain_dis_arrow,
	e_snow_truck,
	e_motorcycle,
	e_time_school,
	e_truck_bus,
	e_koko_made,
	e_koko_kara,
	e_arrow_ver_bidirectional = 53,
	e_invalid_supp = 255
} TSR_Sup_Name;



typedef struct _tag_HWA_TSRHeader {
	AInt8U    TSR_Zero_byte;
	AInt8U	TSR_Protocol_Version;
	AInt8U	TSR_Sync_ID;
	AInt8U	TSR_Approved_Sign_Count;
	AInt8U	TSR_Filtered_Sign_Count;
	AInt8U	TSR_UnderTracking_Sign_Count;
	AInt32U	TSR_Valid_Num;
} HWA_TSRHeader;

typedef struct _tag_HWA_TSRlement {
	AInt8U	TSR_ID;
	AInt8U	TSR_Camera_Source;
	AInt16U	TSR_Sign_Name;
	AInt8U	TSR_Relevancy;        /*find tsr whose enum is 0*/
	AInt8U	TSR_Filter_Type;
	AInt8U	TSR_Sup1_SignName;
	AInt8U	TSR_Sup1_Position;
	AFloat	TSR_Sup1_Confidence;
	AFloat	TSR_Sup2_Confidence;
	AInt8U	TSR_Sup2_SignName;
	AInt8U	TSR_Sup2_Position;
	AFloat	TSR_Confidence;
	AInt8U	TSR_Sign_Shape;
	AInt8U	TSR_Sign_Structure;
	AInt16U	TSR_Tracking_Age;
	AFloat	TSR_Sign_Long_Distance;
	AFloat	TSR_Sign_Long_Distance_STD;
	AFloat	TSR_Sign_Lateral_Distance;
	AFloat	TSR_Sign_Lat_Distance_STD;
	AFloat	TSR_Sign_Height;
	AInt8U	Reserved_2;/*fail cnt*/
	AInt8U	Reserved_3;
	AInt8U	Reserved_4;
	AInt8U	Reserved_5;
	AInt8U	Reserved_6;
	AInt8U	Reserved_7;
	AInt8U	Reserved_8;
	AInt8U	Reserved_9;
	AFloat	TSR_Sign_Panel_Height_STD;
	AFloat	TSR_Sign_Height_STD;
	AFloat	TSR_Sign_Panel_Width;
	AFloat	TSR_Sign_Panel_Height;
	AFloat	TSR_Sign_Panel_Width_STD;
	AInt8U	TSR_Measurement_Status;
	AFloat	TSR_AngleZ;
	AFloat	TSR_Relevancy_Confidence;
	AInt8U	Reserved_10;
} HWA_TSRElement;

typedef struct _tag_HWA_TrafficSigns {
	AInt32U     timeStamp;
	HWA_TSRHeader	header;
	HWA_TSRElement	element[P_RFM_TSRMAXNUM];
} HWATSRPack;

/*-----------freespcace-----------------*/

typedef struct _tag_HWA_FSPXHeader {
	AInt8U	Num_Of_Obstacles;
	AInt8U     FSPX_Zero_byte;
	AInt8U	 FSPX_Protocol_Version;
	AInt8U     FSPX_Sync_ID;
	AInt8U     FSPX_Header_Buffer;
} HWA_FSPXHeader;

typedef struct _tag_HWA_FSPXElement {
	ABool    FSPX_Is_Valid;
	AFloat	FSPX_Existence_Prob_B0;
	AInt8U	FSPX_Mobility_Status_B0;
	AFloat	FSPX_Classification_Conf_B0;
	AInt8U	FSPX_Classification_Type_B0;
	AInt8U	FSPX_Lane_Assginment_B0;
	AInt8U	Reserved_1;
	AInt8U	FSPX_Obsticle_ID_B0;
	AFloat	FSPX_Elevation_Angle_B0;
	AFloat	FSPX_Range_STD_B0;
	AInt8U	Reserved_2;
	AFloat	FSPX_Height_B0;
	AFloat	FSPX_Height_STD_B0;
	AFloat	FSPX_Azimuth_Angle_B0;
	AFloat	FSPX_Azimuth_Angle_STD_B0;
	AFloat	FSPX_Range_B0;
	AInt8U	Reserved_3;

} HWA_FSPXElement;

typedef struct _tag_HWA_FreeSpace {
	AInt32U     timeStamp;
	HWA_FSPXHeader  header;
	HWA_FSPXElement element[P_RFM_FSPXMAXNUM];
} HWA_FSPXPack;



#endif /* _HWA_ROAD_TSR_PACK_H_ */
