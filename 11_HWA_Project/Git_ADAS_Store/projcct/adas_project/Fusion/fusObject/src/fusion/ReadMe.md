Date: 2020/11/24
Version:V4.01.7
Author: GW_HWA_FUSION_GROUP

1. UPDATE dlls for RSDS radar analysis tools.
2. ADD support for unit test.
3. FIX missed object in the bounding box object output error introduced by a for loop bad operation.
4. FIX default float data to 0 if data validater is invalid.


Date: 2020/11/23
Version:V4.01.6
Author: GW_HWA_FUSION_GROUP

1. FIX camera lateral velocity error.
2. ADD weight produced by vx speed to solve mismatch of high speed object.


Date: 2020/11/19
Version:V4.01.5
Author: GW_HWA_FUSION_GROUP

1. ADD weight reshape by orientation, heading and speed. Generally, if orientation is crossward, heading is crossward, and if speed is big, the lower weight of dy and vy.
2. FIX incorperate some suggestions from code verification team.
3. ADD default covariance for kf filter when matching a brand new type of sensor's measurement.
4. FIX enlarge the fusion_config dy and vy threshold to enhance the performance of crossing object assignment.

Date: 2020/11/19
Version:V4.01.5
Author: GW_HWA_FUSION_GROUP

1. ADD relocation of stand camera object reference point by visible side signal and camera move_status.
2. ADD new logic of NOT output non-camera object in one camera-based track's camera bounding box. This method will reduce the splitter of mm-wave radar output.
3. FIX bug of merge tracks logic of continuous merge tracks with different match status.
4. ADD new camera member is_very_close to camera data structure.
5. ADD reference point relocation based on heading angle.

Date: 2020/11/18
Version:V4.01.4
Author: GW_HWA_FUSION_GROUP

1. FIX timestamp error which results an unupdated track bug. ONLY update fusion_track_frame_.stamp when timestamp is correct.
2. FIX orientation output to unified enum type.
3. ADD distinct weight of cost calculation by object type.
4. ADD measurement noise update protection of 0 covariance.

Date: 2020/11/17
Version:V4.01.3
Author: GW_HWA_FUSION_GROUP

1. FIX use fixed covariance to calculate cost instead since the input covariance of camera is very small.
2. ADD new global variable DTC_counter to trace the each important function performance.
3. ADD new cost calculation logic in sensor to track fusion and track to track fusion. If they have similar properties, reduce the cost.
4. FIX enlarge exist probability based on camera object age.
5. FIX cost calculation based on dx. 

Date: 2020/11/16
Version:V4.01.2
Author: GW_HWA_FUSION_GROUP

1. FIX radar type and orientation input error from old hash unclear kind to a direct version.
2. FIX RUN_TEST_CASE to macro define in project to avoid duplicate fix back and forth.
3. FIX take camera std pos and vel into account when calculating measurement noise.
4. DELETE type definition in base_type.h. Use common and standard definition.
5. FIX definition of variable to unified version.
6. FIX obstacle probability equals to 0 error.An output type error has been fixed.
7. UPDATE code to support the lastest test case engine.
8. FIX track type error by committing clone camera or radar object pointer before GetTrackAllProperties.


Date: 2020/11/13
Version:V4.01.1
Author: GW_HWA_FUSION_GROUP

1. FIX MAX_COAST_AGE to a bigger value to reduce track lost at large amount of sensors input.
2. FIX untracked track update method when sensor losing original ID of track.
3. ADD track exist probability judgement function.
4. DELETE unused radar_type member from track struct.
5. FIX move_status output hash error by directly ouput track move_status.
6. ADD more camera object properties to improve track's existing prob and obstacle prob confidence.

Date: 2020/11/12
Version:V4.01.0
Author: GW_HWA_FUSION_GROUP

1. ADD support of sensor ID check function in test cases.
2. ADD kalman filter for each single type of sensor.
3. ADD check items of object properties in test cases.
4. DELETE unused struct member in camera object and radar object.
5. FIX to multiple radar object pointers in each track points to different types of radar object. 


Date: 2020/11/11
Version:V4.00.2
Author: GW_HWA_FUSION_GROUP

1. ADD pointer to CR_L, CR_R, RSDS_L, RSDS_R object in track's structure.
2. FIX camera object age type to unsigned int16 and obtain it from EQ4 message directly.
3. ADD data_valid check of camera input data from EQ4.
4. FIX size3D definition of objects and track to length, width and height properties.
5. ADD track to track fusion if a pair of matched tracks holds different types of radar measurement. 

Date: 2020/11/10
Version:V4.00.1
Author: GW_HWA_FUSION_GROUP

1. FIX test case support with .csv test case files. 
2. ADD weight for MRR, CR, and RSDS radar sensors. use different weight to adapt large measurement covariance for CR and RSDS radars. 


Date: 2020/11/9
Version:V3.05.2
Author: GW_HWA_FUSION_GROUP

1.FIX tune CAMERA_ASSIGN_COST and MRR_Y_WEIGHT to fix merge problem of one single target with multiple sensors' measurement.
2.FIX logic bug of updating track coasting source when deleting id from track at check_XX_assignment.
3.FIX logic bug of kf filter intialization at merge tracks.
4.DELETE cost_matrix.c and .h file, move global variable cost_matrix to cal_cost.c.
5.DELETE uninvoked cost_of_track_to_camera and cost_of_track_to_radar function.

Date: 2020/11/5
Version:V3.05.1
Author: GW_HWA_FUSION_GROUP

1. FIX track.max_y_diff =0.6 for MRR radar config and match_status transsion condition by if radar id is INVALID.
2. ADD fused track object moving status judgement and confidence level.
3. ADD fused track object type status judgement and confidence level.

Date: 2020/11/4
Version:V3.05
Author: GW_HWA_FUSION_GROUP

1. ADD test case support which enable automatically running the hundreds of test cases.

Date: 2020/11/3
Version:V3.04.7
Author: GW_HWA_FUSION_GROUP

1. FIX track id index invoked error at fuse_tracks.This bug could lead to reduction of track to track fusion.
2. FIX fusion config parameters and cost weight.
3. FIX CR and RSDS stuct info addition of accel and accelStd bug.
4. FIX logic bug of track to track fusion. if a fusion's status 'N', it doesn't fuse with other tracks; if this fusion's status is 'U', this track starts fuse with 
   other tracks even if it's duration is smaller than the max_ob_duration.
5. FIX logic bug of track to track fusion. Do not fuse very brand new pure camera track since it's covariance is copied from camera object and it's often too big
   which makes the cost dramatically small compared to usual values.
   

Date: 2020/11/2
Version:V3.04.6
Author: GW_HWA_FUSION_GROUP

1. FIX fusion_config max diffrence in multiple dimensions to reduce wrong fusion of camera to tracks.
2. FIX enlarge the max obstacle number to 80. This could possible lead to assert error of extending tracks number out of memory limit.
3. FIX if circular id buffer is full, program will not try to create new track at all and return an error code. This protection method will not trigger 
   any assert error in the following several lines.
4. FIX merge_tracks properties exchange judgement. Add new logic of circumstance that track is fused by two coasting tracks.
5. FIX update_track_para function with condition that this is a pure coasting track. 


Date: 2020/10/31
Version:V3.04.5
Author: GW_HWA_FUSION_GROUP

1. FIX simulated input data from MF4 file contains null data and null camera frame stamp error by given a virtual time stamp after
   radar time stamp is valid.


Date: 2020/10/29
Version:V3.04.4
Author: GW_HWA_FUSION_GROUP

1. FIX wrong adapter selection.change input socket to lastest autosar version.
2. FIX delete unused ros related functions.
3. FIX input data frame time stamp error. This will lead to a corruption.
4. FIX update track move status from object move status when updating track by measurement.
5. FIX put camera, radar id of tracks in fuse_track output structure for observation convenience.


Date: 2020/10/28
Version:V3.04.3
Author: GW_HWA_FUSION_GROUP

1. FIX run prepare_fusion_track_for_camera before update_fusion_track_from_camera. or this will generate a out of range edition of memory and destroy other memory data. 
2. FIX the input covariance of radar contains 0 and this leads to error of invert matrix calculation. fix it by giving a fixed value if input is 0. 
3. FIX delta_t too large at the beginning of running error. limit delta_t to a reasonable value.
4. ADD selection of input with the observation start time. save time and save life.

Date: 2020/10/27
Version:V3.04.2
Author: GW_HWA_FUSION_GROUP 

1. DELETE all the while loops when visitting id of track but using id_array instead.
2. FIX refreshing track parameter after kf filter prediction. Also update kf data after untracked prediction and ego motion compensation.
3. FIX updating the kf_filter no mater whether the delta_t is small or negative.



Date: 2020/10/26
Version:V3.04.1
Author: GW_HWA_FUSION_GROUP 

1. UPDATE reduce coefficient of state varaibles when calculating cost of track to track.
2. FIX do NOT take new tracks into consideration when fusing track to track since the covariance is much bigger and leads to small cost.



Date: 2020/10/21
Version:V3.04.0
Author: GW_HWA_FUSION_GROUP 

1. ADD coasting_source member to struct FusionTrack to trace the last match sensor type.
2. UPDATE rewrite fusion_track_filter.c and .h to support double kf filter function.
3. ADD vehicle_dynamic to deal with vehicle compensation when output object fusion information.
4. FIX log control by macro LOG_SWITCH, LOG_MATCH, LOG_KF_FILTER, BLOCK_FRAME and BLOCK_COST.
5. FIX wrong camera measurement noise used for mal cost calculation in mal_dist.c.
6. ADD losing camera or radar id gradully logic by reduce camera_age or radar age until them reach zero, and them seprate their id from track.
7. when reach the moment of break one sensor ID from one track, delete the one has smaller age.


日期：2020/10/21
版本：V3.03.5（test）
作者：目标融合组
1.封装接口
2.添加遮挡
3.加入校验数据IsDataCorrect
4.添加判断，防止id重复
5.时间补偿（仅补偿0.05s）
6.固定id
7.更新camera的存在概率和成为障碍物的概率
8.输出前对融合输出变量进行初始化
9.融合输出的单雷达目标类型错误需要修改（雷达的未知对应融合的未知）
10.摄像头直接赋值，去除410转换
11.摄像头heading角转换
12.去掉 摄像头 assign_by_radar_id的visited_flags_[object_idx] |= OBJECT_VISITED;后的break
13.修改标定量
14.设置宏常量ISEQF，修改add中添加摄像头传感器目标个数，
15.修改内部存储的摄像头传感器的最大个数为20；
16.修改heading角对静止目标的噪声滤波

Date: 2020/10/19
Version:V3.03.4
Author: GW_HWA_FUSION_GROUP 

1. FIX uninitialized P_prior bug when tracks created. 
2. FIX id and idx citation at fuse_tracks especially for remove pure camera tracks.
3. FIX clear track_camera_frame_ after print track's info with correction.
4. FIX citation overflow bug at kf_predict_all_tracks.
5. UPDATE mk_minimize with parameter of ASSIGN_COST.Try to judge the necessity of calculation by categaries and reduce calculation.
6. UPDATE delay of changing match status by one period of sensor measurement to prevent match status jump back and forth.
7. FIX when committing tracks fusing, the fused track's id should be the one with bigger age. 


Date: 2020/10/17
Version:V3.03.3
Author: GW_HWA_FUSION_GROUP / Feng Bin
1. FIX check radar id assignment exist and obstacle probability running bug. 


Date: 2020/10/16
Version:V3.03.2
Author: GW_HWA_FUSION_GROUP / Feng Bin
1. FIX SEPERATE_COST to CAMERA_SEPERATE_COST and RADAR_SEPERATE_COST. 
2. FIX ASSIGN_COST to CAMERA_ASSIGN_COST, RADAR_ASSIGN_COST and TRACK_ASSIGN_COST. 
3. FIX bug in get_camera_object_frames circular buffer index reference.
4. FIX bug in fuse_track function with id and idx reference.



Date: 2020/10/15
Version:V3.03.1
Author: GW_HWA_FUSION_GROUP / Feng Bin
1. ADD update_track_with_no_correction function to update those tracks cannot match with any sensor measurement.
2. FIX bug introduced by fuse_track function.track will be deleted although it's in the middle of track_frame. When go through all these tracks,
   use track_id comparison and manuplate with the index very carefully.


Date: 2020/10/14
Version:V3.03.0
Author: GW_HWA_FUSION_GROUP / Feng Bin
1. ADD tracks match function. This fuction deals which circumstance that one track holding a pure camera ID and another one holding a pure 
   radar ID whereas these two tracks's object is one object in real world. 
2. ADD mal_dist with cost of track to track.
3. FIX reduce the yawrate in ego motion compensation makes the system has some lag and no over adjustment.
4. FIX adjust max x,y,vx,vy threshold.
5. FIX define ASSIGN_COST and MIN_UNASSIGN_COST. if cost is smaller than  ASSIGN_COST, then assign. 
   if cost is bigger than  SEPERATE_COST, then seperate them.


Date: 2020/10/13
Version:V3.02.3
Author: GW_HWA_FUSION_GROUP / Feng Bin
1. FIX match_status usage of track in several conditions.
2. FIX one track goes to coasting status if match_status equals to MATCH_NONE which means none of it's holding sensor IDs update this track
   in the last report period of each senor.   
3. FIX large amount of "double" to "float" warning.
4. FIX fusion track logger to a seperate file. 
5. FIX several types of warnings to increase safety of code.
6. FIX calculate mal_dist for tracks and camera sensor object for those tracks which only contains camera sensor ids.
7. FIX reduce calculation of mal_dist for those tracks and sensor objects which has x,y,vx,vy difference equals to zero around. 
8. ADD coefficient of distance when evaluating the x_diff, y_diff, vx_diff and vy_diff of before real cost calculation.
9. FIX commit kf_predict before match object frame.
10. ADD compensation of ego vehicle dynamic rotation to kf prediction of each track. This will lead to better fusion result of remote object. 
11. FIX bug of not update the properties of track but only that of radar_kf_data.
12. FIX correction part error in kf. former version leads to wrong predicted result.
13. FIX matrix multiplicaiton of vector to increase efficiency.


Date: 2020/10/11
Version:V3.02.2
Author: GW_HWA_FUSION_GROUP
1. UPDATE to V3 socket of 2020/10/10 MDF_player code. 
2. FIX camera object missing bug which is introduced by struct definition of unsigned int64 to 32 transmission.


Date: 2020/10/09
Version:V3.02.1
Author: GW_HWA_FUSION_GROUP
1. Update to V3 socket. 
2. ADD "mf4FilePath" to the project to record individual mf4 files path. Edit this file to select different mf4 file.


Date: 2020/09/30
Version:V3.01.2
Author: GW_HWA_FUSION_GROUP
1. ADD "duration" and "observation" to propertis of tracks. prepare basic data structure for tentative "New" track to "Update" track transmission.
2. ADD tentative "NEW" track to "Update" track transmission depending on N oberservations out of M durations.


Date: 2020/09/30
Version:V3.01.1
Author: GW_HWA_FUSION_GROUP
1. ADD mal_dist.c to calculate Mahalanobis distance when generating the cost matrix.
2. FIX split fusion_matcher.c to assignment.c and new fusion_matcher.c
3. ADD track coasting if one track is not matched with any object. commit prediction by kf filter
4. FIX covariance of camera and MMR to a fixed reasonable value. if sensors can output real result, this number need to be updated.
5. ADD LOG_MATCH macro definiton to log fusion key point. 
6. FIX radar struct radar id. each radar type only contains one id.
7. ADD check match cost value before committing an id assignment for both radar and camera. If good, continue id assignment; if bad, delete this id from track sensor id list.
8. FIX circular buffer increment error. radar frame feed in correctly even if circular buffer is not full.
9. FIX kf_prediction committed two times error when updating coasting track.

