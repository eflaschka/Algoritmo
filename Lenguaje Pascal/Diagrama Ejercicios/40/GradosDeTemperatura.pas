program GradosDeTemperatura;
uses crt;

    //Funcion que convierte una temperatura de celsius a fahrenheit
    function celsiusAFahrenheit(celsius: real): real;
    var
    fahrenheit: real;
    begin
        fahrenheit := (9 / 5) * celsius + 32;
        celsiusAFahrenheit := fahrenheit;
    end;

    //Procedimiento que pide la temperatura y muestra la conversion
    procedure convertirTemperatura();
    var
    celsius, fahrenheit: real;
    begin
        writeln('Ingrese la temperatura en celsius: ');
        readln(celsius);

        fahrenheit := celsiusAFahrenheit(celsius);

        writeln(celsius:0:2, ' grados celsius equivalen a ', fahrenheit:0:2, ' grados fahrenheit.');
    end;

//Iniciamos el algoritmo
begin
    clrscr();
    writeln('=================================================');
    writeln('===== Ejercicio Celsius a Fahrenheit - Enri =====');
    writeln('=================================================');
    writeln();

    //Llamamos al procedimiento
    convertirTemperatura();

    writeln('Gracias por utilizar mis algoritmos');
    readln();
    
end.