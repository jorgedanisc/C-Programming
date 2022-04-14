#include <stdio.h> 
void main()
{
    int numero, soma, digito;

    printf ("Numero");
    scanf ("%d %d", &numero, &numero);
    
    while (numero>0)
    {
    digito=numero%10;
    numero=numero/10;
    soma=digito+soma;
    };

    printf ("O resultado sera %d", soma);
}
