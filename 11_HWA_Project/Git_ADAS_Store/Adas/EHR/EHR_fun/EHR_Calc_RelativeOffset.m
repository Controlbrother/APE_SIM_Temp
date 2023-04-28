function RelativeOffset = EHR_Calc_RelativeOffset(PositionStruct,PathIdx,Offset)

OFFSET_INVALID = uint16(8191);
OFFSET_MAX = uint16(8190);
REAR_LOOKING_DISTANCE_LIMIT = single(-2000);
FORWARD_LOOKING_DISTANCE_LIMIT = single(3000);
RelativeOffset = int16(0);

%Offset invalid
if OFFSET_INVALID == Offset
    RelativeOffset = int16(OFFSET_INVALID);
%Offset valid
else
    %Only calculate position road
    if PathIdx == PositionStruct.PosnPathIdx
        RelativeOffset = int16(Offset) - int16(PositionStruct.PosnOffset);
        if RelativeOffset < REAR_LOOKING_DISTANCE_LIMIT 
            RelativeOffset = RelativeOffset + int16(OFFSET_MAX + 1);
        elseif RelativeOffset > FORWARD_LOOKING_DISTANCE_LIMIT
            RelativeOffset = RelativeOffset - int16(OFFSET_MAX + 1);
        else
            %Do nothing
        end
    else
        %Not position road --- 0
    end
end