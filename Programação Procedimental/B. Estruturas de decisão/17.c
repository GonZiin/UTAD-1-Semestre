#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z, maior;

    printf("Introduza três números: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        if (x > z) {
            maior = x;
        } else {
            maior = z;
        }
    } else if (y > z) {
        maior = y;
    } else {
        maior = z;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
