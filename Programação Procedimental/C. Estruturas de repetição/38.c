/*Implemente um programa que leia os valores anuais de Precipitação de 12 
localidades. Para além disso pretende-se que apresente o valor máximo, o valor 
mínimo e a média dos valores lidos */

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float temperatura = 0, maxima, minima, media;
    for (int i = 0; i < 12; i++) {
        printf("Introduza a precipitação da localidade %d: ", i + 1);
        scanf(" %f", &temperatura);
        if (i == 0) {
            maxima = temperatura;
            minima = temperatura;
        } else if (i > 0) {
            if (temperatura > maxima) {
                maxima = temperatura;
            } else if (temperatura < minima) {
                minima = temperatura;
            }
        }
        media += temperatura;
    }
    media /= 12;
    printf("O valor máximo de precipitação foi: %.2f mm\n", maxima);
    printf("O valor mínimo de precipitação foi: %.2f mm\n", minima);
    printf("O valor da média de precipitação foi: %.2f mm\n", media);
    return 0;
}
