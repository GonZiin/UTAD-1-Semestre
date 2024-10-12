/* 4. O volume de um cilindro é dado por: V = π * r2 * h (considere π = 3,141592654). 
a) Implemente um programa que calcule o volume (V) de um cilindro através 
dos valores da altura (h) do cilindro e do raio (r) da base. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float volume, altura, raio, pi = 3.141592654;

    printf("Introduza a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Introduza o raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("O volume do cilindro é: %.4f\n", volume); 

    return 0;
}
