function SpeedLimit = EHR_Calc_SpeedLimit(EffSpdLmt)

SEGMENT_SPEED_LIMIT_5KMH = uint8(1);
SEGMENT_SPEED_LIMIT_7KMH = uint8(2);
SEGMENT_SPEED_LIMIT_UNLIMITED = uint8(30);

SPEED_LIMIT_UNKNOWN = uint8(0);
SPEED_LIMIT_UNLIMITED = uint8(255);

if SEGMENT_SPEED_LIMIT_5KMH == EffSpdLmt
    SpeedLimit = uint8(5);
elseif SEGMENT_SPEED_LIMIT_7KMH == EffSpdLmt
    SpeedLimit = uint8(7);
elseif (SEGMENT_SPEED_LIMIT_7KMH < EffSpdLmt) && (SEGMENT_SPEED_LIMIT_UNLIMITED > EffSpdLmt)
    SpeedLimit = (uint8(EffSpdLmt) - 1) * 5;
elseif SEGMENT_SPEED_LIMIT_UNLIMITED == EffSpdLmt
    SpeedLimit = SPEED_LIMIT_UNLIMITED;
else
    SpeedLimit = SPEED_LIMIT_UNKNOWN;
end