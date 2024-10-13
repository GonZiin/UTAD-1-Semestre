/*. Implemente um programa que permita calcular a soma dos 20 primeiros números 
pares positivos. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int i = 1, soma = 0, contador = 0;

    while(contador <= 20){
        if(i % 2 == 0){
            soma += i;
            contador++;
        }
        i++;
    }

    printf("A soma dos 20 primeiros números pares positivos é: %d\n", soma);

    return 0;
}
