/* Ejercicio 18 - Pares */

#include <stdio.h>
#include "../Librerias/utils.h"

int main() {
int n, i;

limpiar();
mostrarBanner("Ejercicio Pares - Enri");

printf("Cuantos numeros pares desea ver: ");
scanf("%d", &n);
limpiarBuffer();

mostrarSeparador('-', 50);

if (n <= 0) {
    printf("La cantidad debe ser mayor que cero.\n");
}
else {
    printf("Los %d primeros numeros pares:\n\n", n);

    for (i = 1; i <= n; i++) {
        printf("%5d", i * 2);

        //Cada 10 numeros se corta la linea.
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    if (n % 10 != 0) {
        printf("\n");
    }
}

mostrarSeparador('-', 50);

pausar();

return 0;
}
