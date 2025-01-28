#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"  // Inclui a função reset_usb_boot

// Função para verificar se a tecla * foi acionada
void verificar_tecla_reboot(uint gpio) {
    if (gpio_get(gpio) == 0) {  // Supondo que a tecla * esteja ativa em nível baixo (0)
        printf("Tecla * acionada. Reiniciando no modo de gravação...\n");
        reset_usb_boot(0, 0);  // Reinicia o Pico no modo de gravação via USB
    }
}

int main() {
    stdio_init_all();

    // Configura o pino da tecla * como entrada
    const uint tecla_reboot_pin = 10;  // Exemplo: tecla * conectada ao GP10
    gpio_init(tecla_reboot_pin);
    gpio_set_dir(tecla_reboot_pin, GPIO_IN);
    gpio_pull_up(tecla_reboot_pin);  // Habilita o resistor de pull-up interno

    while (true) {
        // Verifica se a tecla * foi acionada
        verificar_tecla_reboot(tecla_reboot_pin);

        // Outras lógicas do programa
        sleep_ms(100);  // Aguarda um pouco antes de verificar novamente
    }
}