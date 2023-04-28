function SegmentNeedDelete = DS_Calc_SegmentNeedDelete(PositionStruct,SegmentStruct,...
    VEHICLE_REAR_LOOKING_DISTANCE,VEHICLE_FORWARD_LOOKING_DISTANCE,...
    StubVector,StubVectorSize)

t_flag = false;  %Whether the valid stub data can be found

%%%%%%%%%Position Road%%%%%%%%%
if SegmentStruct.SegPathIdx == PositionStruct.PosnPathIdx
    if (SegmentStruct.SegRelativeOffset < VEHICLE_REAR_LOOKING_DISTANCE)...
        || (SegmentStruct.SegRelativeOffset > VEHICLE_FORWARD_LOOKING_DISTANCE)
        SegmentNeedDelete = true;
    else
        SegmentNeedDelete = false;
    end
%%%%%%%%%Other Road%%%%%%%%%
else
    %%%%iterator overflow prevention%%%%
    if 0 == StubVectorSize
        %Do nothing
    else
        for t = 1:StubVectorSize
            if SegmentStruct.SegPathIdx == StubVector(t).StubStubPathIdx
                t_flag = true;
                break;
            end
        end
    end
    if true == t_flag   %This is stub
        SegmentNeedDelete = false;
    else   %Segment on old position road
        if PositionStruct.PosnOffset > abs(VEHICLE_REAR_LOOKING_DISTANCE)
            SegmentNeedDelete = true;
        else
            SegmentNeedDelete = false;
        end
    end
end