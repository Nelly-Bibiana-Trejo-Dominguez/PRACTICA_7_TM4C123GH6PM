

/**
 * main.c
 */
#include "include.h"

int main(void)
{
    float temperatura = 0;
    Configurar_PLL();  // Configuración a 50 MHz
    Configurar_SSI3();

    while (1){

    temperatura = SPI_readMAX();
    }
}
