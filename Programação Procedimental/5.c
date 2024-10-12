/*Implemente um programa que peça ao utilizador os valores da base e da altura 
de um triângulo. Em seguida, apresente a área do mesmo. 
Obs.: Área = (Base * Altura) / 2. */

#include <stdio.h>
#include <locale.h> 

int main(void)
{   
    setlocale(LC_ALL, "Portuguese");

    int area, base, altura;

    printf("Introduza o comprimento da base do triângulo: ");
    scanf("%d", &base);

    printf("Introduza a altura do triângulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo será: %d\n", area);

    return 0;
}

