function Curvature = EHR_Calc_Curvature(Curvature_Original)

CURVATURE_UNKNOWN = single(1);
Curvature = single(0);

t_Curvature_Calc = double(Curvature_Original) - 511;

if 1023 == Curvature_Original
    Curvature = CURVATURE_UNKNOWN;   %Means Curvature Unknown
else
    if abs(t_Curvature_Calc) <= 64
        Curvature = single(t_Curvature_Calc/100000.0);
    elseif (abs(t_Curvature_Calc) > 64) && (abs(t_Curvature_Calc) <= 128)
        Curvature = single(2 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 32)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 128) && (abs(t_Curvature_Calc) <= 192)
        Curvature = single(4 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 80)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 192) && (abs(t_Curvature_Calc) <= 256)
        Curvature = single(8 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 136)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 256) && (abs(t_Curvature_Calc) <= 320)
        Curvature = single(16 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 196)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 320) && (abs(t_Curvature_Calc) <= 384)
        Curvature = single(32 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 258)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 384) && (abs(t_Curvature_Calc) <= 448)
        Curvature = single(64 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 321)) / 100000.0);
    elseif (abs(t_Curvature_Calc) > 448) && (abs(t_Curvature_Calc) <= 511)
        Curvature = single(128 * (t_Curvature_Calc - ((t_Curvature_Calc/abs(t_Curvature_Calc)) * 384.5)) / 100000.0);
    end
    Curvature = - Curvature;
end