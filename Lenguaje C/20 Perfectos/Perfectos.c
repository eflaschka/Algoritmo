#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de sumar los divisores propios de un numero (sin incluirlo).
int sumaDivisores(int numero) {
int suma = 0;
int i;

for (i = 1; i <= numero / 2; i++) {
    if (numero % i == 0) {
        suma += i;
    }
}

return suma;
}

int main() {
int limite, numero, cantidad = 0;

limpiar();
mostrarBanner("Ejercicio Perfectos - Enri");

printf("Ingrese un numero limite: ");
scanf("%d", &limite);
limpiarBuffer();

mostrarSeparador('-', 50);

if (limite < 2) {
    printf("El limite debe ser 2 o mayor.\n");
}
else {
    printf("Numeros perfectos hasta %d:\n\n", limite);

    for (numero = 2; numero <= limite; numero++) {
        if (sumaDivisores(numero) == numero) {
            printf("%6d", numero);
            cantidad++;

            //Cada 5 numeros se corta la linea.
            if (cantidad % 5 == 0) {
                printf("\n");
            }
        }
    }

    if (cantidad == 0) {
        printf("No hay numeros perfectos hasta %d.\n", limite);
    }
    else {
        if (cantidad % 5 != 0) {
            printf("\n");
        }

        printf("\nTotal: %d numeros perfectos.\n", cantidad);
    }
}

mostrarSeparador('-', 50);

pausar();

return 0;
}
