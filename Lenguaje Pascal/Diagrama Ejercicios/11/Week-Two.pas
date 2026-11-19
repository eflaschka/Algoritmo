program WeekTwo;
uses crt;

var 
dia: integer;

begin
    clrscr();
    writeln('=====================================');
    writeln('===== Ejercicio Week Two - Enri =====');
    writeln('=====================================');
    writeln();

//Iniciamos solicitando el numero
        writeln('Ingrese un numero: ');
        readln(dia);

//Comenzamos con el condicional según caso
        case dia of
        1:
            writeln('El dia es Domingo.');
        2:
            writeln('El dia es Lunes.');
        3:
            writeln('El dia es Martes.');
        4:
            writeln('El dia es Miercoles.');
        5:
            writeln('El dia es Jueves.');
        6:
            writeln('El dia es Viernes.');
        7:
            writeln('El dia es Sabado.');

//En caso de que el numero no sea del 1 al 7, causa error de numero inválido
        else
            writeln('Numero inválido, por favor ingrese un numero del 1 al 7.');
        end;

            readln();


end.