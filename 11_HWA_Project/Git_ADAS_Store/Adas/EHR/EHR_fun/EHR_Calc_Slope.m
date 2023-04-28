function Slope = EHR_Calc_Slope(Slope_Original)

SLOPE_UNKNOWN = single(60);

if 1023 == Slope_Original
    Slope = SLOPE_UNKNOWN;   %Means Curvature Unknown
else
    Slope = single((Slope_Original * 0.1) - 51.1);
end
