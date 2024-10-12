/* 2. Implemente um programa que permita calcular o perímetro e a área de um 
retângulo (Área=altura*base), com: 
a) altura=3 cm e base=8 cm */

#include <stdio.h>
#include <locale.h>

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int altura = 3, base = 8, area, perimetro;

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    printf("A área do retângulo será: %d\n", area);
    printf("O perímetro do retângulo será: %d\n", perimetro);

    return 0;
}
