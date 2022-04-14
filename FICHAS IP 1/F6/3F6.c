#include <stdio.h>
#define N 10

void main()
{
    int arrayA[N], arrayB[N], i, n, Qnum;
    char continuar;

    //Sequência A
    printf("\nEscreva uma sequencia de %d numeros diferentes no intervalo de 0 a 9\n ", N);

    for(Qnum = 0; Qnum < N; ++Qnum)
    {
        printf("\nEscreva um numero: ");
        scanf("%d", &n);
        n = n - 1;

        arrayA[n] = 1;

        printf("\nQuer escrever mais numeros? (s/n) ");
        scanf("%c", &continuar);
    }

    printf("\nO resultado sera:\n ");

    for(i=0; i<N; ++i)
    {
        printf("%d", arrayA[i]);
    }
    //Sequência B
    //if(arrayA[n] =! 0)


}