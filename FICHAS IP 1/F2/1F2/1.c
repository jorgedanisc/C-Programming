/* MAP - Mapa de Análise do Problema {

    Dados de Entrada {
        r (real) - Raio da circunferência.
    }

    Resultados Pretendidos {
        area (real) - Área da circunferência;
        perimetro (real) - Perímetro da circunferência.
    }

    Processamento requirido {
        area = r*(3.1416*3.1416);
        perimetro = r*(2*3.1416).
    }

    Estratégia {
        Receber o "raio" do usuário;
        Se o "raio" for um número negativo, pedir outro número;
        Calcula "area" e "perimetro";
        Mostrar a "area" e o "perimetro".
    }

} */

/* Pseudocódigo {

    INÍCIO area_e_perimetro
        FAZER
            OBTÉM (r)
                area = r*(3.1416*3.1416)
                perimetro = r*(2*3.1416)
        ENQUANTO (r < 0)
        MOSTRAR (area, perimetro)
    FIM area_e_perimetro

} */

#include <stdio.h>
void main ()
{
    float r, area, perimetro;

    do
    {
        printf ("Escreva um valor para o raio da circunferencia em metros: ");
        scanf ("%f", &r);
    }
    while (r < 0);

    area = r*(3.1416*3.1416);
    perimetro = r*(2*3.1416);

    printf ("\nA Area da circunferencia sera: %.2f m2", area);
    printf ("\nO Perimetro da circunferencia sera: %.2f m", perimetro);
}

