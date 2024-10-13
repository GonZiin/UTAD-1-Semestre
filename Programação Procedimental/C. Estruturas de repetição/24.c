/*. Implemente um programa que permita efetuar a soma dos 180 primeiros 
números inteiros positivos */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int i = 1, soma = 0;
    while(i <= 180){
        soma += i;
        i++;
    }

    printf("O resultado da soma dos números inclusivos até 180 é: %d\n", soma);

    return 0;
}
