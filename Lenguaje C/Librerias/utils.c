#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void limpiar(void) {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

void mostrarSeparador(char simbolo, int tam) {
  for (int i = 0; i < tam; i++)
    printf("%c", simbolo);

  printf("\n");
}

void mostrarBanner(const char *texto) {
  int ancho = (int)strlen(texto) + 4;

  mostrarSeparador('=', ancho);
  printf("= %s =\n", texto);
  mostrarSeparador('=', ancho);
}

void limpiarBuffer(void) {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

void pausar(void) {
  puts("Pulse ENTER para continuar...");
  getchar();
}