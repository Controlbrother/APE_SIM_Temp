function ProfileLongNeedDelete = DS_Calc_ProfileLongNeedDelete(PositionStruct,ProfileLongStruct,...
    VEHICLE_REAR_LOOKING_DISTANCE,VEHICLE_FORWARD_LOOKING_DISTANCE,...
    StubVector,StubVectorSize)

t_flag = false;  %Whether the valid stub data can be found

%%%%%%%%%Position Road%%%%%%%%%
if ProfileLongStruct.ProfLongPathIdx == PositionStruct.PosnPathIdx
    if (ProfileLongStruct.ProfLongRelativeOffset < VEHICLE_REAR_LOOKING_DISTANCE)...
        || (ProfileLongStruct.ProfLongRelativeOffset > VEHICLE_FORWARD_LOOKING_DISTANCE)
        ProfileLongNeedDelete = true;
    else
        ProfileLongNeedDelete = false;
    end
%%%%%%%%%Other Road%%%%%%%%%
else
    %%%%iterator overflow prevention%%%%
    if 0 == StubVectorSize
        %Do nothing
    else
        for t = 1:StubVectorSize
            if ProfileLongStruct.ProfLongPathIdx == StubVector(t).StubStubPathIdx
                t_flag = true;
                break;
            end
        end
    end
    if true == t_flag   %This is stub
        ProfileLongNeedDelete = false;
    else   %ProfileLong on old position road
        if PositionStruct.PosnOffset > abs(VEHICLE_REAR_LOOKING_DISTANCE)
            ProfileLongNeedDelete = true;
        else
            ProfileLongNeedDelete = false;
        end
    end
end