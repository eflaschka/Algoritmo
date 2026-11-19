program circulo;
uses crt;

var
radio, longitud, area: real;

begin
    clrscr();
    writeln('================================================');
    writeln('===== Ejercicio Radio de un Circulo - Enri =====');
    writeln('================================================');
    writeln();

//Solicitamos el radio del circulo al usuario
        writeln('Ingrese el radio del circulo: ');
        readln(radio);

//Comenzamos con el proceso del cálculo
        longitud := Pi * Pi * radio;
        writeln('La longitud de la circunsferencia es: ', longitud:0:2);

//Cálculo del area de la circunsferencia
        area := Pi * radio * radio;
        writeln('El area del circulo es: ', area:0:2);

        readln();

end.