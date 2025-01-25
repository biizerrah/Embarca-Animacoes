void animacao_cobrinha(int sleep) {

    //frame 1 
    npClear();
    int framecobra1[5][5][3]={
        {{255, 0, 25}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}}
    };
    desenho_sprite(framecobra1);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);
    
    //frame 2 
    npClear();
    int framecobra2[5][5][3]={
        {{255, 0, 25}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };
    desenho_sprite(framecobra2);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    //frame 3 
    npClear();
    int framecobra3[5][5][3]={
        {{255, 0, 25}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };
    desenho_sprite(framecobra3);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    //frame 4 
    npClear();
    int framecobra4[5][5][3]={
        {{255, 0, 25}, {0, 0, 0}, {53, 10, 242}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {53, 10, 242}, {53, 10, 242}, {53, 10, 242}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };
    desenho_sprite(framecobra4);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    //frame 5 
    npClear();
    int framecobra5[5][5][3]={
        {{255, 0, 25}, {53, 10, 242}, {53, 10, 242}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {53, 10, 242}, {53, 10, 242}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };
    desenho_sprite(framecobra5);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    //frame 6 
    npClear();
    int framecobra6[5][5][3]={
        {{255, 0, 25}, {255, 0, 25}, {255, 0, 25}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {255, 0, 25}, {255, 0, 25}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
        {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
    };
    desenho_sprite(framecobra6);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);
}