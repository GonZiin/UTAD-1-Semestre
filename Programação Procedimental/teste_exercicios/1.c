/* Cálculo da área de um quadrado:
Implemente um programa que calcule a área de um quadrado, solicitando ao usuário o comprimento do lado. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int lado;

    printf("Introduza o comprimento do lado do quadrado: ");
    scanf("%d", &lado);

    printf("Area do quadrado: %d\n", lado * lado);

    return 0;
}