#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "buzzer.h"

// Função para ligar todos os LEDs na cor vermelha (80% de intensidade)
void animacao_TeclaC() {
    play_sound(21, 1000, 300); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    // Define a cor vermelha com 80% de intensidade (R = 204, G = 0, B = 0)
    int intensidade_vermelha = 204;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = getIndex(i, j); // Calcula a posição linear do LED
            npSetLED(posicao, intensidade_vermelha, 0, 0); // Define a cor como vermelho
        }
    }
    npWrite(); // Atualiza fisicamente os LEDs
}
