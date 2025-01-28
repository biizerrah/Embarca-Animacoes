#define ANIMACAO_BORDA_CENTRO_H

#define ACESSO {255, 255, 0}  // Exemplo de cor branca
#define APAGADO {0, 0, 0}       // Exemplo de cor apagada (preto)

void animacao_borda_centro(int sleep) {
        // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    int frame1[5][5][3] = {
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO}
    };
    desenho_sprite(frame1);
    npWrite();
    sleep_ms(sleep);

    int frame2[5][5][3] = {
        {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
        {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
        {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
        {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
        {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO}
    };
    desenho_sprite(frame2);
    npWrite();
    sleep_ms(sleep);
}
