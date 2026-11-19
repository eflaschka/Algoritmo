program DomingoDePascuas;
uses crt;

    //Funcion que calcula el numero de dia N segun el algoritmo de Gauss
    function calcularN(anio: integer): integer;
    var
    A, B, C, D, E: integer;
    begin
        A := anio mod 19;
        B := anio mod 4;
        C := anio mod 7;
        D := (19 * A + 24) mod 30;
        E := (2 * B + 4 * C + 6 * D + 5) mod 7;

        calcularN := 22 + D + E;
    end;

    //Procedimiento que pide el anio y muestra la fecha del domingo de pascuas
    procedure calcularPascuas();
    var
    anio, N, mes, dia: integer;
    nombreMes: string;
    begin
        writeln('Ingrese el anio para calcular el domingo de pascuas: ');
        readln(anio);

        N := calcularN(anio);

    if N <= 31 then
    begin
        mes := 3;
        dia := N;
        nombreMes := 'marzo';
    end
    else
    begin
        mes := 4;
        dia := N - 31;
        nombreMes := 'abril';
    end;

    writeln('El domingo de pascuas del anio ', anio, ' es el ', dia, ' de ', nombreMes, '.');
    end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('=====================================');
    writeln('===== Domingo de Pascuas - Enri =====');
    writeln('=====================================');
    writeln();

//Llamamos al procedimiento
    calcularPascuas();

    writeln('Gracias por utilizar mis algoritmos');
    readln();

end.