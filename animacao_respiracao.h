#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/pwm.h"

void animacao_respiracao(int count){
    int intensidade_azul = 255, sleep = 300;
    float multiplicador = 0.1, adicional = 0.2;

    bool subindo = true;

    // For principal da animação
    for (int temp = 0; temp < count; temp++)
    {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int posicao = getIndex(i, j); // Calcula a posição linear do LED
                npSetLED(posicao, 0, 0, intensidade_azul * multiplicador);
            }
        }
        npWrite();

        if (multiplicador < 1.0 && subindo){
            multiplicador += adicional;
            if (multiplicador < 1.0) adicional += 0.1;
        }
        else if (multiplicador > 0.1 && !subindo) {
            multiplicador -= adicional;
            if (multiplicador > 0.1) adicional -= 0.1;
        }
        else subindo = !subindo;
        sleep_ms(sleep);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = getIndex(i, j); // Calcula a posição linear do LED
            npSetLED(posicao, 0, 0, 0);  // Define o LED como desligado (RGB: 0, 0, 0)
        }
    }
    npWrite();
}