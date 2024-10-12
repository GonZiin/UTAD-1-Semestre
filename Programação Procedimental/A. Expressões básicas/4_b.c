/* 4. O volume de um cilindro é dado por: V = π * r2 * h (considere π = 3,141592654). 
b) Repita o exercício anterior utilizando a função “pow” da biblioteca 
“math.h” */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float volume, altura, raio, pi = 3.141592654;

    printf("Introduza a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Introduza o raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * pow(raio, 2) * altura;

    printf("O volume do cilindro é: %.4f\n", volume); 

    return 0;
}
