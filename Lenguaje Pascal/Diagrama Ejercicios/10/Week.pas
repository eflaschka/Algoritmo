program week;
uses crt;

var 
dia: integer;

begin
    clrscr();
    writeln('=================================');
    writeln('===== Ejercicio Week - Enri =====');
    writeln('=================================');
    writeln();

        //Luz verde para el inicio del algoritmo, solicitamos el día a conocer
        writeln('Ingrese un numero entero del 1 al 7: ');
        readln(dia);

        //Iniciamos con la cadena del condicional Si Entonces
        if dia = 1 then
            writeln('El dia es Domingo.')
        else if dia = 2 then
            writeln('El dia es Lunes.')
        else if dia = 3 then
            writeln('El dia es Martes.')
        else if dia = 4 then
            writeln('El dia es Miercoles.')
        else if dia = 5 then 
            writeln('El dia es Jueves, casi Viernes -.-')
        else if dia = 6 then
            writeln('I be waiting.. El dia es VIERNES!')
        else if dia = 7 then
            writeln('A comprar un alikal.. El dia es Sabado.')
        else
            writeln('Numero invalido, ingrese un numero entre 1 y 7.');
        readln();
end.