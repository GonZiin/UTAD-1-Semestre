/*. Implemente um programa que permita, através da inserção da dimensão dos 
lados de um triângulo, identificar de que tipo de triângulo se trata. Considere 
apenas as seguintes situações: 
Isósceles - dois lados iguais e um diferente;
Equilátero - todos os lados iguais; 
Escaleno - todos os lados diferentes. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int lado1, lado2, lado3;

    printf("Introduza o comprimento dos três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Os lados devem ser maiores que zero.\n");
    } else if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}
