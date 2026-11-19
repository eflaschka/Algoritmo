program Calculadora;
uses crt;

var
operando1, operando2, resultado: real;
operador: char;
resultadoEntero: integer;

begin
    clrscr();
    writeln('========================================');
    writeln('===== Ejercicio Calculadora - Enri =====');
    writeln('========================================');
    writeln();

//Comenzamos solicitando al usuario los operandos y el operador
        writeln('Ingrese el primer numero: ');
        readln(operando1);

        writeln('Ingrese el operador (+, -, *, /): ');
        readln(operador);

        writeln('Ingrese el segundo numero: ');
        readln(operando2);

//Iniciamos el condicional Segun Caso
    case operador of
        '+': resultado := operando1 + operando2;
        '-': resultado := operando1 - operando2;
        '*': resultado := operando1 * operando2;
        '/':
    begin
    if operando2 <> 0 then
            resultado := operando1 / operando2
    else
    begin
        writeln('No se puede dividir por cero.');
    end;
    end;
    else
    begin
    writeln('Operador no válido');
    end;
    end;

//Convertimos el resultado a Entero
        resultadoEntero := trunc(resultado);
        writeln('El resultado de la operacion es: ', resultadoEntero);
        writeln('Gracias por utilizar mis algoritmos.');
        readln();



end.