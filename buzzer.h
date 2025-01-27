#ifndef BUZZER_H
#define BUZZER_H

#include "pico/stdlib.h"
#include "hardware/pwm.h"

// Declaração da função play_sound
void play_sound(uint gpio, uint freq, uint duration_ms);

#endif // BUZZER_H