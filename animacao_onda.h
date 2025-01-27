void animacao_ondas(int sleep) {
    const int altura = 5;
    const int largura = 5;

    // Iterar sobre as colunas para a "onda" se mover da esquerda para a direita
    for (int passo = 0; passo < largura + altura - 1; passo++) {
        npClear();

        // Declarar o array dinamicamente e inicializá-lo manualmente
        int frame[altura][largura][3];
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                frame[i][j][0] = 0; // Vermelho
                frame[i][j][1] = 0; // Verde
                frame[i][j][2] = 0; // Azul
            }
        }

        // Adicionar o padrão de onda
        for (int linha = 0; linha < altura; linha++) {
            int coluna = passo - linha;
            if (coluna >= 0 && coluna < largura) {
                frame[linha][coluna][0] = 0;    // Vermelho
                frame[linha][coluna][1] = 0;    // Verde
                frame[linha][coluna][2] = 255;  // Azul
            }
        }

        // Desenhar o frame e atualizar os LEDs
        desenho_sprite(frame);
        npWrite();
        sleep_ms(sleep);
    }
}
