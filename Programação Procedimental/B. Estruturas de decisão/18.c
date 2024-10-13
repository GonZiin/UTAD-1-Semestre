/*Implemente um programa que indique se um determinado número aleatório é 
divisível por 3.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numero = rand();

    if (numero % 3 != 0) {
        printf("O número %d não é divisível por 3\n", numero);
    } else {
        printf("O número %d  é divisível por 3\n", numero);
    }

    return 0;
}
