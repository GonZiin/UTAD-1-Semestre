/* Implemente um programa que determine o valor máximo de uma sequência de 
números inteiros positivos (cuja marca de fim é -1) introduzidos sequencialmente 
através do teclado. A sequência pode ter 0 (só existe a marca de fim) ou mais 
elementos.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese");
    int numero, max = -1; // Inicializamos max com -1 para lidar com a sequência vazia

    printf("Introduza uma sequência de números inteiros positivos (termina com -1):\n");
    while (1) {
        printf("Introduza um número (-1 para terminar): ");
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        if (numero > max) {
            max = numero;
        }
    }

    if (max == -1) {
        printf("Nenhum número positivo foi introduzido.\n");
    } else {
        printf("O valor máximo introduzido foi: %d\n", max);
    }

    return 0;
}
