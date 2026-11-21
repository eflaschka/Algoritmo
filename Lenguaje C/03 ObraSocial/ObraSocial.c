/* Ejercicio 03 - ObraSocial */

#include <stdio.h>
#include "../Librerias/utils.h"

//Funcion encargada de calcular el descuento de Obra Social
float calcularDescuento(float salario) {
float porcentaje;

if (salario <= 30000) {
    porcentaje = 5;
}
else if (salario <= 45000) {
    porcentaje = 7;
}
else if (salario <= 75000) {
    porcentaje = 9;
}
else {
    porcentaje = 10;
}

return salario * porcentaje / 100;
}

int main() {
float salarioBruto, descuento, salarioNeto;

limpiar();
mostrarBanner("CALCULO DE OBRA SOCIAL");

printf("Ingrese el salario bruto del empleado: $");
scanf("%f", &salarioBruto);
limpiarBuffer();

if (salarioBruto < 0) {
    printf("\nEl salario no puede ser negativo.\n");
}
else {
    descuento = calcularDescuento(salarioBruto);
    salarioNeto = salarioBruto - descuento;

    mostrarSeparador('-', 35);

    printf("Salario bruto: $%.2f\n", salarioBruto);
    printf("Descuento de Obra Social: $%.2f\n", descuento);
    printf("Salario neto: $%.2f\n", salarioNeto);

    mostrarSeparador('-', 35);
}

pausar();

return 0;
}