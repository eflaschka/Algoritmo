#include <stdio.h>
#include "../Librerias/utils.h"

#define CANTIDAD 50

int main() {
int numero;

limpiar();
mostrarBanner("Ejercicio Positivos - Enri");

printf("Los %d primeros numeros enteros positivos:\n\n", CANTIDAD);

mostrarSeparador('-', 50);

for (numero = 1; numero <= CANTIDAD; numero++) {
    printf("%5d", numero);

    //Cada 10 numeros se corta la linea.
    if (numero % 10 == 0) {
        printf("\n");
    }
}

mostrarSeparador('-', 50);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
