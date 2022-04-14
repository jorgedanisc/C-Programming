/* MAP - Mapa de Análise do Problema {

    Dados de Entrada {
        c (real) - Cateto do triângulo retângulo.
    }

    Resultados Pretendidos {
        hipo_qua (real) - Hipotenusa ao quadrado do triângulo.
        hipo (real) - Hipotenusa do triângulo.
        area (real) - Área do triângulo.
    }

    Processamento requirido {
        hipo_qua = 2*(c*c);
        hipo = sqrt(hipo_qua);
        area = (c*c)/2;
    }

    Estratégia {
        Obter o valor de "c" pelo utilizador;
        Se o valor for um número real negativo, requesitar outra vez um valor para "c";
        Calcular "hipo_qua","hipo" e "area";
        Mostrar "hipo" e "area".
    }

} */

/* Pseudocódigo {

    INÍCIO hipo_e_area
        FAZER 
            OBTEM (c)
                hipo_qua = 2*(c*c)
                hipo = sqrt(hipo_qua);
                area = (c*c)/2
        ENQUANTO (c < 0)
        MOSTRAR (hipo, area)
    FIM hipo_e_area

} */

#include <stdio.h>
#include <math.h>
void main ()
{
    float c, hipo_qua, hipo, area;

    do
    {
        printf ("Escreva um valor para o cateto do triângulo: ");
        scanf ("%f", &c);
    }
    while (c < 0);

    hipo_qua = 2*(c*c);
    hipo = sqrt(hipo_qua);
    area = (c*c)/2;

    printf ("\nO valor da hipotenusa do triangulo sera: %.2f", hipo);
    printf ("\nO valor da area do triangulo sera: %.2f", area);
}