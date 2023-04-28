classdef BirdsEyeView17a < matlab.System & matlab.system.mixin.CustomIcon
    
    %#codegen
  %% properties  
    properties(Nontunable)
        %XLim X轴范围m [min max]
        XLim = [0 120]        
        %YLim Y轴范围m [min max]
        YLim = [-30 30]
    end
    
    properties(Nontunable, Logical)
        %HasActors 输入矩形目标数据 M*4 data[x y width lenght]
        HasActors = true
        %ActorsColor 输入矩形目标颜色 M*3 data[r g b]
        ActorsColor= false
        %HasVision 输入摄像头目标数据 M*8 data[x y r g b label labelvalid valid]
        HasVision = false
        %HasRadar 输入雷达目标数据 M*8 data[x y r g b label labelvalid valid]
        HasRadar = false  
        %HasRoads 输入道路线(y=Ax^3+B*x^2+C*x+D)绘制距离(Xmin Xmax) M*9 data[A B C D Xmin Xmax r g b]       
        HasRoads = false               
        %HasLaneMarkings 输入道路线标签 data={'left','right'}
        HasLaneMarkings = false;        
        %aspectratio 坐标轴比例自适应
        aspectratio=false;        
        
    end    
    
    properties (Nontunable)
        %摄像头FOV开角 °
        Camera_Fov=52;
        %摄像头FOV距离范围 m
        Camera_Range=100;
        %摄像头FOV旋转角度 °
        Camera_Yaw=0;
        %摄像头FOV位置坐标[x y]
        Camera_Pos=[0 0];
        
        %雷达FOV开角 °
        Radar_Fov=52;
        %雷达FOV距离范围 m
        Radar_Range=100;
        %雷达FOV旋转角度 °
        Radar_Yaw=0;
        %雷达FOV位置坐标[x y]
        Radar_Pos=[0 0];
        
        % Marker大小
        MarkerSize=8;
        % Label字体大小
        LabelFontSize=9;
        % Label坐标偏移
        LabelOffset=[1.5 1.5];
        
        
    end
    
    properties(Access=private)
        pFig
        pBEP
        pActorPlotter
        pActorProfile
        pVisionPlotter
        pRadarPlotter
        pLaneBoundaryPlotter
        pSimulinkUIToolbar
        pBlockName
        pIsLegendOn
        pLaneMarkingPlotter       
                
    end
    
    methods
        function obj = BirdsEyeView(varargin)
            % Constructor
            setProperties(obj,nargin,varargin{:});
        end
    end
  %%  
    methods(Access=protected)
    %%  
        function resetImpl(obj)        
            
            % Plot coverage areas
            if obj.HasVision 
                %plot fov
                plotFov(obj,1);
            end
            if obj.HasRadar
               plotFov(obj,2);
            end            
            % Turn off the legend if it was off earlier
            if ~obj.pIsLegendOn
                legend(obj.pFig.CurrentAxes,'off')
            end
            % Turn off the legend when afterinit;
            legend(obj.pFig.CurrentAxes,'off')
            
            % Bring the figure to front, set it to visible, but prevent
            % others from plotting to it
            isDirty = get_param(bdroot,'Dirty');
            set_param(obj.pBlockName,'UserData',obj.pFig)
%             set_param(obj.pBlockName,'ModelCloseFcn',@helperCloseAll(gcb));
%             set_param(obj.pBlockName,'OpenFcn','helperOpenFcn');
            set_param(bdroot,'Dirty',isDirty);
            set(obj.pFig,'Visible','on','HandleVisibility','off');
        end

        function releaseImpl(obj)
            % Release resources, such as file handles
            if ~isempty(obj.pFig.UserData)
                modelName = bdroot;
                isFastRestart = strcmp(get_param(modelName,'FastRestart'),'on');
                if isFastRestart %In fast restart mode, SimulationStatus is still 'running' at the end
                    setStoppedIcon(obj.pFig.UserData.SimulinkUIToolbar);
                else
                    update(obj.pFig.UserData.SimulinkUIToolbar);
                end
                release(obj.pFig.UserData.SimulinkUIToolbar);
            end
            dirtyFlag = get_param(bdroot,'Dirty');
            set_param(obj.pBlockName,'OpenFcn','');
            set_param(bdroot,'Dirty',dirtyFlag);
        end

        function flag = isInactivePropertyImpl(obj,prop)
            % Return false if property is visible based on object 
            % configuration, for the command line and System block dialog
            flag = false;
            if ~obj.HasActors && strcmpi(prop, 'ActorsColor')
                flag=true;
            end          
        end
        
        function s = saveObjectImpl(obj)
            s = saveObjectImpl@matlab.System(obj);
            
            if isLocked(obj)
                s.pFig = obj.pFig;
                s.pBEP = obj.pBEP;
                s.pActorPlotter         = obj.pActorPlotter;
                s.pVisionPlotter        = obj.pVisionPlotter;
                s.pRadarPlotter         = obj.pRadarPlotter;                
                s.pLaneBoundaryPlotter  = obj.pLaneBoundaryPlotter;
                s.pIsLegendOn           = obj.pIsLegendOn;
                s.pLaneMarkingPlotter   = obj.pLaneMarkingPlotter;               
            end
        end
        
        function loadObjectImpl(obj,s,wasLocked)
            if wasLocked
                obj.pFig = s.pFig;
                obj.pBEP = s.pBEP;
                obj.pActorPlotter           = s.pActorPlotter;
                obj.pVisionPlotter          = s.pVisionPlotter;
                obj.pRadarPlotter           = s.pRadarPlotter;             
              
                obj.pLaneBoundaryPlotter    = s.pLaneBoundaryPlotter;
                obj.pIsLegendOn             = s.pIsLegendOn;
                obj.pSimulinkUIToolbar      = loadobj(s.pSimulinkUIToolbar);
                obj.pLaneMarkingPlotter     = s.pLaneMarkingPlotter;
                
                s = rmfield(s,{'pFig','pBEP','pActorPlotter','pVisionPlotter', ...
                    'pRadarPlotter',...
                    'pLaneBoundaryPlotter','pSimulinkUIToolbar', ...
                    'pLaneMarkingPlotter'});
            end
            loadObjectImpl@matlab.System(obj,s,wasLocked);
        end
    %% setup
        function setupImpl(obj,varargin)
            wasFigureClosed = (isempty(obj.pFig) || ~ishghandle(obj.pFig));
            obj.pBlockName = gcb;%get current block name
            if wasFigureClosed
                % Find the hidden figure handle
                root = groot;
                shh = get(root,'ShowHiddenHandles');
                set(root,'ShowHiddenHandles','on');
                hfig = findobj('Tag',obj.pBlockName);
                set(root,'ShowHiddenHandles',shh);
                if isempty(hfig)
                    hfig = figure('Name',obj.pBlockName,'Tag',obj.pBlockName, ...
                       'CloseRequestFcn',@helperCloseReq,'Visible','off');
                    obj.pIsLegendOn = true;
                else % Hide the figure while we build the bird's-eye plot
                    set(hfig,'Visible','off')
                    obj.pIsLegendOn = ~isempty(get(hfig.CurrentAxes,'Legend'));
                end

                obj.pFig = hfig;
            end
            
            % Create BEP before the toolbar because clf clears toolbars
            isBEPNeeded = (isempty(obj.pBEP) || wasFigureClosed);
            if isBEPNeeded
                clf(obj.pFig);
                hax = axes(obj.pFig);
                               
                obj.pBEP = birdsEyePlot('Parent',hax,'XLim',obj.XLim,'YLim',obj.YLim);
                
                
                
                %set grid on
                set(obj.pBEP.Parent,'XGrid','on');
                obj.pBEP.Parent.YGrid='on';                    

                %plot ego car
                
                egocar_position=[0 0];
                egocar_yaw=0;
                egocar_length=3.7;
                egocar_width=1.8;
                egocar_color=[0.03 0.484 0.145];
                
                obj.pActorPlotter = outlinePlotter(obj.pBEP);                   
                plotOutline(obj.pActorPlotter,egocar_position,egocar_yaw,egocar_length,egocar_width,...
                            'Color', egocar_color,'OriginOffset',[-egocar_length/2 0]);
                idx = 1;
                if obj.HasActors
                     
                    obj.pActorPlotter = outlinePlotter(obj.pBEP);
                    obj.pActorProfile = struct( ...
                        'Length', 4.7, ...
                        'Width', 1.8, ...
                        'OriginOffset', [-1.35 0]);
                    idx = idx+1;
                    if obj.ActorsColor
                        idx=idx+1;
                    end
                end
                
                if obj.HasVision
                    [h,~]=size(varargin{idx});                    
                    for i=1:h
                       obj.pVisionPlotter.pLine(i) = line(obj.pBEP.Parent, 0, 0,...
                        'DisplayName','Vision Detections',...
                        'MarkerEdgeColor', 'blue',...
                        'MarkerFaceColor', 'blue',...
                        'LineStyle','none', ...
                         'MarkerSize',6.5, ...                    %%  Change the Size **************************************************************        
                         'Marker','o');
                       obj.pVisionPlotter.hText(i) = text(obj.pBEP.Parent,0,0,'', ...
                            'VerticalAlignment','baseline', ...
                            'Clipping','on', ...
                            'FontSize', obj.LabelFontSize, ...
                            'Tag',['bepDetectionLabels_','Radar Detections']);
                    end
                    idx = idx+1;

                end
                
                if obj.HasRadar
                    [h,~]=size(varargin{idx});                    
                    for i=1:h
                        obj.pRadarPlotter.pLine(i) = line(obj.pBEP.Parent, 0, 0, ...
                              'DisplayName','Radar Detections', ...
                              'Marker','x', ...
                              'MarkerSize',obj.MarkerSize, ...
                              'MarkerEdgeColor','red', ...
                              'MarkerFaceColor','red', ...
                              'LineStyle','none', ...
                              'Tag', ['bepDetectionPositions_' 'Radar Detections']);
                          
                         obj.pRadarPlotter.hText(i) = text(obj.pBEP.Parent,0,0,'', ...
                            'VerticalAlignment','baseline', ...
                            'Clipping','on', ...
                            'FontSize', obj.LabelFontSize, ...
                            'Tag',['bepDetectionLabels_','Radar Detections']);
                    end
               
                    idx = idx+1;
                    
                end               
                
                if obj.HasRoads
                    grey = 0.3*ones(1,3);
                    [h,col]=size(varargin{idx});                    
                    if col==1 && h==9
                        h=1;
                    end
                    for i=1:h
                         obj.pLaneBoundaryPlotter.hLine(i) = line(obj.pBEP.Parent, 0, 0, ...
                             'DisplayName','Roads', ...
                             'Color',grey, ...
                             'LineStyle', '-', ...
                             'Tag', ['bepLaneBoundary_' 'Roads']);
                    end
                    idx = idx+1;     
                end
                
                if obj.HasLaneMarkings
                    obj.pLaneMarkingPlotter = laneMarkingPlotter(obj.pBEP,'DisplayName','Lane Markings', 'FaceColor', [0.6 0.6 0.6]);
                end               
                
                
            end
        end                
    %% step    
        function stepImpl(obj,varargin)
            %Update the Simulink control toolbar
            % update(obj.pFig.UserData.SimulinkUIToolbar);
            if(isempty(obj.pFig) || ~ishghandle(obj.pFig))
                return;
            end
            % Update the bird's-eye plot if it is visible
            if strcmp(get(obj.pFig,'Visible'),'on')
                idx = 1;
                if obj.aspectratio
                    xrange=obj.XLim(2)-obj.XLim(1);
                    yrange=obj.YLim(2)-obj.YLim(1);
                    obj.pBEP.Parent.DataAspectRatio=[xrange/yrange*obj.pFig.Position(3)/obj.pFig.Position(4) 1 1];%                     end
                end
                
                
                if obj.HasActors
                    actors = varargin{idx};
                    idx = idx+1;
                    
                    actorscolor=0;
                    if obj.ActorsColor
                        
                        actorscolor=varargin{idx};
                        idx = idx+1;
                    end
                    
                    plotRectDetections(obj,actors,actorscolor)
                    
                end
                
                if obj.HasVision
                    dets = varargin{idx};
                    idx = idx+1;
                    
                    plotVisionDetections(obj,obj.pVisionPlotter, dets);
                    
                end
                
                if obj.HasRadar
                    dets = varargin{idx};
                    idx = idx+1;
                    
                    plotDetections(obj,obj.pRadarPlotter, dets);
                    
                end                
                
                if obj.HasRoads
                    rbEgo = varargin{idx};
                    plotLanes(obj,rbEgo);
                    idx = idx+1;
                end                
                
                if obj.HasLaneMarkings
                    lm = varargin{idx};
                    plotLaneMarkings(obj,lm);
                end
                
                drawnow limitrate
            end
        end
    end
%% plot method
    methods(Access=private)               

        function plotDetections(obj,plotter, dets)
            
            %  plotDetection(plotter,dets(:,1:2));
            
            positions= dets(:,1:2);
            
            color = dets(:,3:5);
            labels=dets(:,6);
            labelvalid=dets(:,7);
            displayvalid=dets(:,8);
            
            pLine = plotter.pLine ;
            hText= plotter.hText ;
            for i=1:length(pLine)
                
                if displayvalid(i)
                    pLine(i).Marker='x';
                    if labelvalid(i)
                        hText(i).Position=positions(i,1:2)+obj.LabelOffset;
                        hText(i).String=num2str(labels(i,1));
                        hText(i).Color=color(i,:);
                    else
                        hText(i).String='b';
                    end
                else
                    pLine(i).Marker='none';
                    hText(i).String='';
                end
                
                pLine(i).XData=positions(i,1);
                pLine(i).YData=positions(i,2);
                pLine(i).MarkerEdgeColor=color(i,:);
                
            end
            
            
            
        end
        
        function plotVisionDetections(obj,plotter, dets)
             positions= dets(:,1:2);            
            color = dets(:,3:5);
            labels=dets(:,6);
            labelvalid=dets(:,7);
            displayvalid=dets(:,8);
            
            pLine = plotter.pLine ;
            hText= plotter.hText ;
            for i=1:length(pLine)
                
                if displayvalid(i)
                    pLine(i).Marker='o';
                    if labelvalid(i)
                        hText(i).Position=positions(i,1:2)+obj.LabelOffset;
                        hText(i).String=num2str(labels(i,1));
                        hText(i).Color=color(i,:);
                    else
                        hText(i).String='';
                    end
                else
                    pLine(i).Marker='none';
                    hText(i).String='';
                end
                
                pLine(i).XData=positions(i,1);
                pLine(i).YData=positions(i,2);
                pLine(i).MarkerEdgeColor=color(i,:);
                 pLine(i).MarkerFaceColor=color(i,:);
            end
           
            
        end
        
        function plotRectDetections(obj,dets,actcolors)
            [raw, col] = size(dets);
            pos = dets(:,1:2);
            OLength = dets(:,3);
            OWidth =dets(:,4);
            originOffset=[OLength/-2 OWidth*0];
            if col>4
                yaw=dets(:,5);
            else
                yaw=OLength*0;
            end
            color=zeros(raw,3);
            color=color*0.5;
%             color=[yaw+0.5 yaw+0.5 yaw+0.5];
            
            if obj.ActorsColor
                color=actcolors;
            else
                color=color.*[0 0.625 0.91];
            end
            
            
            plotOutline(obj.pActorPlotter,pos,yaw,OLength,OWidth,...
                'Color', color,...
                'OriginOffset',originOffset...
                );
        end
        
        function plotLanes(obj, rbEgo)
            if (isnumeric(rbEgo) && isscalar(rbEgo) && rbEgo == 0)
                % Input is disconnected, so return
                return
            end
            [raw, col] = size(rbEgo);
            if col<=1 && raw==9
                rbEgo=rbEgo';
            end
            Line=obj.pLaneBoundaryPlotter.hLine;
            
            roadlineA=rbEgo(:,1);
            roadlineB=rbEgo(:,2);
            roadlineC=rbEgo(:,3);
            roadlineD=rbEgo(:,4);            
            xlim=rbEgo(:,5:6);         
           
            roadlinecolor=rbEgo(:,7:9);
            
            for i=1:length(Line)       
                
                roaddatax=xlim(i,1):1:xlim(i,2);
                roaddatay=roadlineA(i).*roaddatax.^3+roadlineB(i).*roaddatax.^2+roadlineC(i).*roaddatax+roadlineD(i);
                
                Line(i).XData=roaddatax';
                Line(i).YData=roaddatay';
                Line(i).Color=roadlinecolor(i,:);
            end             
            
        end
        
        function plotLaneMarkings(obj,lm)
            if (isnumeric(lm) && isscalar(lm) && lm == 0)
                % Input is disconnected, so return
                return
            end
           
%             hText(i).Position=positions(i,1:2)+obj.LabelOffset;
%             hText(i).String=num2str(labels(i,1));
           
        end
               
        function plotFov(obj,type)
             if type==1 %vision
              sensorClr='blue';
              plotter = coverageAreaPlotter(obj.pBEP,'DisplayName',...
                        ['Camera' ' Coverage Area'],'FaceColor',sensorClr, ...
                        'EdgeColor', sensorClr);
              plotCoverageArea(plotter,obj.Camera_Pos,obj.Camera_Range,obj.Camera_Yaw,obj.Camera_Fov);
             end
             if type==2 %radar
              sensorClr='red';
              plotter = coverageAreaPlotter(obj.pBEP,'DisplayName',...
                        ['Radar' ' Coverage Area'],'FaceColor',sensorClr, ...
                        'EdgeColor', sensorClr);
              plotCoverageArea(plotter,obj.Radar_Pos,obj.Radar_Range,obj.Radar_Yaw,obj.Radar_Fov);
             end
        end
    end
    
%% Simulink interface
    methods(Access=protected)
        function str = getIconImpl(~)
            str = sprintf('Bird''s-Eye\nView');
        end
        
        function num = getNumInputsImpl(obj)
            num = 0;
            
            if obj.HasActors
                num = num+1;
                if obj.ActorsColor
                num = num+1;
                end
            end
            
            if obj.HasVision
                num = num+1;
            end
            if obj.HasRadar
                num = num+1;
            end
            
            if obj.HasRoads
                num = num+1;
            end
            if obj.HasLaneMarkings
                num = num+1;
            end
        end
        function varargout = getInputNamesImpl(obj)
            varargout = {};
            
            if obj.HasActors
                varargout = {varargout{:} 'Actors'}; %#ok<CCAT>
                if obj.ActorsColor
                    varargout = {varargout{:} 'ActorsColor'}; %#ok<CCAT>
                end
            end
            
            if obj.HasVision
                varargout = {varargout{:} 'Vision'}; %#ok<CCAT>

            end
            if obj.HasRadar
                varargout = {varargout{:} 'Radar'}; %#ok<CCAT>

            end
            if obj.HasRoads
                varargout = {varargout{:} 'Roads'}; %#ok<CCAT>
            end
            if obj.HasLaneMarkings
                varargout = {varargout{:} 'Lane Markings'}; %#ok<CCAT>
            end
        end
    end

    methods(Access = protected, Static)
        function header = getHeaderImpl
            % Define header panel for System block dialog
            header = matlab.system.display.Header(...
                'Title', '鸟瞰图',...
                'Text', getHeaderText());
        end

        function group = getPropertyGroupsImpl
            % Define property section(s) for System block dialog
            firstgroup = matlab.system.display.SectionGroup('Title','输入设置',...
                'PropertyList',{'HasActors'});
            firstlist = {'XLim', 'YLim','HasActors','ActorsColor','HasVision','HasRadar','HasRoads','HasLaneMarkings'};
            firstgroup.PropertyList= firstlist;
            
            secondgroup = matlab.system.display.SectionGroup('Title','FOV参数',...
                'PropertyList',{'Camera_Fov'});    
            secondlist = {'Camera_Fov','Camera_Range','Camera_Yaw','Camera_Pos','Radar_Fov','Radar_Range','Radar_Yaw','Radar_Pos'};
            secondgroup.PropertyList= secondlist;
            
            thirdgroup = matlab.system.display.SectionGroup('Title','其他参数',...
                'PropertyList',{'Camera_Fov'});    
            thirdlist = {'MarkerSize','LabelFontSize','LabelOffset','aspectratio'};
            thirdgroup.PropertyList= thirdlist;          
                
            group=[firstgroup secondgroup thirdgroup];
        end

        function simMode = getSimulateUsingImpl
            % Return only allowed simulation mode in System block dialog
            simMode = 'Interpreted execution';
        end

        function flag = showSimulateUsingImpl
            % Return false if simulation mode hidden in System block dialog
            flag = false;
        end
    end
    
end

%% func
function str = getHeaderText
str = sprintf([...
    'The Birds Eye View block creates and maintains a bird''s-eye plot. ',...
    'You can enable the display of actors, vision detections, radar ',...
    'detections, tracks and road boundaries.\n\n',...
    '建议在EnabledSubystem下使用以提高效率.\n',...
    ]);
end

function helperCloseReq(fig,event)
%helperCloseReq Captures and executes the 'Close' button click event.
%   In helperBirdsEyePlot, the figure becomes invisible. It will be deleted
%   when the model is closed.

% Make sure the even is to 'close'
if strcmp(event.EventName,'Close')
    if strcmp(fig.HandleVisibility,'off') % Locked against deletion
        set(fig,'Visible','off')
    else
        closereq
    end
end
end

function helperOpenFcn
    isStopped = strcmp(get_param(bdroot,'SimulationStatus'),'stopped');
    if ~isStopped
        h = get_param(gcb,'UserData');
        set(h,'Visible','on');
    end
end