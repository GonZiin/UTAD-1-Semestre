/*Implemente um programa que permita somar dois quaisquer números, 
visualizando o resultado obtido. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero_um, numero_dois, soma;
    
    printf("Introduza os dois números que quer somar: ");
    scanf("%d %d", &numero_um, &numero_dois);

    soma = numero_um + numero_dois;

    printf("A soma de %d + %d = %d\n", numero_um, numero_dois, soma);

    return 0;
}
