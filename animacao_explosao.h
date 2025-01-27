#include "matriz_rgb.h"
#include <stdlib.h>
#include "time.h"
void animacao_explosao(int sleep) {
    const int altura = 5;
    const int largura = 5;

    // Criação do quadro da animação
    for (int passo = 0; passo < 5; passo++) {
        npClear();

        // Declarar o array dinamicamente e inicializá-lo manualmente
        int frame[altura][largura][3];
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                frame[i][j][0] = 0; // Vermelho
                frame[i][j][1] = 0; // Verde
                frame[i][j][2] = 0; // Azul
            }
        }

        // Explosão (expansão)
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                if (abs(i - 2) <= passo && abs(j - 2) <= passo) {
                    frame[i][j][0] = 255;  // Vermelho
                    frame[i][j][1] = 165;  // Verde
                    frame[i][j][2] = 0;    // Azul (amarelo)
                }
            }
        }

        // Desenhar o frame e atualizar os LEDs
        desenho_sprite(frame);
        npWrite();
        sleep_ms(sleep);
    }

    // Contração da explosão
    for (int passo = 4; passo >= 0; passo--) {
        npClear();

        // Resetar quadro
        int frame[altura][largura][3];
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                frame[i][j][0] = 0; // Vermelho
                frame[i][j][1] = 0; // Verde
                frame[i][j][2] = 0; // Azul
            }
        }

        // Explosão (contração)
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                if (abs(i - 2) <= passo && abs(j - 2) <= passo) {
                    frame[i][j][0] = 255;  // Vermelho
                    frame[i][j][1] = 165;  // Verde
                    frame[i][j][2] = 0;    // Azul (amarelo)
                }
            }
        }

        // Desenhar o frame e atualizar os LEDs
        desenho_sprite(frame);
        npWrite();
        sleep_ms(sleep);
    }
}

