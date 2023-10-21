case LOAD: // state=DECODE
	// MAR = MEMORY[PC];
	// PC++;
	selM1 = sPC;
	RW = 0;
	LoadMAR = 1;
	IncPC = 1;
	// -----------------------------
	state=STATE_EXECUTE;
	break;


case LOAD: // state=EXECUTE
	//reg[rx] = MEMORY[MAR];
	selM1 = sMAR;
	RW = 0;
	selM2 = sDATA_OUT;
	LoadReg[rx] = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
