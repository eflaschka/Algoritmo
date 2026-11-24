/* Ejercicio 29 - Cajero */
#include <stdio.h>
#include <string.h>
#include "../Librerias/utils.h"

#define USUARIO "enri"
#define CLAVE "1234"
#define INTENTOS 3
#define SALDO_INICIAL 100000.0

//Funcion encargada de validar el usuario y la clave.
int validarCredenciales(const char *usuario, const char *clave) {
return strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0;
}

//Funcion encargada de pedir usuario y clave. Devuelve 1 si el ingreso es correcto.
int iniciarSesion(void) {
char usuario[20];
char clave[20];
int intento;

for (intento = 1; intento <= INTENTOS; intento++) {
    printf("Usuario: ");
    scanf("%19s", usuario);

    printf("Clave: ");
    scanf("%19s", clave);
    limpiarBuffer();

    if (validarCredenciales(usuario, clave)) {
        return 1;
    }

    printf("\nCredenciales incorrectas. Intentos restantes: %d\n\n", INTENTOS - intento);
}

return 0;
}

//Procedimiento encargado de mostrar el menu del cajero.
void mostrarMenu(void) {
puts("1 - Consultar saldo");
puts("2 - Extraer");
puts("3 - Depositar");
puts("0 - Salir");
}

//Procedimiento encargado de mostrar el saldo.
void consultarSaldo(double saldo) {
printf("Saldo actual: $%.2f\n", saldo);
}

//Funcion encargada de extraer dinero. Devuelve el saldo actualizado.
double extraer(double saldo) {
double monto;

printf("Monto a extraer: $");
scanf("%lf", &monto);
limpiarBuffer();

if (monto <= 0) {
    printf("El monto debe ser mayor que cero.\n");
    return saldo;
}

if (monto > saldo) {
    printf("Saldo insuficiente. Disponible: $%.2f\n", saldo);
    return saldo;
}

printf("Extraccion realizada. Nuevo saldo: $%.2f\n", saldo - monto);

return saldo - monto;
}

//Funcion encargada de depositar dinero. Devuelve el saldo actualizado.
double depositar(double saldo) {
double monto;

printf("Monto a depositar: $");
scanf("%lf", &monto);
limpiarBuffer();

if (monto <= 0) {
    printf("El monto debe ser mayor que cero.\n");
    return saldo;
}

printf("Deposito realizado. Nuevo saldo: $%.2f\n", saldo + monto);

return saldo + monto;
}

int main() {
double saldo = SALDO_INICIAL;
int opcion;

limpiar();
mostrarBanner("Ejercicio Cajero - Enri");

printf("Ingreso al cajero\n");
printf("(usuario de prueba: %s / clave: %s)\n\n", USUARIO, CLAVE);

if (!iniciarSesion()) {
    printf("\nCuenta bloqueada por demasiados intentos fallidos.\n");
}
else {
    do {
        limpiar();
        mostrarBanner("Cajero Automatico");
        printf("Saldo disponible: $%.2f\n\n", saldo);
        mostrarMenu();

        printf("\nOpcion: ");
        scanf("%d", &opcion);
        limpiarBuffer();

        mostrarSeparador('-', 45);

        switch (opcion) {

            case 1:
                consultarSaldo(saldo);
                break;

            case 2:
                saldo = extraer(saldo);
                break;

            case 3:
                saldo = depositar(saldo);
                break;

            case 0:
                printf("Sesion finalizada.\n");
                break;

            default:
                printf("Opcion incorrecta.\n");
                break;
        }

        mostrarSeparador('-', 45);

        if (opcion != 0) {
            pausar();
        }
    } while (opcion != 0);
}

mostrarBanner("Gracias por utilizar mis algoritmos!");

pausar();

return 0;
}
