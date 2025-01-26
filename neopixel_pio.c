#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "animacao_cobra.h"
#include "animacao_TeclaB.h"
#include "animacao_TeclaA.h"
#include "animacao_TeclaC.h"
#include "animacao_TeclaD.h"
#include "animacao_TeclaHastag.h"
#include "animacao_onda.h"
#include "animacao_explosao.h" 

//Inicia a configuração do teclado 
const uint ROW_PINS[4] = {9, 8, 6, 5};     // Linhas: R1, R2, R3, R4
const uint COL_PINS[4] = {4, 3, 2, 28};    // Colunas: C1, C2, C3, C4

#define LED_PIN1 13 // LED 1 conectado ao pino 13
#define LED_PIN2 12 // LED 2 conectado ao pino 12
#define LED_PIN3 11 // LED 3 conectado ao pino 11
#define BUZZER_PIN 21 // Buzzer conectado ao pino 21

const char KEYPAD[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

// Função para varrer o teclado e identificar a tecla pressionada
char scan_keypad()
{
    for (int row = 0; row < 4; row++)
    {
        gpio_put(ROW_PINS[row], 0); // Ativa a linha colocando em LOW
        for (int col = 0; col < 4; col++)
        {
            if (!gpio_get(COL_PINS[col])) // Se a tecla for pressionada
            {
                gpio_put(ROW_PINS[row], 1); // Restaura a linha para HIGH
                return KEYPAD[row][col];    // Retorna a tecla pressionada
            }
        }
        gpio_put(ROW_PINS[row], 1); // Linha volta para HIGH após a varredura
    }
    return '\0'; // Nenhuma tecla pressionada
}

// Configuração dos pinos do teclado
void setup_keyboard()
{
    for (int i = 0; i < 4; i++)
    {
        gpio_init(ROW_PINS[i]);
        gpio_set_dir(ROW_PINS[i], GPIO_OUT);
        gpio_put(ROW_PINS[i], 1); // Nível alto por padrão
    }

    for (int i = 0; i < 4; i++)
    {
        gpio_init(COL_PINS[i]);
        gpio_set_dir(COL_PINS[i], GPIO_IN);
        gpio_pull_up(COL_PINS[i]); // Pull-up interno
    }
}
//Finaliza configuração do teclado

//Configura buzzer
void setup_buzzer()
{
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
}

int main() {

  setup_keyboard();
  setup_buzzer();

  // Inicializa entradas e saídas.
  stdio_init_all();

  // Inicializa matriz de LEDs NeoPixel.
  npInit(LED_PIN);
 
  // Não faz mais nada. Loop infinito.
  while (true) {

    char key = scan_keypad(); 
    //Para testar na placa digitando os comandos, comente a linha acima e descomente as duas linhas abaixo.
    //char key;
    //scanf("%c", &key);

    if (key != '\0') // Se alguma tecla foi pressionada
    {
        printf("Tecla pressionada: %c\n", key);

        if(key=='#')
        {
            //Animação #
            printf("Tecla # pressionada da animação #\n");
            animacao_TeclaHashtag();
        }
        
        if (key == 'A') 
        {
            // Animação A
            printf("Tecla A pressionada da animação A\n");
            animacao_TeclaA();
        }
        else if (key == 'B') 
        {
            // Animação B
            printf("Tecla B pressionada da animação B\n");
            animacao_TeclaB();
        }
        else if (key == 'C')  
        {
            // Animação C
            printf("Tecla C pressionada da animação C\n");
            animacao_TeclaC();
        }
        else if (key == 'D') 
        {
            // Animação D
            printf("Tecla D pressionada da animação D\n");
            animacao_TeclaD();
        }
        else if (key == '0') 
        {
            // Animação 0
            printf("Tecla 0 pressionada da animação 0\n");
            animacao_cobrinha(500); //sleep ms é 500
        }
        else if (key == '1') 
        {
            // Animação 1
            printf("Tecla 1 pressionada da animação 1\n");
            animacao_ondas(500); // Chama a animação de onda quando a tecla '1' é pressionada
        }
        else if (key == '2') 
        {
            // Animação 2
            printf("Tecla 2 pressionada da animação 2\n");
            animacao_explosao(500); // Chame a função para a animação 2
        }
        else if (key == '3') 
        {
            // Animação 3
            printf("Tecla 3 pressionada da animação 3\n");
            // Chame a função para a animação 3
        }
        else if (key == '4') 
        {
            // Animação 4
            printf("Tecla 4 pressionada da animação 4\n");
            // Chame a função para a animação 4
        }
        else if (key == '5') 
        {
            // Animação 5
            printf("Tecla 5 pressionada da animação 5\n");
            // Chame a função para a animação 5
        }
        else if (key == '6') 
        {
            // Animação 6
            printf("Tecla 6 pressionada da animação 6\n");
            // Chame a função para a animação 6
        }
        else 
        {
            // Tecla desconhecida
            printf("Tecla desconhecida\n");
        }
    }

    sleep_ms(200);  // Aguarda 200ms antes de verificar novamente
  }
}
