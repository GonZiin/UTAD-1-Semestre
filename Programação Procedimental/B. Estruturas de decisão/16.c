/*Implemente um programa que, de entre dois números fornecidos pelo utilizador, 
permita encontrar o menor deles. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("Introduza dois números: ");
    scanf("%d %d", &x, &y);

    if (x < y) {
        printf("O número %d é o menor\n", x);
    } else if (y < x) {
        printf("O número %d é o menor\n", y);
    } else {
        printf("Os números são iguais\n");
    }

    return 0;
}