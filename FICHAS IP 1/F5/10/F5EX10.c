#include <stdio.h>

int cubo (int n)
{
    int reslt;

    reslt = n*n*n;

    return reslt
}

int RF (int n)
{
    int valor;

    do 
    {
        fflush (stdin);
        printf ("Escreva um número entre 100 e 999: ");
        scanf ("%d", &valor);
    }
    while (n <= 99 || n >= 1000);

    return valor;
}