#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int dias, anos, semanas, dias;

    printf("Introduza os dias que quer converter: ");
    scanf(" %d", &dias);

    anos = dias / 365;
    semanas = dias % 365; 

    return 0;
}