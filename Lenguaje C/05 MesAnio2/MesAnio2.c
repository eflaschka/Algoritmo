/* Ejercicio 05 - MesAnio2 */

#include <stdio.h>
#include "utils.h"

//Funcion encargada de determinar el mes del año.
void determinarMes(int numero) {

switch (numero) {

    case 1:
        printf("El mes es ENERO.\n");
        break;

    case 2:
        printf("El mes es FEBRERO.\n");
        break;

    case 3:
        printf("El mes es MARZO.\n");
        break;

    case 4:
        printf("El mes es ABRIL.\n");
        break;

    case 5:
        printf("El mes es MAYO.\n");
        break;

    case 6:
        printf("El mes es JUNIO.\n");
        break;

    case 7:
        printf("El mes es JULIO.\n");
        break;

    case 8:
        printf("El mes es AGOSTO.\n");
        break;

    case 9:
        printf("El mes es SEPTIEMBRE.\n");
        break;

    case 10:
        printf("El mes es OCTUBRE.\n");
        break;

    case 11:
        printf("El mes es NOVIEMBRE.\n");
        break;

    case 12:
        printf("El mes es DICIEMBRE.\n");
        break;

    default:
        printf("Numero incorrecto. Ingrese un valor del 1 al 12.\n");
        break;
}
}

int main() {
int numero;

limpiar();
mostrarBanner("Ejercicio MesAnio Segun Caso - Enri");

printf("Ingrese un numero del 1 al 12: ");
scanf("%d", &numero);
limpiarBuffer();

mostrarSeparador('-', 35);

determinarMes(numero);

mostrarSeparador('-', 35);

pausar();

return 0;
}