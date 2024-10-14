/*Implemente um programa para ler base e altura de 50 triângulos e imprimir a sua 
área.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i, base, altura, area;

    for(i = 0; i < 50; i++) {
        printf("Introduza o comprimento da base do triângulo %d: ", i + 1);
        scanf("%d", &base);
        printf("Introduza o comprimento da altura do triângulo %d: ", i + 1);
        scanf("%d", &altura);

        area = base * altura / 2;
        printf("A área do triângulo %d = %d\n", i + 1, area);
    }
    return 0;
}
