#include <stdio.h>
#include <locale.h>

int main(void)
{
    int num1, num2;

    printf("Introduza dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma dos dois numeros: %d\n", num1 + num2);
    return 0;
}