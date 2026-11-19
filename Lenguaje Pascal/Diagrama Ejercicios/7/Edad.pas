program Edades;
uses crt;

var 
edad: integer;

begin
    clrscr();
    writeln('=================================');
    writeln('===== Ejercicio Edades - Enri =====');
    writeln('=================================');
    writeln();

        //Inicio del algoritmo
        writeln('Ingrese la edad: ');
        readln(edad);

        //Inicio de condicionales
        if edad < 13 then
        writeln('Es un ninio')

        else if edad < 21 then
        writeln('Es un adolescente')

        else
        writeln('Es un adulto.');

        readln();


end.