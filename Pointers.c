#include <stdio.h>

int troca(int *a, int *b)
{
    int troca;

    troca = *a;
    *a = *b;
    *b = troca;

    return 0;
}

int main()
{
    int x=1, y=2;

    printf("Antes -> X: %d \t Y: %d\n", x, y);
    troca(&x, &y);
    printf("Depois -> X: %d \t Y: %d\n", x, y);

    return 0;
}