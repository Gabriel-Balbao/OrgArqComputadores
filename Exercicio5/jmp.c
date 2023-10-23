case JMP: // state=DECODE
    COND = pega_pedaco(IR,9,6);

    if((COND == 0)                       	                  // NO COND
            || (FR[0]==1 && (COND==7))                        // GREATER
            || ((FR[2]==1 || FR[0]==1) && (COND==9))          // GREATER EQUAL
            || (FR[1]==1 && (COND==8))                        // LESSER
            || ((FR[2]==1 || FR[1]==1) && (COND==10))         // LESSER EQUAL
            || (FR[2]==1 && (COND==1))                        // EQUAL
            || (FR[2]==0 && (COND==2))                        // NOT EQUAL
            || (FR[3]==1 && (COND==3))                        // ZERO
            || (FR[3]==0 && (COND==4))                        // NOT ZERO
            || (FR[4]==1 && (COND==5))                        // CARRY
            || (FR[4]==0 && (COND==6))                        // NOT CARRY
            || (FR[5]==1 && (COND==11))                       // OVERFLOW
            || (FR[5]==0 && (COND==12))                       // NOT OVERFLOW
            || (FR[6]==1 && (COND==14))                       // NEGATIVO
            || (FR[9]==1 && (COND==13)))                      // DIVBYZERO
    { // PC = MEMORY[PC];
        selM1 = sPC;
        RW = 0;
        LoadPC = 1;
    }
    else
        //PC++;
        IncPC = 1;
    // -----------------------------
    state=STATE_FETCH;
    break;