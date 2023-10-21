case STORE: // state=DECODE
	//MAR = MEMORY[PC];
	//PC++;
	selM1 = sPC;
	RW = 0;
	LoadMAR = 1;
	IncPC = 1;
	// -----------------------------
	state=STATE_EXECUTE;
	break;

case STORE: // state=EXECUTE
	//MEMORY[MAR] = reg[rx];
	selM3 = rx;
	selM5 = sM3;
	selM1 = sMAR;
	RW = 1;
	// -----------------------------
	state=STATE_FETCH;
	break; 
