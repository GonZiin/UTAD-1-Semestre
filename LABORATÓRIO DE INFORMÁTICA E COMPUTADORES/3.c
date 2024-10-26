#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float pi = 3.1416;
    int raio;
    float area;

    printf("Introduza o raio do círculo: ");
    scanf(" %d", &raio);

    area = pi * (raio * raio);

    printf("Área do círculo: %.2f\n", area); 

    return 0;
}
