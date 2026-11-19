program Salario;
uses crt;

var
salariobruto, salarioneto, descuento: real;

begin
    clrscr();
    writeln('====================================');
    writeln('===== Ejercicio Salario - Enri =====');
    writeln('====================================');
    writeln();

        //Inicio del algoritmo
        writeln('Ingrese el salario bruto del empleado: ');
        readln(salariobruto);

        //Inicio del condicional
        if salariobruto <= 30000 then
        descuento := salariobruto * 0.05

        else if salariobruto <= 45000 then
        descuento := salariobruto * 0.07

        else if salariobruto <= 75000 then
        descuento := salariobruto * 0.09

        else
        descuento := salariobruto * 0.10;

            //Cálculo del salario neto después del descuento
            salarioneto := salariobruto - descuento;

            //Se muestra los resultados
            writeln('Descuento de la obra social: ', descuento:0:2);
            writeln('Salario Neto: ', salarioneto:0:2);

        readln();

end.