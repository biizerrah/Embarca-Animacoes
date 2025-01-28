void animacao_corrida(int sleep) {
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
