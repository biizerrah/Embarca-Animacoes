#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"

void animacao_TeclaB() {
    // Configuração inicial da matriz de LEDs
    int matriz[5][5][3];

    // Define a cor azul para todos os LEDs
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j][0] = 0;   // Vermelho
            matriz[i][j][1] = 0;   // Verde
            matriz[i][j][2] = 255; // Azul (intensidade máxima)
        }
    }

    // Atualiza os LEDs com a cor azul
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int index = getIndex(i, j);  // Converte a posição 2D para 1D
            npSetLED(index, matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    npWrite(); // Atualiza os LEDs fisicamente
}