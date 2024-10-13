/* Implemente um programa que permita encontrar o maior de 50 números 
inseridos pelo utilizador. */

#include <stdio.h>

int main(void)
{
    int max, i, count;

    max = 0;
    count = 0; 

    while (count <= 50) {
        printf("Digite um número: ");
        scanf("%d", &i);
        if (i > max) {
            max = i;
        }
        count++;
    }

    printf("O maior número inserido é: %d\n", max);

    return 0;
}
