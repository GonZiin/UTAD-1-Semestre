#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");    

    int *p, *q;

    printf("Introduza dois numeros: ");
    scanf("%d %d", q, p);

    printf("Em ordem inversa os numeros introduidos sao: %d, %d" *p, *q );

    return 0;
}