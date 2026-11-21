#include <stdio.h>
#include "../Librerias/utils.h"

int main() {
int n, i;
unsigned long long factorial = 1;

limpiar();
mostrarBanner("Ejercicio Factorial - Enri");

printf("Ingrese un entero positivo: ");
scanf("%d", &n);
limpiarBuffer();

mostrarSeparador('-', 45);

if (n < 0) {
    printf("El numero debe ser positivo.\n");
}
else {
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %llu\n", n, factorial);

    if (n > 20) {
        printf("Aviso: el resultado supera la capacidad del tipo de dato.\n");
    }
}

mostrarSeparador('-', 45);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
