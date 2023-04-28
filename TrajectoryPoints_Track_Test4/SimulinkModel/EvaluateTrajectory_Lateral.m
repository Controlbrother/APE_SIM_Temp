function [globalTrajectory] = EvaluateTrajectory_Lateral(frenetTrajectory,globalTrajectory, latWeight,longDisWeight)

%   Each element of GLOBALTRAJECTORY contains the fields Trajectory, an 
%   N-by-[x y theta kappa v a] matrix, and Times, an N-by-1 vector of timesteps.
%   Returns an N-by-1 vector of logicals, ISVALID, where an entry of false 
%   means that the corresponding trajectory violated one or more constraints,
%   and true means that all constraints were met.
    costs = EvaluateTSCost(frenetTrajectory,latWeight,longDisWeight);
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
function costs = EvaluateTSCost(frenetTrajectory,latWeight,longDisWeight)

terminalStates = single(zeros(numel(frenetTrajectory),2));
for i = 1:1:numel(frenetTrajectory)
    terminalStates(i,:) = frenetTrajectory(i).Trajectory(end,1:2);
end
latDeviation = abs(terminalStates(:,2));
lonDeviation = abs(terminalStates(:,1));

% Lateral Deviation Cost () — A positive weight that penalizes states that deviate from the center of a lane.
% Calculate lateral deviation cost
latCost = min(latDeviation,[],2);

% Longitudinal Deviation Cost () — A positive weight that penalizes states that deviate from the center of a lane.
% Calculate lateral deviation cost
lonCost = min(lonDeviation,[],2);

[normaliz_costs]=MyMapminmax([latCost';lonCost'],0.1,1);

% Return cumulative cost
costs = normaliz_costs(:,1) * latWeight + normaliz_costs(:,2) * longDisWeight;
end
function [out]=MyMapminmax(x,ymin,ymax)
% 归一化函数，用作costs求解上
out=(ymax-ymin).*(x-repmat(min(x,[],2),1,size(x,2)))./repmat((max(x,[],2)-min(x,[],2)),1,size(x,2))+ymin;
index=isnan(out);
out(index)=x(index);
out = out';
end

