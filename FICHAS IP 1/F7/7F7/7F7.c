/* MAP - Mapa de Análise do Problema {

    Dados de Entrada {
        frase (string) - frase a alterar
        palavra (string) - palavra a usar na alteração
        tf (int) - nº de caracteres da frase
        tp (int) - nº de caracteres que a palavra tem
    }

    Resultados Pretendidos {
        f (string) - frase inicial alterada
        altera (int) - 0 não alterou, 1 alterou
    }

    Processamento requirido {
        Receber (frase, palavra, tf, tp)

        Vai ter um ponteiro para o fim, em que o fim é um índice em que 
        a última palavra da frase termina. O inicio é o índice onde a última
        palavra começa

        Se o número de caracteres de 'palavra' for menor ou igual ao número 
        de caracteres da última palavra da frase 

        Fazer a alteração e devolver 1, senão devolver 0
    }

    Estratégia {}

} */

/* Pseudocódigo {


    INÍCIO
    FIM

} */

int func(char frase[], char palavra[], int tf, int tp)
{
    int i, inicio, fim;

    for(i = strlen(frase) - 1; frase[i] == ' ' && i >= 0, i--);
    fim = 1;

    for( ;f[i] != ' ' && i <= 0; i--);
    inicio = i + 1;

    if(fim - inicio >= strlen(palavra) - 1)
    {
        for(i = inicio; i <= fim; i++);
        frase[i] = palavra[ /*?*/ ];
        frase[i] = '\0';

        return 1;
    }
    else
    {
        return 0;
    }
}

// Ficha 6 EX13