// Dados de entrada:
//  n1, n2, ... (inteiro) - sequência de números inteiros

//Resultados pretendidos: 
//  maior (inteiro) - maior dos valores introduzidos 
//  posicao (inteiro) - posição do maior valor inteiro da sequência 
//  tam (inteiro) - tamanho da sequência 

//Fazer o procedimento abaixo enquanto n for positivo:
//  Obter o próximo número da sequência 
//  Se o primeiro número da sequência for positivo interio
//      Processo: (tam <- 1, maior <- n, posicao <- tam)
//  Comparar maior com os números seguintes da sequência
//  Guardar o maior e a posição (Que há o tamanho da sequÊncia)  
//  Incrementar o tamanho à medida que os valores forem introduzidos 

//          Pseudocódigo
//  INICIO PROGRAMA
//      tam <- Ø
//      FAZER
//          OBTER (n)
//          SE (n>0) ENTÃO
//           tam <- tam+1
//           SE (tam=1) ENTÃO
//             maior <- n
//             posicao <- tam
//              SENAO
//               SE (n>maior) ENTAO
//                maior <-n
//                posicao <- tam
//               FIM SE
//           FIM SE
//            ENQUANTO (n =/ 0)
//      MOSTRAR (maior, posicao, tam)
//   FIM


#include <stdio.h>
int main ()
{
    int tam = 0, posicao, maior, n;

    do
    {
        printf ("Escreva um número natural: ");
        scanf ("%d", &n);

        if (n > 0)
        {
            tam = tam + 1;
        }
         
        if (tam = 1)
        {
            maior = n;
            posicao = tam;
        }
        
        if (tam > 1)
        {
            maior = n;
            posicao = tam;
        }
    
    }
    while (n != 0);

    printf ("Máximo: %d  Surgiu na posicao: %d  Tamanho da sequencia: %d ", maior, posicao, tam);

    return 0;
}
