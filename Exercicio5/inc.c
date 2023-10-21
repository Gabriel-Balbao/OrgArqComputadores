case INC: // state=DECODE
    //reg[rx]++;            // Inc Rx ou DEC
	selM3 = rx;
	selM4 = 8;
	if(pega_pedaco(IR, 6, 6) == 0)
		OP = 32;
	else if(pega_pedaco(IR, 6, 6) == 1)
		OP = 33;
	selM2 = sULA;
	LoadReg[rx] = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
