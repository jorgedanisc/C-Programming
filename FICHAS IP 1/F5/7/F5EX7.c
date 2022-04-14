#include <stdio.h>
void triangulo (n)
{
    int i, j, nESP=0;

    printf ("\n"); 

    for (i = n; n >= 1; n--,nESP++)
    {
        for (j = 0; j < nESP; j++)
            printf (" ");
        for (j = 1; j <= n; j++)
            printf ("%d", j); 
        for (j= n-1; j >= 1; j--)
            printf ("%d", j);
        printf ("\n"); 
    }
}

void main ()
{
    int n;

    do
    {
        fflush (stdin);
        printf ("Qual o número de linhas: ");
        scanf ("%d", &n);
    }
    while (n <= 1 || n > 9);

    triangulo (n);
}