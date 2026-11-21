#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de verificar que una fecha tenga valores posibles.
int esFechaValida(int dia, int mes, int anio) {
if (mes < 1 || mes > 12) {
    return 0;
}

if (dia < 1 || dia > 31) {
    return 0;
}

if (anio <= 0) {
    return 0;
}

return 1;
}

//Funcion encargada de calcular la edad en anios.
int calcularEdad(int diaNac, int mesNac, int anioNac, int diaAct, int mesAct, int anioAct) {
int edad = anioAct - anioNac;

//Si todavia no cumplio anios en el anio actual, se descuenta uno.
if (mesAct < mesNac || (mesAct == mesNac && diaAct < diaNac)) {
    edad--;
}

return edad;
}

int main() {
int diaNac, mesNac, anioNac;
int diaAct, mesAct, anioAct;
int edad;

limpiar();
mostrarBanner("Ejercicio Edad - Enri");

printf("Fecha de nacimiento\n");
printf("Dia: ");
scanf("%d", &diaNac);
printf("Mes: ");
scanf("%d", &mesNac);
printf("Anio: ");
scanf("%d", &anioNac);

printf("\nFecha actual\n");
printf("Dia: ");
scanf("%d", &diaAct);
printf("Mes: ");
scanf("%d", &mesAct);
printf("Anio: ");
scanf("%d", &anioAct);
limpiarBuffer();

mostrarSeparador('-', 45);

if (!esFechaValida(diaNac, mesNac, anioNac) || !esFechaValida(diaAct, mesAct, anioAct)) {
    printf("Alguna de las fechas ingresadas no es valida.\n");
}
else {
    edad = calcularEdad(diaNac, mesNac, anioNac, diaAct, mesAct, anioAct);

    if (edad < 0) {
        printf("La fecha de nacimiento no puede ser posterior a la actual.\n");
    }
    else {
        printf("Nacimiento: %02d/%02d/%04d\n", diaNac, mesNac, anioNac);
        printf("Fecha actual: %02d/%02d/%04d\n", diaAct, mesAct, anioAct);
        printf("Edad: %d anios\n", edad);
    }
}

mostrarSeparador('-', 45);

pausar();

return 0;
}
