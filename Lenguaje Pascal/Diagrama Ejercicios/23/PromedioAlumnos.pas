program PromedioAlumnos;
uses crt;

const
NAlumnos = 7;
NNotas = 3;

var
notas: array[1..NAlumnos, 1..NNotas] of real;
suma: real;
promedio: real;
a, n: integer;

begin
    clrscr();
    writeln('====================================================');
    writeln('===== Ejercicio Promedio de los Alumnos - Enri =====');
    writeln('====================================================');
    writeln();

//Iniciamos la estructura for
    for a := 1 to NAlumnos do
    begin
        writeln('Ingresar notas para el alumno ', a);
        suma := 0;
    for n := 1 to NNotas do 
    begin
        writeln('Nota ', n, ': ');
        readln(notas[a, n]);
        suma := suma + notas[a, n];
    end;
        promedio := suma / NNotas;
        writeln('Notas ingresadas para el alumno ', a, ': ', notas[a, 1]:0:2, ', ', notas[a, 2]:0:2, ', ', notas[a, 3]:0:2);
        writeln('Promedio del alumno ', a, ': ', promedio:0:2);
    end;

        writeln('Gracias por utilizar mis algoritmos.');
        readln();


end.