#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int altura = 7, comprimento = 5;
    int area, perimetro;

    area = comprimento * altura;
    perimetro = (2 * comprimento) + (2 * altura);

    printf("A área do retângulo será: %d\n", area);
    printf("O perímetro do retângulo será: %d\n", perimetro);

    return 0;
}
