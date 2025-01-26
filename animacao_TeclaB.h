#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"  // Inclui a biblioteca para controlar a matriz de LEDs
#include "hardware/pwm.h"


// Função para emitir som no buzzer
void play_sound(uint gpio, uint freq, uint duration_ms) {
    // Configura o pino para PWM
    gpio_set_function(gpio, GPIO_FUNC_PWM);
    uint slice = pwm_gpio_to_slice_num(gpio); // Obtém o slice do PWM associado ao pino

    // Configura o divisor de clock para obter a frequência correta
    uint32_t clock_freq = 125000000; // Frequência base do RP2040 (125 MHz)
    float divider = (float)clock_freq / (freq * 1000); // Calcula o divisor para a frequência desejada
    pwm_set_clkdiv(slice, divider); // Configura o divisor

    // Configura o período do PWM
    uint16_t top = clock_freq / (freq * divider) - 1; // Calcula o valor de wrap (top)
    pwm_set_wrap(slice, top);

    // Configura o nível do duty cycle (50%)
    pwm_set_gpio_level(gpio, top / 2);

    // Habilita o PWM
    pwm_set_enabled(slice, true);

    // Mantém o som ativo pelo tempo especificado
    sleep_ms(duration_ms);

    // Desativa o PWM
    pwm_set_enabled(slice, false);
}

void animacao_TeclaB() {
    // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21

    // Configuração inicial da matriz de LEDs
    int matriz[5][5][3];  // Matriz 5x5 para armazenar os valores RGB de cada LED

    // Define a cor azul para todos os LEDs
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j][0] = 0;   // Vermelho (0% de intensidade)
            matriz[i][j][1] = 0;   // Verde (0% de intensidade)
            matriz[i][j][2] = 255; // Azul (100% de intensidade)
        }
    }

    // Atualiza os LEDs com a cor azul
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int index = getIndex(i, j);  // Converte a posição 2D (i, j) para um índice 1D
            npSetLED(index, matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]); // Define a cor do LED
        }
    }

    npWrite(); // Atualiza os LEDs fisicamente
}