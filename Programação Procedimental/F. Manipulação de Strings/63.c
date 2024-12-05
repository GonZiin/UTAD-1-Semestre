/* . Escreva o código de um programa que peça ao utilizador para introduzir o nome
e o sobrenome e que construa e apresente no ecrã uma string com o nome
completo. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    char sobrenome[50];

    printf("Introduza o seu nome: ");
    scanf("%49s", nome);

    printf("Introduza o seu sobrenome: ");
    scanf("%49s", sobrenome);

    printf("Nome completo: %s %s.\n", nome, sobrenome);

    return 0;
}