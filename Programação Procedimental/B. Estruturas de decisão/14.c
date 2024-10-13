/* Implemente um programa que faça a classificação qualitativa de uma nota (valor 
inteiro) de um aluno segundo os seguintes níveis*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Introduza a sua nota: ");
    scanf(" %f", &nota);

    if (nota >= 0 && nota < 5) {
        printf("péssimo\n");
    } else if (nota >= 5 && nota < 8) {
        printf("mau\n");
    } else if (nota >= 8 && nota < 10) {
        printf("insuficiente\n");
    } else if (nota >= 10 && nota < 12) {
        printf("suficiente\n");
    } else if (nota >= 12 && nota < 16) {
        printf("bom\n");
    } else if (nota >= 16 && nota < 18) {
        printf("muito bom\n");
    } else if (nota >= 18 && nota < 20) {
        printf("excelente\n");
    } else {
        printf("Nota inválida.\n");
    }

    return 0;
}
