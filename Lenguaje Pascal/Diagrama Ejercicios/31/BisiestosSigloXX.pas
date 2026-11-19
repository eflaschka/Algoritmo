program BisiestosSigloXX;
uses crt;

var
anio: integer;

//Funcion que determina si un anio es bisiesto
function esBisiesto(anio: integer):boolean;
begin
    //Operador ternario. Retorna True o False segun el resultado de la expresion
    esBisiesto := ((anio mod 4 = 0) and (anio mod 100 <> 0) or (anio mod 400 = 0));
    
end;

procedure verBisiestos();
begin
    for anio := 1901 to 2000 do
    begin

        //Invocamos la funcion que verifica si es bisiesto:
        if esBisiesto(anio) then
        begin
            writeln(' - ', anio);
        end;
    end;
    
end;

begin
    clrscr();
    writeln('===================================================');
    writeln('===== Ejercicio Bisiestos del Siglo XX - Enri =====');
    writeln('===================================================');
    writeln();

        //Invocamos el procedimiento para ver los bisiestos:
        verBisiestos();


    writeln('Gracias por utilizar mis algoritmos');
    readln();

end.