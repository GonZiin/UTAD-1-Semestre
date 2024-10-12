/* Implemente um programa que permita calcular a área de um quadrado.
(Área=Lado*Lado), visualizando o resultado obtido, com: o valor do lado deverá ser pedido ao utilizador */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int area, lado = 0;
    
    printf("Introduza o comprimento do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;
    printf("A área do quadrado será: %d cm²\n", area);  

    return 0;
}