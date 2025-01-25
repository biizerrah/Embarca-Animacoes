#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"

// Função para ligar todos os LEDs na cor verde (50% de intensidade)
void animacao_TeclaD() {
    // Define a cor verde com 50% de intensidade (R = 0, G = 127, B = 0)
    int intensidade_verde = 127; // 50% de 255 = 127

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = getIndex(i, j); // Calcula a posição linear do LED
            npSetLED(posicao, 0, intensidade_verde, 0); // Certifica que R = 0, G = 127, B = 0
        }
    }
    npWrite(); // Atualiza fisicamente os LEDs
}
