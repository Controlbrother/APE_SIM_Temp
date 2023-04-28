function Cycles = EHR_Calc_Duration_Cycles(CurVal,K1Val,CyclesK1)

if CurVal == K1Val
    Cycles = min(CyclesK1 + 1,65535);
else
    Cycles = uint16(0);
end