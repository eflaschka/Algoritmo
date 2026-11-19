program MayorDeDos;
uses crt;

var 
N1, N2: integer;

begin
    clrscr();
    writeln('=========================================');
    writeln('===== Ejercicio Mayor de Dos - Enri =====');
    writeln('=========================================');
    writeln();

        //Inicio del algoritmo
        writeln('Ingrese el primer numero: ');
        readln(N1);

        writeln('Ingrese el segundo numero: ');
        readln(N2);

        //Inicio de los condicionales
        if N1 > N2 then
        writeln(N1, ' es mayor que ', N2)

        else if N2 > N1 then
        writeln(N2, ' es mayor que ', N1)

        //Si no se tiene un numero mayor, se comprueba la igualdad
        else
        writeln('Ambos numeros son iguales.');
            
        readln();

end.