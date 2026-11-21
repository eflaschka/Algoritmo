#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de devolver el numero de Fibonacci de una posicion.
long long fibonacci(int posicion) {
long long anterior = 0;
long long actual = 1;
long long siguiente;
int i;

if (posicion == 1) {
    return 0;
}

if (posicion == 2) {
    return 1;
}

for (i = 3; i <= posicion; i++) {
    siguiente = anterior + actual;
    anterior = actual;
    actual = siguiente;
}

return actual;
}

int main() {
int n, i;

limpiar();
mostrarBanner("Ejercicio Fibonacci - Enri");

printf("Cuantos numeros de Fibonacci desea ver: ");
scanf("%d", &n);
limpiarBuffer();

mostrarSeparador('-', 55);

if (n <= 0) {
    printf("La cantidad debe ser mayor que cero.\n");
}
else {
    printf("Los %d primeros numeros de Fibonacci:\n\n", n);

    for (i = 1; i <= n; i++) {
        printf("%12lld", fibonacci(i));

        //Cada 5 numeros se corta la linea.
        if (i % 5 == 0) {
            printf("\n");
        }
    }

    if (n % 5 != 0) {
        printf("\n");
    }

    if (n > 92) {
        printf("\nAviso: a partir del numero 93 el resultado supera la capacidad del tipo de dato.\n");
    }
}

mostrarSeparador('-', 55);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
