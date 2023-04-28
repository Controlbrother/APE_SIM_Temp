function TSR_Value = EHR_Calc_TrafficSignValue(V2_Value)

    switch V2_Value
        case 47
            TSR_Value = 0x0F;
        case 46
            TSR_Value = 0x10;
        case 33
            TSR_Value = 0x11;
        case 32
            TSR_Value = 0x12;
        case 53
            TSR_Value = 0x1F;
        case 50
            TSR_Value = 0x20;
        case 4
            TSR_Value = 0x24;
        case 76
            TSR_Value = 0x25;
        case 44
            TSR_Value = 0x2E;
        case 43
            TSR_Value = 0x2F;
        case 17
            TSR_Value = 0x30;
        otherwise
            TSR_Value = 0xFF;
    end

end

