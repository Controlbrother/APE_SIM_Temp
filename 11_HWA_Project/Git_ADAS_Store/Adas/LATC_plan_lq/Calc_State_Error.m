function [matrix_state,ref_curvature,idx] = Calc_State_Error(VehSpd,yawrate,GlobalTrajectory,Preview_time,NumTarpoints)
 matrix_state = single(zeros(6,1));   %定义状态矩阵
% 计算预瞄点索引号

if  VehSpd >= 0 && VehSpd < 12.5
    L_Forward_Dis = Preview_time * VehSpd;%10,6
elseif VehSpd >= 12.5 && VehSpd < 25   %VehSpd >= 12.5 && VehSpd < 25
    L_Forward_Dis = Preview_time * VehSpd;
else
    L_Forward_Dis = Preview_time * VehSpd;%25,7.5
end
% 确定轨迹点间的步长
Step_temp = abs(GlobalTrajectory(1).Trajectory(end,2) - GlobalTrajectory(1).Trajectory(1,2))/NumTarpoints;   %纵向距离除以离散点数 即每两个轨迹点之间的距离
idx = find( GlobalTrajectory(1).Trajectory(:,2) >= L_Forward_Dis  & GlobalTrajectory(1).Trajectory(:,2) <= (L_Forward_Dis+(5*Step_temp)) , 1, 'first');  %返回第一个非零值的位置
if isempty(idx)   %isempty函数用于判断是否为空
    idx = 2;
else
    idx = idx(1,1);
end

% 计算状态误差
dx = single(zeros(1,1));dy = single(zeros(1,1));dtheta = single(zeros(1,1));theta_des = single(zeros(1,1));radius_des = single(zeros(1,1));
dx=0-GlobalTrajectory(1).Trajectory(idx,1);
dy=0-GlobalTrajectory(1).Trajectory(idx,2);
dtheta=pi/2-GlobalTrajectory(1).Trajectory(idx,3);
theta_des=GlobalTrajectory(1).Trajectory(idx,3);         %弧度
radius_des = 1/GlobalTrajectory(1).Trajectory(idx,4);    %半径
ref_curvature = GlobalTrajectory(1).Trajectory(idx,4);   %曲率
% 期望速度
v_des = VehSpd; 
% 当前转向角速度
angular_v = yawrate;
% 期望转向角速度
angular_v_des=v_des*(1/radius_des);
if angular_v_des < 0.01
    angular_v_des=single(0);
end
one_min_k=1-GlobalTrajectory(1).Trajectory(idx,4);   %曲率
if one_min_k<=0
    one_min_k=single(0.01);
end

% lateral error
matrix_state(1,1)=dy*cos(theta_des)-dx*sin(theta_des);%左正右负
% lateral error rate
matrix_state(2,1)=VehSpd*sin(dtheta);
% heading error
matrix_state(3,1)=angle_normalization(dtheta); %
% heading error rate
matrix_state(4,1)=angular_v-angular_v_des;
% station error
matrix_state(5,1)=-(dx*cos(theta_des)+dy*sin(theta_des));
% speed error
matrix_state(6,1)=v_des-VehSpd*cos(dtheta)/one_min_k;
end
function angle_norm = angle_normalization(angle_origin)
% 将角度的取值范围标准化到[-pi, pi]
% 输出:
% angle_norm    : 标准化后的角度值,[-pi, pi]
% 输入:
% angle_origin  : 原始角度值，[-2*pi, 2*pi]

if angle_origin > pi
    angle_norm = angle_origin - 2 * pi;
    
elseif angle_origin < -pi
    angle_norm = angle_origin + 2 * pi;
    
else
    angle_norm = angle_origin;
end
end
