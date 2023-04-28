classdef TrajectoryGeneratorFrenet < handle
    %#code
    %UNTITLED 此处显示有关此类的摘要
    %   此处显示详细说明
    properties
        %ReferencePath Reference path for generated trajectories
        %   A referencePathFrenet object used to map trajectories generated
        %   between Frenet states into the global coordinate system.
        ReferencePath  

    end
    
    methods
        function obj = TrajectoryGeneratorFrenet(referencePath)
            obj.ReferencePath = referencePath;
        end
        % 横纵向同时规划
        function [frenetTrajectory,globalTrajectory,numTraj] = FrenetTrajectory(obj,initialState,arcLenOffsets,lateralDeviation,LongTermState,LaterlTermState,timeSpan,FtNumTarpoints)
            %METHOD1 此处显示有关此方法的摘要
            %   initState = [ 0 0 0 0 0 0]; % [S ds ddS L dL ddL]
            %   termState = [30 0 0 0 0 0]; % [S ds ddS L dL ddL]
            %   timeSpan  a span of time
            
            % Generate trajectory in Frenet coordinates
            
            [InitialState,TerminalState,Tf,numTraj] = TrajectoryGeneratorFrenet.TrajStateCombination(initialState,arcLenOffsets,lateralDeviation,LongTermState,LaterlTermState,timeSpan);
            
            % frenetTrajectory = obj.connectPairs(initialState, terminalState, obj.TimeResolution, timeSpan);
            NumTarpoints = single(FtNumTarpoints);%定义轨迹的输出点数
            frenetTrajectory = obj.connectPairs(InitialState,TerminalState,Tf,NumTarpoints);
            
            traj = single(zeros(NumTarpoints,6)); t= single(zeros(NumTarpoints,1)); costs = single(zeros(1,1));
            globalTrajectory = repmat(struct('Trajectory',traj,'Times',t,'costs',costs), numel(frenetTrajectory), 1);
            for i = 1:numel(frenetTrajectory)
                globalTrajectory(i).Times = frenetTrajectory(i).Times;
                globalTrajectory(i).Trajectory = obj.ReferencePath.frenet2global(frenetTrajectory(i).Trajectory);
            end
%             globalTrajectory = obj.ReferencePath.frenet2global(frenetTrajectory);
        end
        % 单横向规划、规定好纵向规划距离
        function [frenetTrajectory,globalTrajectory,numTraj] = FrenetTrajectory_Lateral(obj,initialState,arcLenOffsets,lateralDeviation,FtNumTarpoints,GtNumTarpoints) 
            [InitialState,TerminalState,numTraj] = TrajectoryGeneratorFrenet.TrajStateCombination_Lateral(initialState,arcLenOffsets,lateralDeviation);
            % 因为横向规划，终点期望都是与目标线相切，因此终点Δθ=0
            NTarpoint = single(FtNumTarpoints);%定义输出的规划点数
            traj = single(zeros(NTarpoint,4));
            s = single(zeros(1,1));
            d = single(zeros(1,1)); 
            frenetTrajectory = repmat(struct('Trajectory',traj,'s',s,'d',d), numTraj, 1);
            for trajIdx = 1:numTraj
                coefficients = TrajectoryGeneratorFrenet.computeCubicTrajectory(InitialState(trajIdx,:),TerminalState(trajIdx,:)); 
                %每次只输出n个点
                % s = (ds:ds:ds*(ceil(TerminalState(trajIdx,1)/ds)+1))'-ds;
                s = (linspace(0,TerminalState(trajIdx,1),NTarpoint))';%20个点
                d = coefficients(1) + coefficients(2).* s + coefficients(3).*s.^2 + coefficients(4).*s.^3;
                %为筛选轨迹尝试再Frenet坐标系下平滑，并计算Frenet坐标系下的曲率和曲率变化率
                optPath = TrajectoryGeneratorFrenet.PathSmoothing([s d],0.2,0.2);
                s = optPath(:,1);d = optPath(:,2);
                FTrajSpline = Spline2D(s,d);
                Fcurvature = single(zeros(length(s),1));
                FcurvatureDerivative = single(zeros(length(s),1));
                for i = single(1):single(1):length(s)
                    Fcurvature(i,1) = FTrajSpline.calc_curvature(s(i));
                    FcurvatureDerivative(i,1) = FTrajSpline.calc_curvatureDerivative(s(i));
                end
                %
                frenetTrajectory(trajIdx).Trajectory = reshape([s d Fcurvature FcurvatureDerivative],[],4);
                frenetTrajectory(trajIdx).s = s(end);
                frenetTrajectory(trajIdx).d = d(end);
            end
           globaltraj = single(zeros(NTarpoint,5));
           costs = single(zeros(1,1));
           globalTrajectory = repmat(struct('Trajectory',globaltraj,'costs',costs), numel(frenetTrajectory), 1);
            for i = 1:numel(frenetTrajectory)
                globalTrajectory(i).Trajectory = obj.ReferencePath.frenet2global1D(frenetTrajectory(i).Trajectory,GtNumTarpoints); %此处GtNumTarpoints点数计算目标轨迹的世界坐标
            end
        end
    end
    methods(Access = protected,Static)
         function trajectories= connectPairs(initialState,terminalState,timespan,NumTarpoints)
             % 此处生成终端状态存在问题，需要修改，终端状态与起始状态维度不一样，需要重新定义维度
             % 初步设想是将terminalState的个数与timespan个数相等，即一个轨迹对应一个时间
             numTraj = size(terminalState,1);
%              if numTraj ~= size(initialState,1)
%                  initialState = repmat(initialState, numTraj, 1);
%                  timespan = repmat(timespan, numTraj, 1);
%              end
             longitudinalTrajectories = single(zeros(numTraj,6));
             lateralTrajectories = single(zeros(numTraj,6));
            %生成动态数组声明 
            % 为处理动态数组问题，先规定每次只输出n个轨迹点，因此需要将时间进行n等分；
            NTarpoint = NumTarpoints;%定义输出的规划点数
            traj = single(zeros(NTarpoint,6));
            t = single(zeros(NTarpoint,1));
            jerk = single(zeros(NTarpoint,2));
            trajectories = repmat(struct('Trajectory',traj,'Times',t,'jerk',jerk), numTraj, 1);

            for trajIdx = 1:numTraj
                % Extract longitudinal boundary conditions
                sV0 = initialState(trajIdx,1:3);
                sV1 = terminalState(trajIdx,1:3);
                tFinal = timespan(trajIdx);
                % Fit quintic/quartic polynomial
                longitudinalTrajectories(trajIdx,:) = TrajectoryGeneratorFrenet.QuinticQuarticTrajectory(sV0,sV1,tFinal);
                % Evaluate longitudinal trajectory at evenly spaced intervals wrt time
                % t = (dt:dt:dt*(ceil(tFinal/dt)+1))'-dt;
                t = linspace(0,tFinal,NTarpoint)';
                sV = TrajectoryGeneratorFrenet.evaluate(longitudinalTrajectories(trajIdx,:),[0 1 2], t)';
                sJ = TrajectoryGeneratorFrenet.evaluate(longitudinalTrajectories(trajIdx,:),3, t)';
                % Extract lateral boundary conditions
                dV0 = initialState(trajIdx,4:6);
                dV1 = terminalState(trajIdx,4:6);
                dsMax = sV(end,1)-sV(1);
                % Fit quintic/quartic polynomial
                lateralTrajectories(trajIdx,:) = TrajectoryGeneratorFrenet.QuinticQuarticTrajectory(dV0,dV1,dsMax);
                % Evaluate lateral trajectory based on arclength
                ds = sV(:,1)-sV(1);
                dV = TrajectoryGeneratorFrenet.evaluate(lateralTrajectories(trajIdx,:),[0 1 2], ds)';
                dJ = TrajectoryGeneratorFrenet.evaluate(lateralTrajectories(trajIdx,:),3, ds)';
                % Combine and populate output struct
                % trajectories = reshape([sV dV sJ dJ t],[],9);
                
                trajectories(trajIdx).Trajectory = reshape([sV dV],[],6);
                trajectories(trajIdx).Times = t;
                trajectories(trajIdx).jerk = reshape([sJ dJ],[],2);
            end
         end    
    end
    methods(Static)
        function[InitialState,TerminalState,Tf,numTraj] = TrajStateCombination(initialState,arcLenDeviation,lateralDeviation,LongTermState,LaterlTermState,timeDeviation)
            % initialState = [0 0 0 0 0 0] 
            % arcLenDeviation = [10; 20; 30];
            % lateralDeviation = [-5; 0; 5];
            % LongTermState = [0 0][SDot SDotDot]
            % LaterlTermState = [0 0][lPrime lPrimePrime]
            % timeDeviation = [5;10]s
            % expect generate
            % initialState = [0 0 0 0 0 0；terminalState = [10 0 0 -5 0 0;  Tf = [ 5;                        
            %                 0 0 0 0 0 0;                  10 0 0 0 0 0;          5
            %                 0 0 0 0 0 0;                  10 0 0 5 0 0;          5
            %                 0 0 0 0 0 0;                  20 0 0 -5 0 0;         5
            %                 0 0 0 0 0 0;                  20 0 0 0 0 0;          5
            %                 0 0 0 0 0 0;                  20 0 0 5 0 0;          5
            %                 0 0 0 0 0 0;                  30 0 0 -5 0 0;         5
            %                 0 0 0 0 0 0;                  30 0 0 0 0 0;          5
            %                 0 0 0 0 0 0]                  30 0 0 5 0 0;]         5]
            
            % termFrenetState 
            % 此处只考虑了终端状态为速度、加速度为0的情况，可能会存在速度加速度不为0的情况，需要后期进行修改，现在只定义了[1 4]列
            termFrenetState_temp1 = sortrows(kron(ones(size(lateralDeviation,1),1),arcLenDeviation),1);
            termFrenetState_temp4 = kron(ones((size(arcLenDeviation,1)),1),lateralDeviation);
            termFrenetState_temp2 = kron(ones(size(termFrenetState_temp4,1),1),LongTermState(1,1));
            termFrenetState_temp3 = kron(ones(size(termFrenetState_temp4,1),1),LongTermState(1,2));
            termFrenetState_temp5 = kron(ones(size(termFrenetState_temp4,1),1),LaterlTermState(1,1));
            termFrenetState_temp6 = kron(ones(size(termFrenetState_temp4,1),1),LaterlTermState(1,2));
            termFrenetState = single(zeros(size(arcLenDeviation,1)*size(lateralDeviation,1),6));
            termFrenetState(:,[1 2 3 4 5 6]) = [termFrenetState_temp1 termFrenetState_temp2 termFrenetState_temp3 termFrenetState_temp4 termFrenetState_temp5 termFrenetState_temp6];
            % numTraj
            numTerm = size(termFrenetState,1);
            numTime = numel(timeDeviation);
            numTraj = numTerm * numTime;
            % TrajStateCombination
            InitialState = repmat(initialState, numTraj, 1);
            TerminalState = repmat(termFrenetState,numTraj/numTerm,1);
            % Tf
            Tf = sortrows(kron(ones(size(termFrenetState,1),1),timeDeviation)); 
        end
        function[InitialState,TerminalState,numTraj] = TrajStateCombination_Lateral(initialState,arcLenDeviation,lateralDeviation)
            % initGlobalState =  [x, y, theta, kappa, v, a]; 路径点GlobalState = [x, y,theta, kappa, dkappa, s];
            %  该function用：initGlobalState
            % initialState = [s0 d0 theta0];
            % arcLenDeviation = [10; 20; 30];
            % lateralDeviation = [-5; 0; 5];
            
            termFrenetState_temp1 = sortrows(kron(ones(size(lateralDeviation,1),1),arcLenDeviation),1);
            termFrenetState_temp2 = kron(ones(size(arcLenDeviation,1),1),lateralDeviation);
            termFrenetState_temp3 = zeros((size(arcLenDeviation,1)*size(lateralDeviation,1)),1);
            TerminalState = [termFrenetState_temp1 termFrenetState_temp2 termFrenetState_temp3];
            numTraj = size(TerminalState,1);
            initialState(:,3) = pi/2 - initialState(:,3);
            InitialState = repmat(initialState, numTraj,1);
        end
        function Coefficients = QuinticQuarticTrajectory(startCondition, endCondition,Variable)
            %QuinticQuarticTrajectory 
            if isnan(endCondition(1))
                Coefficients = TrajectoryGeneratorFrenet.computeQuarticTrajectory(startCondition,endCondition,Variable);
            else
                Coefficients = TrajectoryGeneratorFrenet.computeQuinticTrajectory(startCondition,endCondition,Variable);
            end
        end
        function coefficients = computeQuinticTrajectory(StartCondition,EndCondition,Variable)
            %computeTrajectory Computes the coefficients of the polynomial
            %   This function computes the quintic polynomial coefficients
            %   given the zeroth, first, and second derivative at P = 0 and
            %   P = finalVariable
            
            % Code taken from quinticpolytraj generateQuinticCoeffs method
            
            % First three coefficients can be found by setting P=0 using
            % boundary conditions
            coeffVec = [StartCondition(1) StartCondition(2) StartCondition(3)/2.0 0 0 0]';
            
            % The last three coefficients may be found by substituting the first three
            % into the expressions for zeroth, first, and second derivative at
            % P=finalVariable:
            % [f(P) fd(P) fdd(P)]' = matP0*[C1 C2 C3]' + matPFinal*[C4 C5 C6]
            % where matPFinal =
            %   [finalVariable^3    finalVariable^4     finalVariable^5; ...
            %    3*finalVariable^2  4*finalVariable^3   5*finalVariable^4; ...
            %    6*finalVariable    12*finalVariable^2  20*finalVariable^3];
            % This expression may be solve for C4, C5, and C6
            
            matP0 = [1 Variable Variable^2; 0 1 2*Variable; 0 0 2];
            
            B = [EndCondition(1); EndCondition(2); EndCondition(3)] - matP0*coeffVec(1:3);
            
            % Since Tmat is a known function of variable, use the analytical inverse
            % of matPFinal to avoid numerical issues:
            invmatPFinal = [10/Variable^3 -4/Variable^2 1/(2*Variable);
                -15/Variable^4 7/Variable^3 -1/Variable^2;
                6/Variable^5 -3/Variable^4, 1/(2*Variable^3)];
            
            coeffVec(4:6) = invmatPFinal * B;
            
            coefficients = coeffVec';
        end
        function coefficients = computeQuarticTrajectory(StartCondition,EndCondition,Variable)
        %computeTrajectory Computes the coefficients of the polynomial
        %   This function computes the quartic polynomial coefficients
        %   given the zeroth, first, and second derivative at P = 0 and
        %   P = finalVariable

        % First three coefficients can be found by setting P=0 using
        % boundary conditions
            coeffVec = [StartCondition(1) StartCondition(2) StartCondition(3)/2.0 0 0]';

            % The last three coefficients may be found by substituting the first three
            % into the expressions for zeroth, first, and second derivative at
            % P=finalVariable:
            % [fd(P) fdd(P)]' = matP0*[C1 C2 C3]' + matPFinal*[C4 C5]
            % where matPFinal =
            %   [3*finalVariable^2  4*finalVariable^3; ...
            %    6*finalVariable    12*finalVariable^2];
            % This expression may be solve for C4, and C5

            matP0 = [0 1 2*Variable; 0 0 2];

            B = [EndCondition(2); EndCondition(3)] - matP0*coeffVec(1:3);

            % Since Tmat is a known function of variable, use the analytical inverse
            % of matPFinal to avoid numerical issues:
            invmatPFinal = 1/(12*Variable^4) * [12*Variable^2 -4*Variable^3; ...
                                -6*Variable 3*Variable^2];

            coeffVec(4:5) = invmatPFinal * B;

            coefficients = [coeffVec', 0];
        end
        function coefficients = computeCubicTrajectory(StartCondition,EndCondition)
            s0 = StartCondition(1);
            d0 = StartCondition(2);
            theta0 = StartCondition(3);
            sg = EndCondition(1);
            dg = EndCondition(2);
            thetag = EndCondition(3);
            A = [ 1, s0, s0^2, s0^3;
                  1, sg, sg^2, sg^3;
                  0, 1,  2*s0, 3*s0^2;
                  0, 1,  2*sg, 3*sg^ 2 ];
            b = [d0;
                 dg;
                 tan(theta0);
                 tan(thetag)];
            coefficients = A\b;
        end
        function result = evaluate(Coefficients,order, variable)
            %evaluate Evaluate nth derivative of polynomial at variable
            result = single(zeros(length(order),length(variable)));
            for i=1:length(order)
                currentOrder = order(i);
                switch currentOrder
                    
                    % Evaluate quintic polynomial at variable
                    case 0
                        result(i,:) =  ((((Coefficients(6) .* variable + Coefficients(5)) .* variable + Coefficients(4)) .* variable + Coefficients(3)) .* variable + Coefficients(2)) .* variable + Coefficients(1);
                        
                        % Evaluate first order derivative of quintic polynomial at variable
                    case 1
                        result(i,:) =  (((5.0 * Coefficients(6) .* variable + 4.0 * Coefficients(5)) .* variable + 3.0 * Coefficients(4)) .* variable + 2.0 * Coefficients(3)) .* variable + Coefficients(2);
                        
                        % Evaluate second order derivative of quintic polynomial at variable
                    case 2
                        result(i,:) =  (((20.0 * Coefficients(6) .* variable + 12.0 * Coefficients(5)) .* variable) + 6.0 * Coefficients(4)) .* variable + 2.0 * Coefficients(3);
                        
                        % Evaluate third order derivative of quintic polynomial at variable
                    case 3
                        result(i,:) =  (60.0 * Coefficients(6) .* variable + 24.0 * Coefficients(5)) .* variable + 6.0 * Coefficients(4);
                        
                        % Evaluate forth order derivative of quintic polynomial at variable
                    case 4
                        result(i,:) =  120.0 * Coefficients(6) .* variable + 24.0 * Coefficients(5);
                        
                        % Evaluate fifth order derivative of quintic polynomial at variable
                    case 5
                        result(i,:) =  120.0 * Coefficients(6);
                end
            end
            
        end
        function optPath=PathSmoothing(path,alpha, beta)
          % 轨迹点平滑函数，参考自博客，主要是为了平滑三次多项式曲率突变问题(暂时用来做尝试，五次多项式暂时不使用)。为减小运算量可适当放开torelance
            optPath=path;%
            torelance=single(0.001);
            change=torelance;
            while abs(change)>=torelance
                change=single(0);
                for ip=2:(length(path(:,1))-1)
                    prePath=optPath(ip,:);
                    optPath(ip,:)=optPath(ip,:)-alpha*(optPath(ip,:)-path(ip,:));
                    optPath(ip,:)=optPath(ip,:)-beta*(2*optPath(ip,:)-optPath(ip-1,:)-optPath(ip+1,:));
                    change=change+norm(optPath(ip,:)-prePath);
                end
            end
        end
    end
end

