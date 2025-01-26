#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "buzzer.h"

// Função para ligar todos os LEDs na cor branca (20% de intensidade)
void animacao_TeclaHashtag() {
    play_sound(21, 1000, 300); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    
    // Define a cor branca com 20% de intensidade (R = G = B = 51)
    int intensidade_branca = 51; // 20% de 255 = 51

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = getIndex(i, j); // Calcula a posição linear do LED
            npSetLED(posicao, intensidade_branca, intensidade_branca, intensidade_branca); // Branco: R = G = B
        }
    }
    npWrite(); // Atualiza fisicamente os LEDs
}
