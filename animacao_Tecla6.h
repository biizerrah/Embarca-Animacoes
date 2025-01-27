void animacao_tecla_6() {
    // Definindo as cores
    int cor_linha[3] = {0, 255, 0}; // Cor inicial (verde)
    int cor_fundo[3] = {0, 0, 0}; // Apagado (fundo)
    
    // Função para apagar toda a matriz de LEDs
    void limpar_matriz() {
        npClear();
    }

    // Função para acender uma linha específica da matriz
    void acender_linha(int linha) {
        for (int coluna = 0; coluna < 5; coluna++) {
            npSetLED(getIndex(linha, coluna), cor_linha[0], cor_linha[1], cor_linha[2]);
        }
    }

    // Função para piscar a matriz com cores diferentes
    void piscar() {
        // Definindo três cores para as piscadas
        int cores_rgb[3][3] = {
            {255, 0, 0}, // Vermelho
            {0, 255, 0}, // Verde
            {0, 0, 255}  // Azul
        };

        for (int i = 0; i < 3; i++) {
            // Apaga a matriz antes de acender a nova cor
            limpar_matriz();
            // Acende a matriz com a cor definida
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    npSetLED(getIndex(linha, coluna), cores_rgb[i][0], cores_rgb[i][1], cores_rgb[i][2]);
                }
            }
            npWrite();
            sleep_ms(500); // Espera meio segundo
            limpar_matriz(); // Apaga a matriz
            npWrite();
            sleep_ms(500); // Espera meio segundo
        }
    }

    // Função principal da animação
    void animacao() {
        // Acende a primeira linha
        acender_linha(0);
        npWrite();
        sleep_ms(500); // Espera 500 ms

        // Acende a segunda linha e mantém a primeira
        acender_linha(1);
        npWrite();
        sleep_ms(500);

        // Acende a terceira linha e mantém as anteriores
        acender_linha(2);
        npWrite();
        sleep_ms(500);

        // Acende a quarta linha e mantém as anteriores
        acender_linha(3);
        npWrite();
        sleep_ms(500);

        // Acende a quinta linha e mantém as anteriores
        acender_linha(4);
        npWrite();
        sleep_ms(500);

        // Depois de acender todas as linhas, faz a matriz piscar
        piscar();
    }

    // Chama a animação
    animacao();
}
