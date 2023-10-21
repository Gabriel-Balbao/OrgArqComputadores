case STOREI: // state=DECODE
	//mem[reg[rx]] = reg[ry];
	selM4 = rx;
	selM3 = ry;
	selM1 = sM4;
	selM5 = sM3;
	RW = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
