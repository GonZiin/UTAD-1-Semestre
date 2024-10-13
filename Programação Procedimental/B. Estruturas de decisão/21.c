/*21. Implemente um programa que permita, através da inserção da dimensão dos 
lados de um triângulo, verificar se se trata de um triângulo retângulo. 
Sugestão: verificar através do Teorema de Pitágoras efetuando os cálculos com uma 
aproximação de 0,01. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float lado1, lado2, lado3;

    printf("Introduza o comprimento dos três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    float a, b, c;
    
    if (lado1 > lado2 && lado1 > lado3) {
        c = lado1; a = lado2; b = lado3;
    } else if (lado2 > lado1 && lado2 > lado3) {
        c = lado2; a = lado1; b = lado3;
    } else {
        c = lado3; a = lado1; b = lado2;
    }

    if (fabs(c * c - (a * a + b * b)) < 0.01) {
        printf("Os lados formam um triângulo retângulo.\n");
    } else {
        printf("Os lados não formam um triângulo retângulo.\n");
    }

    return 0;
}
