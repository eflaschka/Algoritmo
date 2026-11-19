program TrianguloRectangulo;
uses Math, crt;

    //Declaramos el procedimiento que usaremos mas adelante
    procedure calcularTriangulo;

    var
    catetoA, catetoB : Real;
    hip : Real;
    angulo1, angulo2 : Real;

    //Calcula la hipotenusa
    function hipotenusa(a,b:Real):Real;
    begin
        hipotenusa := sqrt(sqr(a)+sqr(b));
    end;

    //Calcula el primer angulo
    function anguloA(a,h:Real):Real;
    begin
        anguloA := ArcSin(a/h)*180/PI;
    end;

    //Calcula el segundo angulo
    function anguloB(b,h:Real):Real;
    begin
        anguloB := ArcSin(b/h)*180/PI;
    end;

    begin

    //Procedimiento encargado de solicitar los catetos y realizar los calculos correspondientes
        writeln('Ingrese el primer cateto: ');
        readln(catetoA);

        writeln('Ingrese el segundo cateto: ');
        readln(catetoB);

        hip := hipotenusa(catetoA,catetoB);

        angulo1 := anguloA(catetoA,hip);

        angulo2 := anguloB(catetoB,hip);

        writeln('Hipotenusa: ',hip:0:2);
        writeln('Angulo A: ',angulo1:0:2,' grados');
        writeln('Angulo B: ',angulo2:0:2,' grados');

    end;

begin

//Llamamos al procedimiento
    calcularTriangulo;

    writeln('Gracias por utilizar mis algoritmos');
    readln();

end.