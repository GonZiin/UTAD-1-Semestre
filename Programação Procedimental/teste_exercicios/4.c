#include <stdio.h>
#include <locale.h>

int main(void)
{
    float pi = 3.1416, raio, altura;

    printf("Introduza o raio e a altura do cilindro: ");
    scanf("%f %f", &raio, &altura);

    printf("Volume do cilindro: %.2f cm^3\n", pi * (raio * raio) * altura);

    return 0;
}