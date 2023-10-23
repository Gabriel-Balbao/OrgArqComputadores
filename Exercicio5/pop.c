case POP: // state=DECODE
    //SP++;
    IncSP = 1;
    // -----------------------------
    state=STATE_EXECUTE;
    break;

case POP: // state=EXECUTE
    selM1 = sSP;
    RW = 0;
    selM2 = sDATA_OUT;
    LoadReg[rx] = 1;
    // -----------------------------
    state=STATE_FETCH;
    break; 