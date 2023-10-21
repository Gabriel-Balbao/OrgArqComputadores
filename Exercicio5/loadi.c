case LOADI: // state=DECODE
	// reg[rx] = MEMORY[reg[ry]];
	selM4 = ry;
	selM1 = sM4;
	RW = 0;
	selM2 = sDATA_OUT;
	LoadReg[rx] = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
