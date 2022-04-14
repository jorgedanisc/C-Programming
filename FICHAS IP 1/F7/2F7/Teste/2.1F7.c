#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 100

int contaPrimeiro(char f[]);

void main()
{
    char frase[TAM];

    printf("Escreva uma frase: ");
    gets(frase);

    contaPrimeiro(frase);
}

int contaPrimeiro(char f[])
{
    int i, d = 0, contador = 0;
    char chave;
    

    if(isspace(f) == 0)
    {
        chave = toupper(f[0]);
    }

    do
    {
        ++d;
    }
    while(isspace(f) != 0);
    
    if(isspace(f) != 0)
    {
        

        chave = toupper(f[d]);
    }

    for(i = 0; f[i] != '\0'; i++)
    {
        if(toupper(f[i]) == chave)
        {
            contador++;
        }
    }

    printf("A primeira letra aparece %d vezes na frase que introduziu", contador);
    printf("\n%d", d);

}