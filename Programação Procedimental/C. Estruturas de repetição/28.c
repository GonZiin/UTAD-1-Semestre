/* Implemente um programa que permita aceitar um valor numérico que apenas 
pode ser positivo. Se não for positivo deve insistir na leitura. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Introduza um número positivo: ");
    scanf("%d", &numero);

    do
    {
        printf("Introduza um número positivo: ");
        scanf("%d", &numero);
    } while (numero < 0);
    
    return 0;
}
