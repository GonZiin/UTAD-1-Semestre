/* Implemente um programa que leia 30 números inteiros positivos e visualize o 
menor deles. */

#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL,"Portuguese");

    int i, numero, menor;

    menor = 2147483647;
    printf("Digite 30 números inteiros positivos:\n");
    for (i = 0; i < 30; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero < menor) {
            menor = numero;
        }
    }
    printf("O menor número digitado é: %d\n", menor);

    return 0;
}