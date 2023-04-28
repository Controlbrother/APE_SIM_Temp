classdef FrenentReferencePath < handle
    %FrenetReferencePath Generate a reference path using waypoints
    %   The referencePathFrenet object fits a smooth, piecewise continuous curve
    %   to the provided [x y] or [x y theta] waypoints. Points along the curve
    %   are expressed as [x, y, theta, kappa, dkappa, s], where:
    %
    %       x,y,theta   - SE2 state relative to global coordinate
    %       kappa       - Curvature
    %       dkappa      - Derivative of curvature relative to arc length
    %       s           - Arclength, or distance along path from path origin
    %
    %   Use methods on the object to convert trajectories between global and 
    %   Frenet coordinate systems, interpolate states along the path based on 
    %   arc length, and query the closest point on the path from a global state.
    %
    %   Frenet states are [S dS ddS L dL ddL], where S is the arc
    %   length, L is the deviation perpendicular to the path direction, 
    %   derivatives of S are with respect to time and derivatives of L are with
    %   respect to arclength, S.
    %
    %   Global states are [x y theta kappa speed accel], where speed and accel
    %   are scalar magnitudes in the direction of theta.
    %   [x, y, theta, kappa, v, a]
    %
    %   FrenetReferencePath It fits a parametric curve over the waypoints
    %   and generate a discrete set of states which contains x, y, theta,
    %   kappa, dkappa and s
    
    properties(Access = public)
        %PathPoints N-by-6 array of discretized states representing the path
        %   N-by-6 array of states on path in the following order [x, y,
        %   theta, kappa, dkappa, s]
        
        PathPoints   %[x, y,theta, kappa, dkappa, s]
        
        %DiscretizationDistance Arclength between sampled points along path
        %   DiscretizationDistance is the arclength between discrete
        %   samples of the piecewise continuous curve fit to the path
        %   waypoints. The discrete representation of the curve is used to
        %   accelerate performance of coordinate transformation. Smaller
        %   DiscretizationDistance increases accuracy at the expense of
        %   memory and computational efficiency.
        DiscretizationDistance = single(1);
        
        %Waypoints Presampled points along the path
        Waypoints
    end
    methods(Access = public)
        function obj = FrenentReferencePath(waypoints,GtNumTrajpoints)
            % Set waypoints
            obj.Waypoints = waypoints;
            
            obj.generationCartesianStates(waypoints,GtNumTrajpoints);
        end  
        function generationCartesianStates(obj,waypoints,GtNumTrajpoints)
            % StepSize  -  distance between discretized points along path
            objSpline = Spline2D(waypoints(:,1),waypoints(:,2));
            %[x, y, theta, kappa, dkappa, s]
            
            % report cumulative arclength traveled from initial point.
            % dS = obj.DiscretizationDistance;
            % s = [(0:(ceil(objSpline.s(end)*(1/dS))-1))*dS objSpline.s(end)];
            NTrajpoints = GtNumTrajpoints;%根据需要设置生成目标轨迹全局坐标状态点的个数
            s = single(linspace(0,objSpline.s(end),NTrajpoints));
            obj.DiscretizationDistance = s(1,3)-s(1,2);
            Path_points = single(zeros(length(s),6));
            
%             i = single(1)
%             for i_s = 0:StepSize:objSpline.s(end)
%                 [ix,iy] = objSpline.calc_position(i_s);
%                 Path_points(i,1) = ix;
%                 Path_points(i,2) = iy;
%                 Path_points(i,3) = objSpline.calc_yaw(i_s);
%                 Path_points(i,4) = objSpline.calc_curvature(i_s);
%                 Path_points(i,5) = objSpline.calc_curvatureDerivative(i_s);
%                 Path_points(i,6) = i_s;
%                 i = i + single(1);
%             end

            for i = single(1):single(1):length(s)
                [ix,iy] = objSpline.calc_position(s(i));
                Path_points(i,1) = ix;
                Path_points(i,2) = iy;
                Path_points(i,3) = objSpline.calc_yaw(s(i));
                Path_points(i,4) = objSpline.calc_curvature(s(i));
                Path_points(i,5) = objSpline.calc_curvatureDerivative(s(i));
                Path_points(i,6) = s(i);
            end
            obj.PathPoints = Path_points;
        end
        function frenetState = global2frenet(obj, globalStates)
        %global2frenet Convert global states to Frenet states
            
            % Get path point on reference path closest to given input state
            refPathPoints = obj.closestPoint(globalStates(:,1:2));

            % Transform to Frenet states using path point as reference
            frenetState = FrenentReferencePath.cartesian2Frenet(refPathPoints, globalStates);
        end
        function globalStates = frenet2global(obj, frenetStates)
            %global2frenet Convert Frenet states to global states
            
            % Get path point on reference path closest to given input state
            refPathPoint = obj.interpolate(frenetStates(:,1));
            
            % Transform to global states using path point as reference
            globalStates = FrenentReferencePath.frenet2Cartesian(refPathPoint, frenetStates);
        end
        function globalStates = frenet2global1D(obj, frenetStates,GtNumTarpoints)
            %#codegen
            %   [s,d]→[x,y]
            %   [s,d]→[x, y, theta, kappa, dkappa]
            refPathPoint = obj.interpolate(frenetStates(:,1));
            refPointtheta = FrenentReferencePath.wrapToPi(refPathPoint(:,3));
            cos_theta_r = cos(refPointtheta);
            sin_theta_r = sin(refPointtheta);
            x = refPathPoint(:,1) - sin_theta_r .* frenetStates(:,2);
            y = refPathPoint(:,2) + cos_theta_r .* frenetStates(:,2);
            % 此处疑点：1、求取了[x y]后一种办法是根据离散点数直接求朝向角和曲率；2、另一中是根据粗轨迹再一次多项式插值，在求各个状态；
            % 第一种办法貌似需要离散额细一点，第二种是不是只需要错略离散轨迹
            % 根据[x y]求朝向角、曲率、曲率变化率
            %             theta_x = zeros(length(x),1);
            %             dL = zeros(length(x),1);
            %             kappa_x = zeros(length(x),1);
            %             % Calc theta and dL (running length)
            %             j = 1;
            %             for i = 1: (length(x) - 1)
            %                 dx = x(i+1) - x(i);
            %                 dy = y(i+1) - y(i);
            %                 theta_x(j) = atan2(dy, dx);
            %                 theta_x(j+1) = atan2(dy, dx);  % obj.theta(end+1) = obj.theta(end);
            %                 dL(j) = sqrt(dx^2 + dy^2);
            %                 dL(j+1) = sqrt(dx^2 + dy^2);   % obj.dL(end+1) = obj.dL(end);
            %                 j = j + 1;
            %             end
            %             % Calc curvature
            %             j = 1;
            %             for i = 1: (length(theta_x) - 1)
            %                 kappa_x(j) = (theta_x(i+1) - theta_x(i)) / dL(i) ;
            %                 kappa_x(j+1) = (theta_x(i+1) - theta_x(i)) / dL(i) ; % obj.kappa(end+1) = obj.kappa(end);
            %                 j = j + 1;
            %             end
            %             globalStates = [x, y, theta_x, kappa_x]; 
            % TargetPath = FrenentReferencePath([x y],ds);%此处可以两种办法，另一种直接调用generationCartesianStates，因ds的原因最后生成的Frenet和Global点数不同，单独写此处的函数。
            objSpline = Spline2D(x,y);
            % s = frenetStates(:,1);%最初是想输出点数与Frenet点数对应相同，考虑控制跟踪精度需要，改成根据需要修改输出点数
            s = (linspace(0,frenetStates(end,1),GtNumTarpoints))';
            TargetPoints = single(zeros(length(s),6));
            for i = single(1):single(1):length(s)
                [ix,iy] = objSpline.calc_position(s(i));
                TargetPoints(i,1) = ix;
                TargetPoints(i,2) = iy;
                TargetPoints(i,3) = objSpline.calc_yaw(s(i));
                TargetPoints(i,4) = objSpline.calc_curvature(s(i));
                TargetPoints(i,5) = objSpline.calc_curvatureDerivative(s(i));
                TargetPoints(i,6) = s(i);
            end
            globalStates = TargetPoints(:,1:5);
        end
        % interpolate函数需要放在Public中不然对象无法访问
        function [pathPoints, index] = interpolate(obj, arcLength)
            %interpolate Interpolate states at provided arc lengths
            %   Find the closest path point on the reference path at the
            %   input arc length and use previous index value for searching
            %   in a window from prevIdx
            
            % Find path point indices corresponding to each arcLength
            % element
            index = floor(arcLength*(1./obj.DiscretizationDistance))+1;
            
            % Allocate output
            pathPoints = repmat(obj.PathPoints(end,:),numel(arcLength),1);
            
            % Map negative arc lengths to the path origin
            initIdx = index<=0;
%             pathPoints(initIdx,:) =
%             repmat(obj.PathPoints(1,:),nnz(initIdx),1);%生成代码存在问题，暂时先注释，这种情况也很少出现。
            
            % Find valid indices
            validMask = ~initIdx & arcLength < obj.PathPoints(end);
            validIdx = index(validMask);
            if ~isempty(validIdx)
                interpolatedPts = FrenentReferencePath.getClosestPathPointS(obj.PathPoints, validIdx, validIdx+1, arcLength(validMask));
                pathPoints(validMask,:) = interpolatedPts;
            end
        end
    end
    methods(Access=protected)
        function pathPoint = closestPoint(obj, xyPoints)
            %closestPoint Find the closest point along path from (x,y) coordinate
            %   Find the closest path point on the reference path from the
            %   input point (x,y)
            
            pathPoint = zeros(size(xyPoints,1),6);
            for i = 1:size(xyPoints,1)
                xyPoint = xyPoints(i,1:2);
                % Find the index of the point on the reference path which has
                % minimum distance from the input (x,y)
                [~,index] = min(sum([obj.PathPoints(:,1)-xyPoint(1),obj.PathPoints(:,2)-xyPoint(2)].^2,2));
                
                % Project point onto nearest reference path segment
                pathPoint(i,1:6) = obj.projectedPoint(index, xyPoint);
            end
        end
        function pathPoint = projectedPoint(obj, index, xyPoint)
            %  projectedPoint Projection of point (x,y) between start and end
            %   Project a point given in global coordinates (x,y) onto the
            %   nearest discrete segment of path and interpolate between
            %   segment boundaries to evaluate path.
            %
            %   Points assigned to the first or last segment indices are
            %   first checked to see if they lie inside/outside the path
            %   limits. If outside, they are clamped to the first|last
            %   pathPoint, otherwise they are interpolated.
            
            if index == size(obj.PathPoints,1)
                % Closest point is end of path
                v0x = xyPoint(1) - obj.PathPoints(end,1);
                v0y = xyPoint(2) - obj.PathPoints(end,2);
                v1x = obj.PathPoints(end-1,1)-obj.PathPoints(end,1);
                v1y = obj.PathPoints(end-1,2)-obj.PathPoints(end,2);
                dotV = v0x*v1x+v0y*v1y;
                if dotV <= 0
                    % Point lies beyond end of path
                    pathPoint = obj.PathPoints(end,:);
                    return;
                else
                    % Point lies in final segment
                    v0x = xyPoint(1) - obj.PathPoints(end-1,1);
                    v0y = xyPoint(2) - obj.PathPoints(end-1,2);
                    v1x = obj.PathPoints(end,1)-obj.PathPoints(end-1,1);
                    v1y = obj.PathPoints(end,2)-obj.PathPoints(end-1,2);
                    dotV = v0x*v1x+v0y*v1y;
                    startIdx = size(obj.PathPoints,1)-1;
                end
            elseif index == 1
                % Closest point is path origin
                v0x = xyPoint(1) - obj.PathPoints(1,1);
                v0y = xyPoint(2) - obj.PathPoints(1,2);
                v1x = obj.PathPoints(2,1)-obj.PathPoints(1,1);
                v1y = obj.PathPoints(2,2)-obj.PathPoints(1,2);
                dotV = v0x*v1x+v0y*v1y;
                if dotV <= 0
                    % Point lies past origin
                    pathPoint = obj.PathPoints(1,:);
                    return;
                else
                    % Point lies in first segment
                    startIdx = 1;
                end
            else
                % Point found inside path limits
                nearestXY = obj.PathPoints(index,1:2);
                if (xyPoint-nearestXY)*(nearestXY-obj.PathPoints(index-1,1:2))' < 0
                    % Interpolate using index-1 point
                    startIdx = index - 1;
                    endIdx = index;
                else
                    % Interpolate using index+1 point
                    startIdx = index;
                    endIdx = index + 1;
                end
                % Interpolate using correct set of indices
                v0x = xyPoint(1) - obj.PathPoints(startIdx,1);
                v0y = xyPoint(2) - obj.PathPoints(startIdx,2);
                v1x = obj.PathPoints(endIdx,1) - obj.PathPoints(startIdx,1);
                v1y = obj.PathPoints(endIdx,2) - obj.PathPoints(startIdx,2);
                dotV = v0x .* v1x + v0y .* v1y;
            end
            
            % Linearly interpolate between path points
            v1Norm = sqrt(v1x .* v1x + v1y .* v1y);
            deltaS = dotV / v1Norm;
            pathPoint = obj.interpolate(obj.PathPoints(startIdx,6) + deltaS);
        end
    end
    methods(Access=private,Static)
        function pathPoint = getClosestPathPointS(pathPoints, startIdx, endIdx, s)
            %getClosestPathPointS Weighted interpolation between path points
            %   Compute path point by weighted linear interpolation using
            %   arc length as weight
            
            %在代码生成时让该函数生成一个独立的函数
            coder.inline('never');
        
            startPoint = pathPoints(startIdx,:);
            endPoint = pathPoints(endIdx,:);
            
            % Calculate the weights using arc length difference from the
            % reference path points at startIdx and endIdx
            weight = abs(s - startPoint(:,6)) ./ (endPoint(:,6) - startPoint(:,6));
            
            x = (1 - weight) .* startPoint(:,1) + weight .* endPoint(:,1);
            y = (1 - weight) .* startPoint(:,2) + weight .* endPoint(:,2);
            
            kappa = (1 - weight) .* startPoint(:,4) + weight .* endPoint(:,4);
            dkappa = (1 - weight) .* startPoint(:,5) + weight .* endPoint(:,5);
            
            % Use spherical linear interpolation
            % theta = Frenet_ReferencePath.slerp(startPoint(:,3), startPoint(:,6), endPoint(:,3), endPoint(:,6), s);
            theta = FrenentReferencePath.slerp(startPoint(:,3), startPoint(:,6), endPoint(:,3), endPoint(:,6), s);
            
            % Segregate the states as a Nx6 vector
            pathPoint = [x, y, theta, kappa, dkappa, s];
        end
        function frenetState = cartesian2Frenet(refState, queryState)
        %cartesian2Frenet convert from Cartesian to Frenet
        %   frenetState converts states [x, y, theta, kappa, v, a] to
        %   [s, sDot, sDotDot, l, lPrime, lPrimePrime] using the
        %   reference point which contains [x,y,theta,kappa,dkappa,s]
        %#codegen
            % Segregate reference states
            refS = refState(:,6);
            refX = refState(:,1);
            refY = refState(:,2);
            refTheta = FrenentReferencePath.wrapToPi(refState(:,3));
            refKappa = refState(:,4);
            refKappaPrime = refState(:,5);

            % Segregate query Cartesian states
            x = queryState(:,1);
            y = queryState(:,2);
            v = queryState(:,5);
            a = queryState(:,6);
            theta = FrenentReferencePath.wrapToPi(queryState(:,3));
            kappa = queryState(:,4);

            dx = x - refX;
            dy = y - refY;

            refCosTheta = cos(refTheta);
            refSinTheta = sin(refTheta);

            % Normal at the root point
            refNormal = refCosTheta .* dy - refSinTheta .* dx;

            % Compute lateral deviation
            l = vecnorm([dx, dy]')' .* sign(refNormal);

            deltaTheta = FrenentReferencePath.angdiff(refTheta,theta);

            tanDeltaTheta = tan(deltaTheta);
            cosDeltaTheta = cos(deltaTheta);

            oneMinusKappaRefL = 1 - refKappa .* l;

            % Compute derivative of lateral deviation w.r.t. arc length
            lPrime = oneMinusKappaRefL .* tanDeltaTheta;

            kappaRefLPrime = refKappaPrime .* l + refKappa .* lPrime;

            % Compute second derivative of lateral deviation w.r.t. arc length
            lPrimePrime = -kappaRefLPrime .* tanDeltaTheta + oneMinusKappaRefL ./ cosDeltaTheta ./ cosDeltaTheta .* (kappa .* oneMinusKappaRefL ./ cosDeltaTheta - refKappa);

            % Arc length is same as reference (root point) arc length
            s = refS;

            % Velocity in lateral direction
            sDot = v .* cosDeltaTheta ./ oneMinusKappaRefL;

            deltaThetaPrime = oneMinusKappaRefL ./ cosDeltaTheta .* kappa - refKappa;

            % Acceleration in lateral direction
            sDotDot = (a .* cosDeltaTheta - sDot.^2 .* (lPrime .* deltaThetaPrime - kappaRefLPrime)) ./ oneMinusKappaRefL;

            % Consolidate all the states as a 1x6 vector
            frenetState = [s sDot sDotDot l lPrime lPrimePrime];

            % Remove residuals by rounding off to order of sqrt(eps).
            roundOrder = ceil(abs(log(sqrt(eps))/log(10)));
            frenetState = round(frenetState.*10^roundOrder)./10^roundOrder;
        end
        function cartesianStates = frenet2Cartesian(refState, queryState)
        %frenet2Cartesian Convert from Frenet to Cartesian
        %   frenetState converts [s, sDot, sDotDot, l, lPrime, lPrimePrime]
        %   to [x, y, theta, kappa, v, a] using the reference point which contains
        %   [x, y, theta, kappa, dkappa, s]
        %#codegen
            % Segregate reference states
            refX = refState(:,1);
            refY = refState(:,2);
            refTheta = FrenentReferencePath.wrapToPi(refState(:,3));
            refKappa = refState(:,4);
            refKappaPrime = refState(:,5);

            % Segregate query Frenet states
            sDot = queryState(:,2);
            sDotDot = queryState(:,3);
            l = queryState(:,4);
            lPrime = queryState(:,5);
            lPrimePrime = queryState(:,6);

            refCosTheta = cos(refTheta);
            refSinTheta = sin(refTheta);

            % Compute x
            x = refX - refSinTheta .* l;

            % Compute y
            y = refY + refCosTheta .* l;

            oneMinusKappaRefL = 1 - refKappa .* l;

            tanDeltaTheta = lPrime ./ oneMinusKappaRefL;
            deltaTheta = atan2(lPrime, oneMinusKappaRefL);
            cosDeltaTheta = cos(deltaTheta);

            % Compute theta
            theta = FrenentReferencePath.wrapToPi(deltaTheta + refTheta + 2*pi);

            kappaRefLPrime = refKappaPrime .* l + refKappa .* lPrime;

            % Compute kappa
            kappa = (((lPrimePrime + kappaRefLPrime .* tanDeltaTheta) .* cosDeltaTheta.^2) ./ oneMinusKappaRefL + refKappa) .* cosDeltaTheta ./ oneMinusKappaRefL;

            % Compute speed in the direction of vehicle heading
            v = sDot .* (oneMinusKappaRefL ./ cosDeltaTheta);

            deltaThetaPrime = oneMinusKappaRefL ./ cosDeltaTheta .* kappa - refKappa;

            % Compute acceleration in the direction of vehicle heading
            a = (sDotDot .* oneMinusKappaRefL ./ cosDeltaTheta) + (sDot.^2 ./ cosDeltaTheta) .* (lPrime .* deltaThetaPrime - kappaRefLPrime);

            % Consolidate all the states as a 1x6 vector
            cartesianStates = [x y theta kappa v a];

            % Remove residuals by rounding off to order of sqrt(eps). 
            roundOrder = ceil(abs(log(sqrt(eps))/log(10)));
            cartesianStates = round(cartesianStates.*10^roundOrder)./10^roundOrder;
        end
    end
    methods(Static)
        function [theta] = slerp(a0, t0, a1, t1, t)
            %slerp Perform spherical linear interpolation to compute theta
            if (abs(t1 - t0) <= eps)
                theta = a0;
            else
                a0n = FrenentReferencePath.wrapToPi(a0);
                a1n = FrenentReferencePath.wrapToPi(a1);
                d = FrenentReferencePath.angdiff(a0n,a1n);
                r = (t - t0) ./ (t1 - t0);
                a = a0n + d .* r;
                theta = FrenentReferencePath.wrapToPi(a);
            end
        end
        function theta = wrapToPi(theta)
            %wrapToPi Wrap angle in radians to interval [-pi pi]
            %   THETAWRAP = wrapToPi(THETA) wraps angles in THETA to the interval
            %   [-pi pi]. Positive, odd multiples of pi map to pi and negative, odd
            %   multiples of pi map to -pi.
            %#codegen
            
            if any(abs(theta) > pi, 'all')
                % Only wrap values if one or more needs to be wrapped
                piVal = cast(pi,'like',theta);
                theta = FrenentReferencePath.wrapTo2Pi(theta + piVal) - piVal;
            end
        end
        function thetaWrap = wrapTo2Pi(theta)
            %wrapTo2Pi Wrap angle in radians to interval [0 2*pi]
            %
            %   THETAWRAP = wrapTo2Pi(THETA) wraps angles in THETA to the interval
            %   [0 2*pi]. Positive multiples of 2*pi map to 2*pi and negative
            %   multiples of 2*pi map to 0.
            %#codegen
            
            twoPiVal = cast(2*pi,'like',theta);
            
            % Check if inputs are positive
            pos = (theta > 0);
            
            % Wrap to 2*pi
            thetaWrap = mod(theta, twoPiVal);
            
            % Make sure that positive multiples of 2*pi map to 2*pi
            thetaWrap((thetaWrap == 0) & pos) = twoPiVal;
            
        end
        function delta = angdiff(x, y)
            d = y - x;
            % Make sure the output is in the [-pi,pi) range
            delta = FrenentReferencePath.wrapToPi(d);
        end
    end
end

