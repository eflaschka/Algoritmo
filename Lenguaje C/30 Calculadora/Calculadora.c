/* Ejercicio 30 - Calculadora */
#include <stdio.h>
#include <ctype.h>
#include "../Librerias/utils.h"

//Procedimiento encargado de mostrar el menu.
void mostrarMenu(void) {
puts("A - Sumar");
puts("B - Restar");
puts("C - Multiplicar");
puts("D - Dividir");
puts("E - Salir");
}

//Procedimiento encargado de pedir los dos operandos.
void pedirOperandos(double *a, double *b) {
printf("Primer numero: ");
scanf("%lf", a);

printf("Segundo numero: ");
scanf("%lf", b);
limpiarBuffer();
}

//Funcion encargada de sumar.
double sumar(double a, double b) {
return a + b;
}

//Funcion encargada de restar.
double restar(double a, double b) {
return a - b;
}

//Funcion encargada de multiplicar.
double multiplicar(double a, double b) {
return a * b;
}

//Funcion encargada de dividir. Devuelve 0 si el divisor es cero.
int dividir(double a, double b, double *resultado) {
if (b == 0) {
    return 0;
}

*resultado = a / b;

return 1;
}

int main() {
char opcion;
double a, b, resultado;

do {
    limpiar();
    mostrarBanner("Ejercicio Calculadora - Enri");
    mostrarMenu();

    printf("\nOpcion: ");
    scanf(" %c", &opcion);
    limpiarBuffer();

    opcion = (char)toupper((unsigned char)opcion);

    mostrarSeparador('-', 40);

    switch (opcion) {

        case 'A':
            pedirOperandos(&a, &b);
            printf("Resultado: %.2f\n", sumar(a, b));
            break;

        case 'B':
            pedirOperandos(&a, &b);
            printf("Resultado: %.2f\n", restar(a, b));
            break;

        case 'C':
            pedirOperandos(&a, &b);
            printf("Resultado: %.2f\n", multiplicar(a, b));
            break;

        case 'D':
            pedirOperandos(&a, &b);

            if (dividir(a, b, &resultado)) {
                printf("Resultado: %.2f\n", resultado);
            }
            else {
                printf("No se puede dividir por cero.\n");
            }
            break;

        case 'E':
            printf("Fin del programa.\n");
            break;

        default:
            printf("Opcion incorrecta. Elija A, B, C, D o E.\n");
            break;
    }

    mostrarSeparador('-', 40);

    if (opcion != 'E') {
        pausar();
    }
} while (opcion != 'E');

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
