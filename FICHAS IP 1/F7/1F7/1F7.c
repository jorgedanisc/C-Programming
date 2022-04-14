/* MAP - Mapa de Análise do Problema {

    Dados de Entrada {
        frase (string) - array de caracteres determinado por \0
    }

    Resultados Pretendidos {
        Frase com os caracteres por ordem inversa
    }

    Processamento requirido {
        obter (frase)
        ncar = número de caracteres da frase (string)
    }

    Estratégia {
        Mostrar os caracteres de trás para a frente, isto é, começando no ncar-1
        Ir decrementando o indice dessa posição até chegar ao indice {}
    }

} */

/* Pseudocódigo {

    INÍCIO Programa
    OBTEM (frase)
    i <- tamanho (frase) - 1
        ENQUANTO (i >= 0) FAZER
            MOSTRA (frase [i])
            i <- i-1
        FIM ENQUANTO 
    FIM Programa

} */

#include <stdio.h>
#include <string.h>
#define TAM 100

void main()
{
    char frase [TAM];
    int i;

    printf ("Introduz uma frase : \n");
    gets (frase);
    
    for (i = strlen (frase)-1; i >= 0; i--)
    {
        printf ("%c", frase [i]);
    }
}