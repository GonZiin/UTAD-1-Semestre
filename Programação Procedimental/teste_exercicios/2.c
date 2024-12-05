#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura;

    printf("Introduza o comprimento da base do retângulo: ");
    scanf("%d", &base);

    printf("Introduza a altura do retângulo: ");
    scanf("%d", &altura);

    printf("Área do retângulo: %d\n", base * altura);
    printf("Perímetro do retângulo: %d\n", (2 * base) + (2 * altura));

    return 0;
}
