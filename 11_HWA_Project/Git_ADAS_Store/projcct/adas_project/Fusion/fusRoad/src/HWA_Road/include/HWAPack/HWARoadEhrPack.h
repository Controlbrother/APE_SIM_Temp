/******************************************************************************/
/**
 * @file: HWARoadEhrPack.h
 * @brief: EHR信号接口头文件。
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @LastEditTime: 2020-08-03
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_EHR_PACK_H_
#define _HWA_ROAD_EHR_PACK_H_
/*
********************************************************************************
* Include Files Section
********************************************************************************
*/
#include "aaMacro.h"

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
typedef enum _tag_EhrRoadClass {
	RClass_UNKNOWN = 0,
	RClass_HIGH_WAY,
	RClass_EXPRESSWAY,
	RClass_NATIONAL_ROAD,
	RClass_PRO_OR_CTRY_ROAD,
	RClass_MAIN_ROAD,
	RClass_Secondary_ROAD
} EhrRoadClass;

typedef struct _tag_HWAEHRPack {
	AInt8U   DrivingOnHighWay;      /*Driving on the highway*/   /*0x0:UNKNOWN  0x1:YES  0x2:NO*/
	AInt8U	FormOfWay;               /*Driving on the main road*/  /*0x0:UNKNOWN0x1:YES0x2:NO*/
	AInt8U	EnterTunnelInfo;           /*Driving in tunnel or not*/   /*0x0:UNKNOWN 0x1:YES 0x2:NO*/
	AInt8U	EnterBridgeInfo;          /*Whether driving on the bridge*/    /*0x0:UNKNOWN 0x1:YES 0x2:NO*/
	AInt16U	TunnelDistance;           /*Distance between the front and the tunnel entrance*/    /*0-629:VALID630:UNKNOWN*/
	AInt16U	BridgeDistance;        /*Distance between the front and the bridge entrance*/       /*0-629:VALID630:UNKNOWN*/
	AInt16U	RampDistance;             /*Distance between the front and the fork*/     /*0-629:VALID630:UNKNOWN*/
	AInt16U	RampInDistance;             /*Distance between the front and the fork*/     /*0-629:VALID630:UNKNOWN*/
	AInt16U	RampOutDistance;             /*Distance between the front and the fork*/     /*0-629:VALID630:UNKNOWN*/
	AInt16U	RoadCurvatureFarDistance;   /*Relative distance between the current vehicle position and the maximum curvature point in the front XM*/    /*0-629:VALID630:UNKNOWN*/
	AFloat	RoadCurvature;             /*Curvature at current vehicle position*/    /*1:UNKNOWN ELSE:VALID*/
	AFloat	RoadCurvatureFar;           /*Maximum curvature within X Meter in front of current vehicle position*/    /*1:UNKNOWN ELSE:VALID*/
	AInt8U	IFCHUTInterface;              /*Handshake signal*/       /*0x0: NO_RESPONSE 0x1:RESPONSE*/
	AInt8U	MapDataValid;                 /*Whether map data is valid*/     /*0x0:UNKNOWN 0x1:VALID 0x2:INVALID*/
	AInt8U	NumOfLaneDrvDir;            /*Number of lanes in driving direction, excluding emergency lanes*/  /* 0x0:one - direction road driven in wrong direction   0x1 - 0x5 : 1 - 5DriverDirectionRoad  0x6 : 6 or more   	0x7 : Unknown*/
	AInt8U	SpeedLimit;                    /*Current position speed limit information*/   /*0x0:UNKNOWN   0xFF:UNLIMITED   ELSE:VALID*/
	AInt8U  SpeedLimitType;          /*0x0：Implicit,default  0x1：traffic sign 0x2： by night 0x3： by day 0x4：time of day 0x5：rain 0x6：snow 0x7：Unknown*/

	AInt8U	SpeedUnit;                      /* 0x0:KPH  0x1:MPH */
	AInt16U	ElectronicEyeDistance;        /*Distance between front and electronic eye*/   /*0-629:VALID  630:UNKNOWN*/
	AInt8U	ElectronicEyeSpeedLimit;       /*Speed limit information of front electronic eye*/    /*0x0:UNKNOWN 0xFF:UNLIMITED ELSE:VALID*/
	AFloat	RoadSlope;                      /*Slope at current vehicle position*/     /*60：UNKNOWN ELSE:VALID*/
	AFloat	RoadSlopeFar;                   /*Front of current vehicle position*/        /*60：UNKNOWN ELSE:VALID*/
	AFloat	RoadCurvatureValueMatrix[10];        /*-0.2-0.2:VALID ELSE:UNKNOWN*/
	AFloat	RoadCurvatureDistanceMatrix[10];        /*0-629:VALID 630:UNKNOWN*/
	AInt8U	RoadCurvatureMatrixSize;      /*Number of all curvature points within 300m in front of the current vehicle position*/
	AFloat	RoadSlopeValueMatrix[10];              /*-55~55:VALID ELSE:UNKNOWN*/
	AFloat	RoadSlopeDistanceMatrix[10];                /*0-629:VALID 630:UNKNOWN*/
	AInt8U	RoadSlopeMatrixSize;          /*Number of all slope points in 300m*/
	AInt16U TrafficSignDistance;               /*0-629:VALID 630:UNKNOWN*/
	AInt8U  TrafficSignValue;                  /*0-254:VALID 255:UNKNOWN*/

	AInt8U  WeatherType;
	AInt8   Temperature;                  /*-63：(-∞,-63]  -62:-62 ... 62:62   63:[63,+∞) 127： (Invalid/Unkown)*/
	AInt16U TrafficJamDistance;           /*0-629:VALID 630:UNKNOWN*/   /*Distance from congested road ahead*/
	AInt16U TrafficJamDistanceHold;      /*0-629:VALID 630:UNKNOWN*/   /*Continuous distance of congested road ahead*/
	AInt16U RepairRoadPointDistance;     /*0-629:VALID 630:UNKNOWN*/    /*Distance from road repair point ahead*/
	AInt16U CtrlPointDistance;          /*0-629:VALID 630:UNKNOWN*/    /*Distance from front control point*/
	AInt8U  FuncRoadClass;            /*0:Unknown 1:High way 2:Express way 3:National road 4:Province road/County Road 5:Main road 6:Secondary Road/Township Road/Normal Road/County Rural Interior Road/Avenue*/
	AInt8U  BuildUpArea;             /*0x0: Not built-up area. 0x1: built-up area. 0x2: Unknown 0x3: N/A*/   /*b_is_city */
	AInt16U CmplxInsctDistance;          /*0-629:VALID 630:UNKNOWN*/
	AInt16U CountryCode;                /*ISO 3166-1 Release 2007-03  0X0: Unknown*/
	AInt8U  Stub_Type;                   /*1:split 2:merge 0:ivalid*/
	AInt8U  StubRamp_Dir;               /*1:left 2:right 0:unknown*/
	AInt8U  Ramp_Type;                  /*1:main to ramp 2:main split 3:ramp split 4:ramp to main 5:merge exist 0:unknown*/
	AInt8U  OnNavPath;                  /*0:not on nav path 1: on nav path 2:unknown*/
} HWAEHRPack;

/*
0:Sunny/Clear
1:Cloudy
2:Few Clouds
3:Partly Cloudy
4:Overcast
5:Windy
6:Calm
7:Light Breeze
8:Moderate/Gentle Breeze
9:Fresh Breeze
10:Strong Breeze
11:High Wind, Near Gale
12:Gale
13:Strong Gale
14:Storm
15:Violent Storm
16:Hurricane
17:Tornado
18:Tropical Storm
19:Shower Rain
20:Heavy Shower Rain
21:Thundershower
22:Heavy Thunderstorm
23:Hail
24:Light Rain
25:Moderate Rain
26:Heavy Rain
27:Extreme Rain
28:Drizzle Rain
29:Storm
30:Heavy Storm
31:Severe Storm
32:Freezing Rain
33:Light Snow
34:Moderate Snow
35:Heavy Snow
36:Snowstorm
37:Sleet
38:Rain And Snow
39:Shower Snow
40:Snow Flurry
41:Mist
42:Foggy
43:Haze
44:Sand
45:Dust
46:Duststorm
47:Sandstorm
48:Hot
49:Cold
50:冰粒 ice
51:冰针 ice
52:冰雹 ice
53:雷暴 thunder
54:雷电 thunder
55-126:Reserved
127:Unknown
*/
typedef enum _tag_RoadObjType1 {
	RED_LIGHT = 1,
	YELLOW_LIGHT,
	GREEN_LIGHT,
	TRAFFIC_SIGN,
	ARROW,
	TEXT
} RoadObjType1;

typedef struct _tag_RoadObj1 {
	RoadObjType1 enObj;
	ADouble dDis;
} RoadObj1;

typedef enum _tagRoadObjType2 {
	TOLL,
	BRIDGE,
	WARNING_DIS,
	FILL_DIS,
	SPEED_DOWN_DIS,
	VARY_BOARD
} RoadObjType2;

typedef struct _tag_RoadObj2 {
	RoadObjType2 enObj;
	ADouble dDis;
} RoadObj2;

typedef enum _tag_TunnelInfo {
	TUNNEL_DEFAULT = 0,
	TUNNEL_ENTRANCE,
	TUNNEL_EXIT
} TunnelInfo;

typedef enum _tag_TolllInfo {
	TOLL_DEFAULT = 0,
	TOLL_ENTRANCE,
	TOLL_EXIST
} TollInfo;

typedef enum _tag_CurrnetLaneType {
	DEFALUT = 0,
	CLT_NORMAL,
	CLT_ON_RAMP,
	CLT_OFF_RAMP,
	CLT_CONNECT_RAMP,
	CLT_PARALLEL_LANE,
	CLT_ACCELERATE,
	CLT_ENTRY,
	CLT_DECELERATE,
	CLT_EXIT,
	CLT_EMERGENCY_PARKING_STRIP,
	CLT_EMERGENCY,
	CLT_DIVERSION
} CurrnetLaneType;

typedef enum _tag_GPSLocationStatus {
	LOC_STS_NO_GNSS = 0,
	LOC_STS_2D,
	LOC_STS_3D,
	LOC_STS_SBAS,
	LOC_STS_R7D,
	LOC_STS_STAR,
	LOC_STS_FRTK,
	LOC_STS_RTK
} GPSLocationStatus;

typedef enum _tag_EMER_LANE_EXIST {
	EMER_DEFALUT = 0,
	EMER_NOT_EXIST,
	EMER_EXIST
} EMER_LANE_EXIST;

typedef struct _tag_RoadMsg {
	AInt32 nLaneNum;
	AInt32 nLaneID;
	ADouble dHor;
	AInt bIsEmerLaneExist;
	ADouble dEmerLaneWidth;
	AInt bIsTempParkingZoneExist;
	ADouble dTempParkingZoneWidth;
	CurrnetLaneType enLaneTypeCur;
	ADouble dVehiSpeed;
	AInt32 nLocStatus;
	TunnelInfo tunnelInfo;
	ADouble dTunnelDis;
	TollInfo tollInfo;
	ADouble dTollDis;
	RoadObj1 roadObj1[4];
	RoadObj2 roadObj2;
	ADouble dDriveAngel;
	AInt32 nTrafficSign;
} RoadObjMsg;

#endif /* _HWA_ROAD_EHR_PACK_H_ */
