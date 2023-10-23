// state=DECODE
case CMP:   // seta 3 flags: maior, menor ou igual
    //if(rx == ry)
    selM3 = rx;
    selM4 = ry;
    OP = pega_pedaco(IR, 15, 10);
    carry = 0;
    selM6 = sULA;
    LoadFR = 1;
    // -----------------------------
    state=STATE_FETCH;
    break;