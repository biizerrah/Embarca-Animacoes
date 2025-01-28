#include <stdlib.h>

void animacao_aleatoria(int sleep) {
        // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    for (int frame = 0; frame < 5; frame++) {
        for (int i = 0; i < 25; i++) {
            uint8_t r = rand() % 256;
            uint8_t g = rand() % 256;
            uint8_t b = rand() % 256;
            npSetLED(i, r, g, b);
        }
        npWrite();
        sleep_ms(sleep);
    }
    npClear();
    npWrite();
}
