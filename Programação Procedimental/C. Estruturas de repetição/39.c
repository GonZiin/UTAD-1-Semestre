/*Implemente um programa que permita contar todos os números pares e ímpares 
inseridos pelo utilizador aleatoriamente. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int num, pares = 0, impares = 0, contador = 0;
    char continuar;

    do {
        printf("Introduza um número: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        contador++;
        printf("Deseja inserir outro número? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Você inseriu %d números.\n", contador);
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
