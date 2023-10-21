case MOV: // state=DECODE
	selM4 = ry;
	selM2 = sM4;
	LoadReg[rx] = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
