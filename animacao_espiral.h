#define ANIMACAO_ESPIRAL_H

#define ACESSO {0, 255, 0}  // Cor verde
#define APAGADO {0, 0, 0}   // Cor apagada (preto)

void animacao_espiral(int sleep) {
    int frame1[5][5][3] = {
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO},
        {APAGADO, APAGADO, APAGADO, APAGADO, ACESSO},
        {APAGADO, APAGADO, APAGADO, APAGADO, ACESSO},
        {APAGADO, APAGADO, APAGADO, APAGADO, ACESSO},
        {APAGADO, APAGADO, APAGADO, APAGADO, ACESSO}
    };
    desenho_sprite(frame1);
    npWrite();
    sleep_ms(sleep);

    int frame2[5][5][3] = {
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, APAGADO, APAGADO, APAGADO, ACESSO},
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO}
    };
    desenho_sprite(frame2);
    npWrite();
    sleep_ms(sleep);

    int frame3[5][5][3] = {
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO},
        {ACESSO, ACESSO, APAGADO, ACESSO, ACESSO},
        {ACESSO, ACESSO, APAGADO, ACESSO, ACESSO},
        {ACESSO, ACESSO, APAGADO, ACESSO, ACESSO},
        {ACESSO, ACESSO, ACESSO, ACESSO, ACESSO}
    };
    desenho_sprite(frame3);
    npWrite();
    sleep_ms(sleep);
}
