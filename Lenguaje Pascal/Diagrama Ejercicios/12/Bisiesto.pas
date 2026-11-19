program bisiesto;
uses crt;

var
anio: integer;

begin
    clrscr();
    writeln('=====================================');
    writeln('===== Ejercicio Bisiesto - Enri =====');
    writeln('=====================================');
    writeln();

//Comenzamos solicitando el anio a revisar
        writeln('Ingrese un anio: ');
        readln(anio);

//Inicia el condicional con las operaciones
        if ((anio mod 4 = 0) and (anio mod 100 <> 0) or (anio mod 400 = 0)) then
        begin
            writeln(anio, ' es Bisiesto.');
        end
        else
        begin
            writeln(anio, ' no es Bisiesto.');
        end;
        
            readln();
end.