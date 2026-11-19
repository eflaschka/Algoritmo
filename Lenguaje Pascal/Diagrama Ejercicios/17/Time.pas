program time;
uses crt;

var
hora, minutos, segundos: integer;

begin
    clrscr();
    writeln('=================================');
    writeln('===== Ejercicio Time - Enri =====');
    writeln('=================================');
    writeln();

//Comenzamos solicitando la hora al usuario
        writeln('Ingrese la hora: ');
        readln(hora);

//Convertimos la hora a minutos y segundos y mostramos los resultados
        minutos := hora * 60;
        writeln('Los minutos de la hora son: ', minutos);

        segundos := hora * 3600;
        writeln('Los segundos de la hora son: ', segundos);

        readln();


end.