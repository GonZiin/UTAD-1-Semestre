/*. Implemente um programa que repita a mensagem “Introduza a Letra ‘a’” até que 
se verifique a sua inserção. */

#include <stdio.h>

int main(void)
{
    char letra = ' ';

    while (letra != 'a') {
        printf("Introduza a letra 'a': ");
        scanf(" %c", &letra);
    }

    return 0;
}
