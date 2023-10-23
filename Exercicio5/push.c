case PUSH: // state=DECODE
    selM3 = rx;
    selM5 = sM3;
    selM1 = sSP;
    RW = 1;
    DecSP = 1;
    // -----------------------------
    state=STATE_FETCH;
    break;
