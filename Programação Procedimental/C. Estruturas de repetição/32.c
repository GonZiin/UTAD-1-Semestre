/*. Dada uma série de 20 valores reais, implemente um programa que calcule e 
escreva a média aritmética destes valores. Entretanto se a média obtida for maior 
que 20 deverá ser atribuído o valor 20 para a média*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float nota, media = 0.0;
    int i;

    for(i = 0; i < 20; i++) {
        printf("Introduza a nota %d: ", i + 1);
        scanf("%f", &nota);
        media += nota;
    }

    media /= 20;
    if(media > 20)
        media = 20;

    printf("Média: %.2f\n", media);
    return 0;
}