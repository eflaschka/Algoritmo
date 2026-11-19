#include <stdio.h>
#include "../Librerias/utils.h"

int main() {
int n, i, impar = 1;
long suma = 0;

limpiar();
mostrarBanner("Ejercicio Impares - Enri");

printf("Cuantos numeros impares desea sumar: ");
scanf("%d", &n);
limpiarBuffer();

mostrarSeparador('-', 50);

if (n <= 0) {
    printf("La cantidad debe ser mayor que cero.\n");
}
else {
    for (i = 1; i <= n; i++) {
        suma += impar;
        impar += 2;
    }

    printf("La suma de los %d primeros numeros impares es: %ld\n", n, suma);
    printf("Comprobacion: %d al cuadrado = %ld\n", n, suma);
}

mostrarSeparador('-', 50);

pausar();

return 0;
}
