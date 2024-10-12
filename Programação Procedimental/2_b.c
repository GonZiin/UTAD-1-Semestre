/* 2. Implemente um programa que permita calcular o perímetro e a área de um 
retângulo (Área=altura*base), com: 
b)  o valor das variáveis a ser pedido ao utilizador */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int altura, base, area, perimetro;

    printf("Introduza a altura do retângulo: ");
    scanf("%d", &altura);

    printf("Introduza o comprimento da base do retângulo: ");
    scanf("%d", &base);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    printf("A área do retângulo será: %d\n", area);
    printf("O perímetro do retângulo será: %d\n", perimetro);

    return 0;
}
