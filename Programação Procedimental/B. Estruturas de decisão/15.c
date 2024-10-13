/*Implemente um programa que indique se um dado número inteiro é PAR ou 
IMPAR*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Introduza um número: ");
    scanf("%d", &numero);

    if (numero % 2 != 0)
        printf("O número %d é ímpar\n", numero);
    else
        printf("O número %d é par\n", numero);

    return 0;   
}
