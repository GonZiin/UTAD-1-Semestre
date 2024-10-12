/*1. Implemente um programa que permita calcular a área de um quadrado. 
(Área=Lado*Lado), visualizando o resultado obtido, com: 
a) Lado = 5 cm.*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int area, lado = 5;
    area = lado * lado;

    printf("A área do quadrado será: %d cm²\n", area);

    return 0;
}
