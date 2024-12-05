#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int altura, comprimento;
    int area, perimetro;

    printf("Introduza a altura do retângulo: ");
    scanf(" %d", &altura);

    printf("Introduza o comprimento do retângulo: ");
    scanf(" %d", &comprimento);

    area = comprimento * altura;
    perimetro = (2 * comprimento) + (2 * altura);

    printf("A área do retângulo será: %d\n", area);
    printf("O perímetro do retângulo será: %d\n", perimetro);

    return 0;
}
