void animacao_corrida(int sleep) {

        // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    
    for (int frame = 0; frame < 25; frame++) {
        npClear();
        for (int i = 0; i < 25; i++) {
            if ((i + frame) % 25 < 5) { 
                npSetLED(i, 255, 0, 0); 
            }
        }
        npWrite();
        sleep_ms(sleep);
    }
    npClear();
    npWrite();
}
