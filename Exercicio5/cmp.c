// state=DECODE
case CMP:   // seta 3 flags: maior, menor ou igual
    //if(rx == ry)
    selM3 = rx;
    selM4 = ry;
    selM6 = sULA;
    LoadFR = 1;
    // -----------------------------
    state=STATE_FETCH;
    break;