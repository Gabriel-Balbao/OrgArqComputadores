// state=DECODE
case ADD:
case SUB:
case MULT:
case DIV:
case LMOD:
case LAND:
case LOR:
case LXOR:
case LNOT:
	// reg[rx] = reg[ry] + reg[rz]; // Soma ou outra operacao
	selM3 = ry;
	selM4 = rz;
	OP = pega_pedaco(IR, 15, 10);
	carry = pega_pedaco(IR, 0, 0);
	selM2 = sULA;
	LoadReg[rx] = 1;
	selM6 = sULA;
	LoadFR = 1;
	// -----------------------------
	state=STATE_FETCH;
	break;
