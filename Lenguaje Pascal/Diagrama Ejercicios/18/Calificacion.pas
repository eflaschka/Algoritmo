program calificacion;
uses crt;

var
nota: real;
continuar: char;

begin
    clrscr();
    writeln('=========================================');
    writeln('===== Ejercicio Calificacion - Enri =====');
    writeln('=========================================');
    writeln();

//Comenzamos solicitando la nota al usuario
        writeln('Ingrese la nota del alumno (entre 1 y 10): ');
        readln(nota);

//Convertimos la nota a decimal
        writeln('La nota ingresada es: ', nota:4:2);

//Iniciamos el condicional para conocer su calificacion
    if (nota >= 0) and (nota < 6) then
        writeln('La calificacion es: Suspendido.')
    else if (nota >= 6) and (nota < 8) then
        writeln('La calificacion es: Aprobado.')
    else if (nota >= 8) and (nota < 9) then
        writeln('La calificacion es: Distinguido.')
    else if (nota >= 9) and (nota < 10) then
        writeln('La calificacion es: Sobresaliente.')
    else if (nota = 10) then
        writeln('La calificacion es: Matricula de Honor.')
    else
        writeln('La nota no es valida.');
    
    readln();

end.