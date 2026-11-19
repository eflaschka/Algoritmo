program FibonacciConFuncion;
uses crt;

    //Funcion que calcula el numero de fibonacci en una posicion dada
    function fibonacci(posicion: integer): integer;
    var
    i, anterior, actual: integer;
    begin

    //Cortamos el caso de la posicion 0
    if posicion = 0 then
    begin
        fibonacci := 0;
    exit;
    end;

    anterior := 0;
    actual := 1;

    //Vamos acumulando los dos terminos anteriores
    for i := 2 to posicion do
    begin
        actual := anterior + actual;
        anterior := actual - anterior;
    end;

        fibonacci := actual;
    end;

    //Procedimiento que pide n y muestra los primeros n numeros de fibonacci
    procedure mostrarFibonacci();
    var
    n, i: integer;
    begin
        writeln('Ingrese la cantidad de numeros de fibonacci: ');
        readln(n);

    //Mostramos cada numero de fibonacci de la posicion 0 a n-1
    for i := 0 to n - 1 do
        writeln('Los numeros son: ', fibonacci(i));
    end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('==================================================');
    writeln('===== Ejercicio Fibonacci con Funcion - Enri =====');
    writeln('==================================================');
    writeln();

    //Llamamos al procedimiento
    mostrarFibonacci();

    writeln('Gracias por utilizar mis algoritmos');
    readln();
    
end.