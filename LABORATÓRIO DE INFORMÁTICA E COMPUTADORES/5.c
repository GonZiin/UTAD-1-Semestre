#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int horas, minutos, segundos, soma = 0;

    printf("Introduza as horas (xx:xx:xx): ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    soma = segundos + (minutos * 60) + (horas * 3600);

    printf("Em segundos: %d\n", soma);
    
    return 0;
}
