void animacao_zigzag(int sleep) {
        // Emitir som antes de iniciar a animação
    play_sound(21, 1000, 500); // Emite um som de 1 kHz por 500 ms no pino GPIO 21
    for (int i = 0; i < 5; i++) {
        int frame[5][5][3] = {0}; // Inicializa todos os LEDs como APAGADO
        for (int j = 0; j < 5; j++) {
            frame[i][j][0] = 0;         // Vermelho desligado
            frame[i][j][1] = (i % 2 == 0) ? 255 : 0; // Verde ligado nas linhas pares
            frame[i][j][2] = 0;         // Azul desligado
        }
        desenho_sprite(frame);
        npWrite();
        sleep_ms(sleep);
    }
}
