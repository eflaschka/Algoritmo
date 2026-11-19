program PotenciaConFuncion;
uses crt;

    //Funcion que calcula base elevado a exponente
    function potencia(base, exponente: integer): integer;
    var
        i, resultado: integer;
    begin
        resultado := 1;

    //Multiplicamos resultado por base tantas veces como indique el exponente
    for i := 1 to exponente do
        resultado := resultado * base;

        potencia := resultado;
    end;

    //Procedimiento que pide base y exponente y muestra el resultado
    procedure calcularPotencia();
    var
    base, exponente, resultado: integer;
    begin
        writeln('Ingrese la base: ');
        readln(base);

        writeln('Ingrese el exponente: ');
        readln(exponente);

        resultado := potencia(base, exponente);

        writeln(base, ' elevado a la ', exponente, ' es ', resultado);
    end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('=================================================');
    writeln('===== Ejercicio Potencia con Funcion - Enri =====');
    writeln('=================================================');
    writeln();

    //Llamamos al procedimiento
    calcularPotencia();

    writeln('Gracias por utilizar mis algoritmos');
    readln();

end.