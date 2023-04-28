function [TarSteerAngle,SteerAngleCenter,TarSteerAngleEnd,Xn,Yn,Yawn,Num,J,Jr1,Jr2,Jq] = ...
    TarSteerAngleCalc_MPC(vRef,axRef,tDeltaEPS,SteerAngle,SteerRatio,MaxHeadingAngle,...
    y_I,hVal_I,preDis,SteerAngleMax,R1,R2,Q,...
    LineValid,A3,A2,A1,A0,TarSteerAngleK1,TarSteerAngleSlope)

StrToWhlFac = SteerRatio*57.3;
dxOffset = 2.1;
SteerAngleDt = 15;
VxMa = zeros(50,1);
TarSteerAngle = single(0);
SteerAngleCenter =single(0);
TarSteerAngleEnd =single(0);
J = zeros(51,2);
Jr1 = zeros(51,2);
Jr2 = zeros(51,2);
Jq = zeros(51,2);
Num = 0;
Xn = 0;
Yn = 0;
Yawn = 0;
% tDeltaEPS = 0.2;

if LineValid
    % 50 Calculate Cycle
    tStep = 0.05;
    disStep = preDis/50;
    
    for j=1:2
        SteerAngleMa = zeros(51,50);%方向盘角度矩阵
        YawMa = zeros(51,50);%朝向角矩阵
        YawRateMa = zeros(51,50);%朝向角变化率（横摆角速度）
        YiMa = zeros(51,50);%X纵向坐标
        XiMa = zeros(51,50);%y横向坐标
        yValid = true(51,1);%角度有效性
        Jmin = -1;
        Num = 0;
        
        for k=1:51 %两个大循环，第一个循环计算出大概角度，第二个循环在第一个角度附近进行寻优
            if j==1
                SteerAngleRaw = -SteerAngleMax + SteerAngleMax*(k-1)/25; %51个方向盘角度[]
            else
                SteerAngleRaw = SteerAngleCenter - SteerAngleMax/10 + SteerAngleMax/10*((k-1)/25);
            end
            
            if disStep<tStep*(vRef + 0.5*axRef)    %  tStep  Control %往前规划50步，如果规划距离的1/50，小于tStep内车辆往前走的距离，（由于车辆总是存在加速度，所以此处考虑了让车辆按
																	 %0.5S速度变化后的速度，作为这段距离的均匀速度，然后按计算的均匀速度*tStep）
                temp1 = round(preDis/((vRef + 0.5*axRef)*tStep)); 	 %通过规划的距离/tStep内车辆往前走的距离 计算规划距离内共存在多少个点，然后进行限制，最多49步。
                t_Start = max(min(49,temp1-5),1); % 该处计算末尾几个点与目标点的误差，49个点以内，计算末尾5个点与目标线的误差，超过49计算最后一个点，第49个点与期望线的距离误差
                t_End = max(min(49,temp1),1);	 %如果车速比较快，行驶单位距离比较大，那么规划的点数可能会少于49个点，例如：temp1 = 20 ，那么t_start = 15 t_End =20
                SteerAngleMa(k,1) =  TarSteerAngleK1; % 将上一时刻的目标角度放在SteerAngleMa的第一列
                for i=2:50
                    if SteerAngleRaw>TarSteerAngleK1  %计 -10
                        SteerAngleMa(k,i) = TarSteerAngleK1 + tStep*(i-1)*SteerAngleDt; % 按着斜率往左打方向盘，SteerAngleRaw可理解为一个方向。
                        SteerAngleMa(k,i) = min(SteerAngleMa(k,i),SteerAngleRaw);
                    else
                        SteerAngleMa(k,i) = TarSteerAngleK1 - tStep*(i-1)*SteerAngleDt;
                        SteerAngleMa(k,i) = max(SteerAngleMa(k,i),SteerAngleRaw);
                    end
                end
                VxRef = vRef + tDeltaEPS*axRef; %tDeltaEPS时间内车速变化量
                AckConst = min((1+VxRef*VxRef/(26*26))*2.68/max(1,VxRef),32767); %26为特征车速 转向灵敏度计算（汽车理论第五章147页），目的计算横摆角速度
                YawMa(k,1) = tDeltaEPS*SteerAngle/(AckConst*StrToWhlFac);%按当前方向盘转角，推算第一个点的位置坐标
                XiMa(k,1) = tDeltaEPS*VxRef*cos(YawMa(k,1));
                YiMa(k,1) = tDeltaEPS*VxRef*sin(YawMa(k,1));
                
                uDelta = SteerAngleMa(k,3) - SteerAngleMa(k,1);
                
                for i=1:t_End % 循环遍历规划点数，同时计算每个点的坐标位置
                    VxMa(i) = VxRef + min(tStep*(i-1),1.2)*axRef;
                    AckConst = min((1+VxMa(i)*VxMa(i)/(26*26))*2.68/VxMa(i),32767);
                    YawRateMa(k,i) = SteerAngleMa(k,i)/(AckConst*StrToWhlFac);
                    
                    YawMa(k,i+1) = YawMa(k,i) + YawRateMa(k,i)*tStep;% 计算朝向角
                    if (YawMa(k,i+1)>pi/4)||(YawMa(k,i+1)<-pi/4)
                        yValid(k) = false;
                    else
                        XiMa(k,i+1) = XiMa(k,i) + VxMa(i)*cos(YawMa(k,i))*tStep;% 计算X坐标
                        YiMa(k,i+1) = YiMa(k,i) + VxMa(i)*sin(YawMa(k,i))*tStep;% 计算Y坐标
                        
                        if (i>t_Start)&&(i<=t_End) %如果点数到了末尾最后几个点，那么开始计算与参考线的距离
                            dx = XiMa(k,i+1) + dxOffset*cos(YawMa(k,i+1)); % 计算前轴的纵向坐标
                            dy = YiMa(k,i+1) + dxOffset*sin(YawMa(k,i+1)); % 计算前轴的横向坐标
                            dyRef = A3*dx^3 + A2*dx^2 + A1*dx + A0;			% 计算参考线上参考点的横向坐标
                            AngleRef = atan(3*A3*dx^2 + 2*A2*dx + A1);		% 计算参考线上参考点的参考朝向角，此处参考线的朝向角是基于纵轴的角度即X轴。
                            
                            preDy = min(max((dyRef - dy)*cos(AngleRef),-5),5); %与参考线上参考点的垂向距离
                            
                            if preDy>=0
                                TarHeadAngle = interp1(y_I,hVal_I,preDy,'linear')*MaxHeadingAngle;  % 根据横向距离的大小，查表得到一个希望的目标朝向角(此处朝向角应理解为与目标线的角度),这个位置是模仿换道过程，
																										%在换道中间时刻，1.8m处朝向角最大，在3.6m与0m处朝向角都较小
                            else
                                TarHeadAngle = -interp1(y_I,hVal_I,abs(preDy),'linear')*MaxHeadingAngle;
                            end
                            Jr1(k,j) = R1*(dy - dyRef)^2;
                            Jr2(k,j) = R2*(57.3*(YawMa(k,i+1) - AngleRef) - TarHeadAngle)^2; %计算损失
                            J(k,j) = J(k,j) + Jr1(k,j) + Jr2(k,j);
                        end
                    end
                end
                Jq(k,j) = Q*uDelta^2;
                J(k,j) = J(k,j) + Jq(k,j);
            else %如果规划距离的1/50，大于tStep内车辆往前走的距离，那么往前规划30个点，同时开始从15个点开始计算往后点的损失值
                t_Start = 15;     
                t_End = single(30);
                
                if vRef>0.1 %车辆运动
                    tDelta = disStep/vRef; %两规划点之前的时间
                    SteerAngleMa(k,1) =  SteerAngle; %将当前方向盘转角放第一列，与上边不一样，上边是将上一时刻的目标角放第一列
                    for i=2:31 %从第二个点开始按一定的斜率计算后边每点处的方向盘转角
                        if SteerAngleRaw>SteerAngle
                            SteerAngleMa(k,i) = SteerAngle + tDelta*(i-1)*SteerAngleDt;
                            SteerAngleMa(k,i) = min(SteerAngleMa(k,i),SteerAngleRaw);
                        else
                            SteerAngleMa(k,i) = SteerAngle - tDelta*(i-1)*SteerAngleDt;
                            SteerAngleMa(k,i) = max(SteerAngleMa(k,i),SteerAngleRaw);
                        end
                    end
                else %车辆静止
                    for i=1:31
                        SteerAngleMa(k,i) =  SteerAngleRaw;
                    end
                end
                
                YawMa(k,1) = tDeltaEPS*vRef*tan(SteerAngle/StrToWhlFac)/2.68; %曲率K = a/s，根据当前方向盘转角往前推算一个点的位置和朝向角
                XiMa(k,1) = tDeltaEPS*vRef*cos(YawMa(k,1));
                YiMa(k,1) = tDeltaEPS*vRef*sin(YawMa(k,1));
                
                uDelta = SteerAngleMa(k,3) - SteerAngleMa(k,1);
                
                for i=1:t_End
                    t_kap = tan(SteerAngleMa(k,i)/StrToWhlFac)/2.68;%求曲率
                    YawMa(k,i+1) = YawMa(k,i) + disStep*t_kap;
                    if (YawMa(k,i+1)>pi/4)||(YawMa(k,i+1)<-pi/4) % 如果往后推算一个点的朝向角大于45°，则抛弃该转角
                        yValid(k) = false;
                    else
                        XiMa(k,i+1) = XiMa(k,i) + disStep*cos(YawMa(k,i));
                        YiMa(k,i+1) = YiMa(k,i) + disStep*sin(YawMa(k,i));
                        
                        if (i>t_Start)&&(i<=t_End)
                            dx = XiMa(k,i+1) + dxOffset*cos(YawMa(k,i+1));%从后轴中点，反算质心置坐标
                            dy = YiMa(k,i+1) + dxOffset*sin(YawMa(k,i+1));
                            dyRef = A3*dx^3 + A2*dx^2 + A1*dx + A0;
                            AngleRef = atan(3*A3*dx^2 + 2*A2*dx + A1);
                            
                            preDy = min(max((dyRef - dy)*cos(AngleRef),-5),5);
                            
                            if preDy>=0
                                TarHeadAngle = interp1(y_I,hVal_I,preDy,'linear')*MaxHeadingAngle;
                            else
                                TarHeadAngle = -interp1(y_I,hVal_I,abs(preDy),'linear')*MaxHeadingAngle;
                            end
                            
                            Jr1(k,j) = R1*(dy - dyRef)^2;
                            Jr2(k,j) = R2*(57.3*(YawMa(k,i+1) - AngleRef) - TarHeadAngle)^2;
                            
                            
                            J(k,j) = J(k,j) + Jr1(k,j) + Jr2(k,j);
                        end
                    end
                end
                Jq(k,j) = Q*uDelta^2;
                J(k,j) = J(k,j) + Jq(k,j);
            end
            if (yValid(k)==true)
                if Jmin<0
                    Jmin = J(k,j);
                    Num = k;
                elseif J(k,j)<Jmin
                    Jmin = J(k,j);
                    Num = k;
                end
            end
        end
        if j==1
            SteerAngleCenter = -SteerAngleMax + SteerAngleMax*(Num-1)/25;
        else
            
            temp1 = SteerAngleMa(Num,2) - SteerAngleMa(Num,1);            
%             if vRef<8
%                 A = [0,8];
%                 B = [1,0.4];
%                 Fac = interp1(A,B,vRef,'linear');
%             else
%                 Fac = single(0.4);        %xia注释，速度影响
%             end       
                Fac = single(0.4);

            TarSteerAngle = SteerAngleMa(Num,1)+ Fac*temp1;

            TarSteerAngle = min(TarSteerAngleK1 + TarSteerAngleSlope,max(TarSteerAngleK1 - TarSteerAngleSlope,TarSteerAngle));
            TarSteerAngleEnd = SteerAngleCenter - SteerAngleMax/10 + SteerAngleMax*(Num-1)/250;
            Xn = XiMa(Num,t_End);
            Yn = YiMa(Num,t_End);
            Yawn = YawMa(Num,t_End);
        end
    end
else
    TarSteerAngle = SteerAngle;
    SteerAngleCenter = SteerAngle;
    TarSteerAngleEnd = SteerAngle;
    Xn = 0;
    Yn = 0;
    Yawn = 0;
end
end

