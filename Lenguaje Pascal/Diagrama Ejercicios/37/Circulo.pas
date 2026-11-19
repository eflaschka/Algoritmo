program Circulo;
uses Math, crt;

    //Procedimiento encargado de solicitar el radio del circulo y realizar los calculos correspondientes
    procedure calcularCirculo;

    var
    radio : Real;
    area : Real;
    diametro : Real;
    circunferencia : Real;

    //Funcion encargada de calcular el area
    function obtenerArea(r: Real): Real;
    begin
        obtenerArea := PI * r * r;
    end;

    //Funcion encargada de calcular el diametro
    function obtenerDiametro(r: Real): Real;
    begin
        obtenerDiametro := 2 * r;
    end;

    //Funcion encargada de calcular la circunferencia
    function obtenerCircunferencia(r: Real): Real;
    begin
        obtenerCircunferencia := 2 * PI * r;
    end;

    //Procedimiento calcularCirculo
    begin

    //Solicitamos el radio al usuario
    writeln('Ingrese el radio del circulo:');
    readln(radio);

    area := obtenerArea(radio);
    diametro := obtenerDiametro(radio);
    circunferencia := obtenerCircunferencia(radio);

    writeln('Area: ', area:0:2);
    writeln('Diametro: ', diametro:0:2);
    writeln('Longitud de la circunferencia: ', circunferencia:0:2);

end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('====================================');
    writeln('===== Ejercicio Circulo - Enri =====');
    writeln('====================================');
    writeln();

    //Llamamos al procedimiento
    calcularCirculo;

    writeln('Gracias por utilizar mis algoritmos');
    readln();
    
end.