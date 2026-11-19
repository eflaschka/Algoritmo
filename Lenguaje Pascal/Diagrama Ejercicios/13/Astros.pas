program Astros;
uses crt;

const
DistanciaEnMillas = 238857;
MillaAKm = 1.609;

var
DistanciaEnKm: real;
respuesta: char;

begin
    clrscr();
    writeln('===================================');
    writeln('===== Ejercicio Astros - Enri =====');
    writeln('===================================');
    writeln();

//Comenzamos con la interacción con el usuario
        writeln('Quisieras saber cual es la distancia entre la Luna y la Tierra expresados en kilometros?');
        readln(respuesta);

//Agregamos una conversión a mayúsculas de la respuesta
        respuesta := UpCase(respuesta);

//Iniciamos el condicional
        if respuesta = 'S' then
    begin
        DistanciaEnKm := DistanciaEnMillas * MillaAKm;
        writeln('La distancia entre la Luna y la Tierra es de ', DistanciaEnKm:0:2, ' Km.');
        readln();
    end
    else
    begin
        writeln('Gracias por usar mis algoritmos !, saludos.');
        readln();
    end;
    

end.