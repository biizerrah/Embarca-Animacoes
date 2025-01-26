#include "buzzer.h"

// Implementação da função play_sound
void play_sound(uint gpio, uint freq, uint duration_ms) {
    if (freq == 0) {
        // Nota de silêncio (pausa)
        sleep_ms(duration_ms);
        return;
    }

    // Configura o pino para PWM
    gpio_set_function(gpio, GPIO_FUNC_PWM);
    uint slice = pwm_gpio_to_slice_num(gpio);

    // Configura o divisor de clock para obter a frequência correta
    float divider = 125000000.0f / (freq * 1000.0f); // Frequência base do RP2040 (125 MHz)
    pwm_set_clkdiv(slice, divider);

    // Configura o período do PWM (wrap value)
    uint16_t wrap = (125000000 / (freq * divider)) - 1;
    pwm_set_wrap(slice, wrap);

    // Configura o nível do duty cycle (50%)
    pwm_set_gpio_level(gpio, wrap / 2);

    // Habilita o PWM
    pwm_set_enabled(slice, true);

    // Mantém o som ativo pelo tempo especificado
    sleep_ms(duration_ms);

    // Desativa o PWM
    pwm_set_enabled(slice, false);
}