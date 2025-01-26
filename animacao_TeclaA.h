#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/pwm.h"
#include "buzzer.h"


void animacao_TeclaA() {
    // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21

    // Define a cor preta (desligado) para todos os LEDs
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = getIndex(i, j); // Calcula a posição linear do LED
            npSetLED(posicao, 0, 0, 0);  // Define o LED como desligado (RGB: 0, 0, 0)
        }
    }
    npWrite(); // Atualiza fisicamente os LEDs
}
