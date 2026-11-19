program Modular;
uses Math, crt;

    //Declaramos el procedimiento encargado del calculo correspondiente
    procedure calcularResultado;

    var
    numero: integer;
    digitos: integer;
    resultado: real;

    //Funcion encargada de determinar la cantidad de digitos del numero
    function cantidadDigitos(n:integer):integer;
    begin
        if n < 10 then
            cantidadDigitos := 1
    else
        if n < 100 then
            cantidadDigitos := 2
    else
            cantidadDigitos := 3;
    end;

    //Funcion encargada de calcular el cubo
    function cubo(n:integer):integer;
    begin
        cubo := n*n*n;
    end;

    //Funcion encargada de calcular el cuadrado
    function cuadrado(n:integer):integer;
    begin
        cuadrado := n*n;
    end;

    //Funcion encargada de calcular la raiz
    function raiz(n:integer):real;
    begin
        raiz := sqrt(n);
    end;

    //Procedimiento encargado de solicitar el numero y realizar el calculo
    begin

    //Solicitamos el numero al usuario
    writeln('Ingrese un numero positivo:');
    readln(numero);

    digitos := cantidadDigitos(numero);

    //Iniciamos el condicional para conocer que funcion debe realizarse
    if digitos = 1 then
        resultado := cubo(numero)
    else
        if digitos = 2 then
            resultado := cuadrado(numero)
        else
            resultado := raiz(numero);

    //Mostramos los resultados
    writeln('Resultado: ', resultado:0:2);

    end;

//Iniciamos el algoritmo
begin

//Llamamos al procedimiento
    calcularResultado;
    readln();

    writeln('Gracias por utilizar mis algoritmos');
    readln();
end.