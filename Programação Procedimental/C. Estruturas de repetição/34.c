/*Implemente um programa que verifique se um número é ou não primo*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i, numero;

    printf("Introduza um número: ");
    scanf("%d", &numero);

    if (numero < 2) {
        printf("O número não é primo.\n");
        return 0;
    }

    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            printf("O número não é primo.\n");
            return 0;
        }
    }

    printf("O número é primo.\n"); // Se não encontrou divisores, é primo

    return 0;
}
