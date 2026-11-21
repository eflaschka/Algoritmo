/* Ejercicio 07 - DiasMes */

#include <stdio.h>
#include "../Librerias/utils.h"
#include "../Librerias/mates.h"

//Funcion encargada de devolver los dias de un mes. Devuelve 0 si el mes no existe.
int diasDelMes(int mes, int anio) {
switch (mes) {

    case 2:
        return esBisiesto(anio) ? 29 : 28;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;

    default:
        if (mes >= 1 && mes <= 12) {
            return 31;
        }
        return 0;
}
}

int main() {
int mes, anio, dias;

limpiar();
mostrarBanner("Ejercicio DiasMes - Enri");

printf("Mes (##): ");
scanf("%d", &mes);
limpiarBuffer();

printf("Anio (####): ");
scanf("%d", &anio);
limpiarBuffer();

dias = diasDelMes(mes, anio);

mostrarSeparador('-', 45);

if (dias == 0) {
    printf("Mes incorrecto. Ingrese un valor del 1 al 12.\n");
}
else {
    printf("El mes %d del anio %d tiene %d dias.\n", mes, anio, dias);
}

mostrarSeparador('-', 45);

pausar();

return 0;
}
