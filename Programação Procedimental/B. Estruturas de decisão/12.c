/* Implemente um programa que converta um valor em bytes para um formato 
legível (Kilo, Mega, Giga ou Tera bytes consoante o múltiplo que melhor se adapte 
a uma representação de fácil leitura do valor). Considere 1024 bytes = 1Kbytes 
Exemplo: 16548973 bytes = 15,78 MB */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float bytes;

    printf("Introduza a quantidade de bytes que quer converter: ");
    scanf("%f", &bytes);

    if (bytes >= 1024 && bytes < pow(1024, 2)) {
        printf("%.2f KB\n", bytes / 1024);
    } else if (bytes >= pow(1024, 2) && bytes < pow(1024, 3)) {
        printf("%.2f MB\n", bytes / pow(1024, 2));
    } else if (bytes >= pow(1024, 3) && bytes < pow(1024, 4)) {
        printf("%.2f GB\n", bytes / pow(1024, 3));
    } else if (bytes >= pow(1024, 4)) {
        printf("%.2f TB\n", bytes / pow(1024, 4));
    } else {
        printf("%.2f Bytes\n", bytes);
    }

    return 0;
}
