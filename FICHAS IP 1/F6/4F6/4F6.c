#include <stdio.h>
#define N 100

int fun4F6(int a1[], int a2[], int n)
{
    int i, result;

    printf("\nEscreva numeros positivos inteiros para as seguintes sequencias:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nO numero %d da sequencia 1 sera: ", i+1);
        scanf("%d", &a1[i]);

        printf("\nO numero %d da sequencia 2 sera: ", i+1);
        scanf("%d", &a2[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a1[i] != a2[i])
        {
            return 0;
        }
    }
}

void main()
{
    int array1[N], array2[N], numeros;

    do
    {
        printf("\nQual o tamanho das sequencias? ");
        scanf("%d", &numeros);
    }
    while(numeros < 2 || numeros > N);

    if (fun4F6(array1, array2, numeros) == 0)
    {
        printf("\nNão são iguais");
    }
    else
    {
        printf("\nSão iguais");
    }
}