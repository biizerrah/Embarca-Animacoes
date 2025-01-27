#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/pwm.h"

#define ACESSO {255, 0, 0}
#define APAGADO {0, 0, 0}

void animacao_relogio(int sleep) {
    // 10
    npClear();
    int frame1[5][5][3]={
            {ACESSO, APAGADO, ACESSO, ACESSO, ACESSO},
            {ACESSO, APAGADO, ACESSO, APAGADO, ACESSO},
            {ACESSO, APAGADO, ACESSO, APAGADO, ACESSO},
            {ACESSO, APAGADO, ACESSO, APAGADO, ACESSO},
            {ACESSO, APAGADO, ACESSO, ACESSO, ACESSO}
    };
    desenho_sprite(frame1);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);
    
    // 9
    npClear();
    int frame2[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
    };
    desenho_sprite(frame2);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 8
    npClear();
    int frame3[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame3);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 7
    npClear();
    int frame4[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
    };
    desenho_sprite(frame4);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 6
    npClear();
    int frame5[5][5][3]={
            {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
            {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame5);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 5
    npClear();
    int frame6[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame6);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 4
    npClear();
    int frame7[5][5][3]={
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
    };
    desenho_sprite(frame7);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 3
    npClear();
    int frame8[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame8);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 2
    npClear();
    int frame9[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame9);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 1
    npClear();
    int frame10[5][5][3]={
            {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
            {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
            {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
            {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
            {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO}
    };
    desenho_sprite(frame10);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // 0
    npClear();
    int frame11[5][5][3]={
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
            {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
    };
    desenho_sprite(frame11);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);

    // Desligar tudo
    npClear();
    int frame12[5][5][3]={
            {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
            {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
            {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
            {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
            {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO}
    };
    desenho_sprite(frame12);
    npWrite(); // Escreve os dados nos LEDs.
    sleep_ms(sleep);
}