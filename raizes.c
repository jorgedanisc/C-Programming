#include <stdio.h>
#include <math.h>

float function(float x, float y, float z, float *x1, float *x2)
{
    float d;

    d = sqrt(y*y - 4*x*z);

    if(d >= 0)
    {
        *x1 = (-y+d)/(2*x);
        *x2 = (-y-d)/(2*x);

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float a, b, c, r1, r2;
    int reais;

    printf("Escreva os coeficientes (a/b/c): ");

    printf("\na: ");
    scanf("%f", &a);

    printf("\nb: ");
    scanf("%f", &b);

    printf("\nc: ");
    scanf("%f", &c);

    reais = function(a, b, c, &r1, &r2);

    if(reais == 1)
    {
        if(r1==r2)
        {
            printf("\nx1=[%.4f]x2", r1);
        }
        else
        {
            printf("\nx1=[%.4f]\nx2=[%.4f]", r1, r2);
        }
    }
    else
    {
        printf("Nao tem raizes reais");
    }

    return 0;
}