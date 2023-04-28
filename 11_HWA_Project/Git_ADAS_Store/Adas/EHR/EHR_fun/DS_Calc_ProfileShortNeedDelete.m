function ProfileShortNeedDelete = DS_Calc_ProfileShortNeedDelete(PositionStruct,ProfileShortStruct,...
    VEHICLE_REAR_LOOKING_DISTANCE,VEHICLE_FORWARD_LOOKING_DISTANCE,...
    StubVector,StubVectorSize)

t_flag = false;  %Whether the valid stub data can be found

%%%%%%%%%Position Road%%%%%%%%%
if ProfileShortStruct.ProfShortPathIdx == PositionStruct.PosnPathIdx
    if (ProfileShortStruct.ProfShortRelativeOffset < VEHICLE_REAR_LOOKING_DISTANCE)...
        || (ProfileShortStruct.ProfShortRelativeOffset > VEHICLE_FORWARD_LOOKING_DISTANCE)
        ProfileShortNeedDelete = true;
    else
        ProfileShortNeedDelete = false;
    end
%%%%%%%%%Other Road%%%%%%%%%
else
    %%%%iterator overflow prevention%%%%
    if 0 == StubVectorSize
        %Do nothing
    else
        for t = 1:StubVectorSize
            if ProfileShortStruct.ProfShortPathIdx == StubVector(t).StubStubPathIdx
                t_flag = true;
                break;
            end
        end
    end
    if true == t_flag   %This is stub
        ProfileShortNeedDelete = false;
    else   %ProfileShort on old position road
        if PositionStruct.PosnOffset > abs(VEHICLE_REAR_LOOKING_DISTANCE)
            ProfileShortNeedDelete = true;
        else
            ProfileShortNeedDelete = false;
        end
    end
end