program par;
uses crt;

var 
n: integer;

begin
    clrscr();
    writeln('================================');
    writeln('===== Ejercicio Par - Enri =====');
    writeln('================================');
    writeln();

        //Inicio del algoritmo
        writeln('Ingrese un numero: ');
        readln(n);

        //Inicio de condicional y operación
        if (n mod 2 = 0) then
        begin
            writeln(n, ' es PAR');
        end
        else
        begin
            writeln(n, ' es IMPAR');
        end;
        readln();

end.