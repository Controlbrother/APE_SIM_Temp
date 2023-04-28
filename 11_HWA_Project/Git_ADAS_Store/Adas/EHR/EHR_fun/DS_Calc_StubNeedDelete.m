function StubNeedDelete = DS_Calc_StubNeedDelete(PositionStruct,StubStruct,VEHICLE_REAR_LOOKING_DISTANCE,VEHICLE_FORWARD_LOOKING_DISTANCE)

%%%%%%%%%Position Road%%%%%%%%%
if StubStruct.StubPathIdx == PositionStruct.PosnPathIdx
    if (StubStruct.StubRelativeOffset < VEHICLE_REAR_LOOKING_DISTANCE)...
        || (StubStruct.StubRelativeOffset > VEHICLE_FORWARD_LOOKING_DISTANCE)
        StubNeedDelete = true;
    else
        StubNeedDelete = false;
    end
%%%%%%%%%Other Road%%%%%%%%%
else   %Stub on old position road
    if PositionStruct.PosnOffset > abs(VEHICLE_REAR_LOOKING_DISTANCE)
        StubNeedDelete = true;
    else
        StubNeedDelete = false;
    end
end