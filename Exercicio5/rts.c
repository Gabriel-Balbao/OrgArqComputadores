case RTS: // state=DECODE
    // SP++;
    // o ponteiro da pilha aponta para o endereço mais "abaixo"
    // nesse caso, incrementar o SP indica subida na memória
    // decrementar indica descida
    // dica: basta imaginar a pilha com direção de baixo para cima
    IncSP = 1; 
    // -----------------------------
    state=STATE_EXECUTE;
    break;

case RTS: // state=EXECUTE
    //PC = MEMORY[SP];
    selM1 = sSP;
    RW = 0;
    LoadPC = 1;
    // -----------------------------
    state=STATE_EXECUTE2;
    break;

case RTS: // state=EXECUTE2
    IncPC = 1;
    // -----------------------------
    state=STATE_FETCH;
    break;

// seria possível eliminar o último estado do executa 2? 
// ideia: precisariamos aumentar o PC antes do última borda de subida
