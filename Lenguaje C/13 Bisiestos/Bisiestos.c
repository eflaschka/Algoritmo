#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

//El siglo XX abarca desde 1901 hasta 2000.
#define SIGLO_INICIO 1901
#define SIGLO_FIN 2000

int main() {
int anio, cantidad = 0;

limpiar();
mostrarBanner("Ejercicio Bisiestos - Enri");

printf("Anios bisiestos del siglo XX (%d - %d):\n\n", SIGLO_INICIO, SIGLO_FIN);

mostrarSeparador('-', 50);

for (anio = SIGLO_INICIO; anio <= SIGLO_FIN; anio++) {
    if (esBisiesto(anio)) {
        printf("%5d", anio);
        cantidad++;

        //Cada 10 anios se corta la linea.
        if (cantidad % 10 == 0) {
            printf("\n");
        }
    }
}

if (cantidad % 10 != 0) {
    printf("\n");
}

mostrarSeparador('-', 50);

printf("Total: %d anios bisiestos.\n", cantidad);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
