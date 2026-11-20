# Algoritmo

Ejercicios de la materia **Programación I** (primer año), resueltos en dos lenguajes:

- **Lenguaje C**: 22 algoritmos, una librería propia de utilidades y una presentación
  de complejidad algorítmica.
- **Lenguaje Pascal**: 40 ejercicios, cada uno con su código y su diagrama de flujo.

## Estructura

```
Lenguaje C/
  <n> <Nombre>/<Nombre>.c
  Librerias/utils.c, utils.h    (pantalla, banners, pausas)
  Librerias/mates.c, mates.h    (PI, bisiesto, minimo, maximo, promedio)
  Complejidad Algoritmica/      (búsqueda lineal, binaria y bitónica)

Lenguaje Pascal/
  Diagrama Ejercicios/<n>/<Nombre>.pas, <Nombre>.dia
```

## Lenguaje C

| # | Ejercicio | Archivo |
|---|-----------|---------|
| 1 | Naturaleza de un número | `01 Naturaleza/Naturaleza.c` |
| 2 | Par o impar | `02 ParImpar/ParImpar.c` |
| 3 | Descuento de obra social | `03 ObraSocial/ObraSocial.c` |
| 4 | Mes del año (if/else) | `04 MesAnio/MesAnio.c` |
| 5 | Mes del año (switch) | `05 MesAnio2/MesAnio2.c` |
| 6 | Distancia Luna - Tierra | `06 Astros/Astros.c` |
| 7 | Días de un mes (bisiesto) | `07 DiasMes/DiasMes.c` |
| 8 | Longitud y área del círculo | `08 Radio/Radio.c` |
| 9 | Horas a minutos y segundos | `09 Horas/Horas.c` |
| 10 | Calificación por nota | `10 Calificacion/Calificacion.c` |
| 11 | Menor de tres enteros | `11 Menor/Menor.c` |
| 12 | Edad a partir de dos fechas | `12 Edad/Edad.c` |
| 13 | Años bisiestos del siglo XX | `13 Bisiestos/Bisiestos.c` |
| 14 | Promedio de 10 alumnos | `14 Promedio/Promedio.c` |
| 15 | 50 primeros positivos | `15 Positivos/Positivos.c` |
| 16 | Factorial | `16 Factorial/Factorial.c` |
| 17 | Tabla de multiplicar (while, do-while, for) | `17 Tabla/Tabla.c` |
| 18 | n primeros pares | `18 Pares/Pares.c` |
| 19 | Suma de los n primeros impares | `19 Impares/Impares.c` |
| 20 | Números perfectos | `20 Perfectos/Perfectos.c` |
| 21 | Vector de 10 enteros y su suma | `21 Vector/Vector.c` |
| 22 | Tabla 3x4 con sumas de filas y columnas | `22 Matriz/Matriz.c` |

### Complejidad algorítmica

`Complejidad Algoritmica/Complejidad.c` es un programa con menú que compara
búsqueda lineal, binaria (iterativa y recursiva) y búsqueda en arreglo bitónico,
mostrando la traza y el número de comparaciones. Incluye una tabla de crecimiento
real (con 10.000 datos, 10.000 comparaciones contra 14) y una guía de exposición.

### Compilar

Los ejercicios usan la librería `utils` y, algunos, `mates`:

```
cd "Lenguaje C/06 Astros"
gcc Astros.c ../Librerias/utils.c -Wall -o Astros.exe

cd "Lenguaje C/13 Bisiestos"
gcc Bisiestos.c ../Librerias/utils.c ../Librerias/mates.c -Wall -o Bisiestos.exe
```

## Lenguaje Pascal

Cada carpeta tiene el `.pas` y el diagrama de flujo `.dia`.
El ejercicio 26 está resuelto con los tres bucles (MIENTRAS, PARA y REPETIR).

| # | Ejercicio |
|---|-----------|
| 1 | Operaciones |
| 2 | Media aritmética |
| 3 | Naturaleza de un número (positivo) |
| 4 | Cuadrado y cubo de un número |
| 5 | Área del trapecio |
| 6 | Mayor de dos números |
| 7 | Edad |
| 8 | Par o impar |
| 9 | Salario |
| 10 | Días de la semana |
| 11 | Días de la semana (segunda versión) |
| 12 | Año bisiesto |
| 13 | Distancia Luna - Tierra |
| 14 | Días del mes |
| 15 | Números crecientes |
| 16 | Radio, longitud y área |
| 17 | Conversión de tiempo |
| 18 | Calificación |
| 19 | Menor de tres números |
| 20 | Edad actual |
| 21 | Igualdad de números |
| 22 | Calculadora |
| 23 | Promedio de alumnos |
| 24 | 50 primeros positivos |
| 25 | Factoreo |
| 26 | Tabla de multiplicar (MIENTRAS, PARA, REPETIR) |
| 27 | Números pares |
| 28 | Suma de impares |
| 29 | Número perfecto |
| 30 | Clasificar números |
| 31 | Bisiestos del siglo XX |
| 32 | Primo o compuesto |
| 33 | Menor y mayor |
| 34 | Modular |
| 35 | Domingo de Pascuas |
| 36 | Triángulo rectángulo |
| 37 | Círculo |
| 38 | Potencia con función |
| 39 | Fibonacci con función |
| 40 | Grados de temperatura |

## Notas

- Los ejecutables y archivos objeto no se versionan (ver `.gitignore`).
- Todos los ejercicios de C compilan sin advertencias con `-Wall`.
