function [globalTrajectory] = EvaluateTrajectory(frenetTrajectory,globalTrajectory, speedLimit, speedWeight, latWeight, timeWeight)

%   Each element of GLOBALTRAJECTORY contains the fields Trajectory, an 
%   N-by-[x y theta kappa v a] matrix, and Times, an N-by-1 vector of timesteps.
%   Returns an N-by-1 vector of logicals, ISVALID, where an entry of false 
%   means that the corresponding trajectory violated one or more constraints,
%   and true means that all constraints were met.
    costs = EvaluateTSCost(frenetTrajectory,speedLimit, speedWeight, latWeight, timeWeight);
    for i = 1:1:numel(costs)
        globalTrajectory(i).costs = costs(i);
    end
    % 按cost从小到大排序
    costs_temp = zeros(length(globalTrajectory),1);
    for i = 1:1:length(globalTrajectory)
        costs_temp(i,1) = globalTrajectory(i).costs(1,1);
    end
    [~,index] = sortrows(costs_temp); 
    globalTrajectory = globalTrajectory(index);
end
function costs = EvaluateTSCost(frenetTrajectory,speedLimit, speedWeight, latWeight, timeWeight)

terminalStates = single(zeros(numel(frenetTrajectory),6));
for i = 1:1:numel(frenetTrajectory)
    terminalStates(i,:) = frenetTrajectory(i).Trajectory(end,:);
end
latDeviation = abs(terminalStates(:,4));

% Lateral Deviation Cost () — A positive weight that penalizes states that deviate from the center of a lane.
% Calculate lateral deviation cost
latCost = min(latDeviation,[],2);

% Time Cost () — A negative weight that prioritizes motions that occur over a longer interval, resulting in smoother trajectories.
% Calculate trajectory time cost
terminalTimes = single(zeros(numel(frenetTrajectory),1));
for i = 1:1:numel(frenetTrajectory)
    terminalTimes(i,1) = frenetTrajectory(i).Times(end,1);
end
timeCost = terminalTimes;

% Terminal Velocity Cost () — A positive weight that prioritizes motions that maintain the speed limit, resulting in less dynamic maneuvers.
% Calculate terminal speed vs desired speed cost
speedCost = abs(terminalStates(:,2)-speedLimit)*speedWeight;

% jerk Cost
Js = single(zeros(numel(frenetTrajectory),1));
Jd = single(zeros(numel(frenetTrajectory),1));
for i=1:1:numel(frenetTrajectory)
    Js(i,1) = sum((frenetTrajectory(i).jerk(:,1)).^2);
    Jd(i,1) = sum((frenetTrajectory(i).jerk(:,2)).^2);
end
[normaliz_costs]=MyMapminmax([latCost';timeCost';speedCost';Js';Jd'],0.1,1);

% Return cumulative cost
costs = normaliz_costs(:,1) * latWeight + normaliz_costs(:,2) * timeWeight + normaliz_costs(:,3) * speedWeight...
    + normaliz_costs(:,4) + normaliz_costs(:,5);
end
function [out]=MyMapminmax(x,ymin,ymax)
% 归一化函数，用作costs求解上 y = (ymax-ymin)*(x-xmin)/(xmax-xmin) + ymin
% 某行的数据全部相同，此时xmax=xmin，除数为0，则此时数据不变。
out=(ymax-ymin).*(x-repmat(min(x,[],2),1,size(x,2)))./repmat((max(x,[],2)-min(x,[],2)),1,size(x,2))+ymin;
index=isnan(out);
out(index)=x(index);
out = out';
end

