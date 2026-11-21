#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de calcular la potencia de una base elevada a un exponente.
long long potencia(int base, int exponente) {
long long resultado = 1;
int i;

for (i = 1; i <= exponente; i++) {
    resultado *= base;
}

return resultado;
}

int main() {
int base, exponente;

limpiar();
mostrarBanner("Ejercicio Potencia - Enri");

printf("Base: ");
scanf("%d", &base);

printf("Exponente: ");
scanf("%d", &exponente);
limpiarBuffer();

mostrarSeparador('-', 50);

if (exponente < 0) {
    printf("El exponente debe ser mayor o igual que cero.\n");
}
else {
    if ((base > 1 || base < -1) && exponente > 62) {
        printf("Aviso: el resultado puede superar la capacidad del tipo de dato.\n\n");
    }

    printf("%d^%d = %lld\n", base, exponente, potencia(base, exponente));
}

mostrarSeparador('-', 50);

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
