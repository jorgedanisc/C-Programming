#include <stdio.h>
#include <string.h>
#define TAM 100

void main()
{
    char string[TAM];
    int i;

    printf("Escreva uma frase: ");
    gets(string);

    for(i=strlen(string)-1; i>=0; i--)
    printf("%c", string[i]);
}