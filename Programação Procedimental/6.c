/*Implemente um programa que peça ao utilizador um nome completo, e o escreva 
no ecrã. Considere um máximo de 20 carateres para o nome. Exemplo: Ana 
Santos */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char nome[21];  

    printf("Introduza o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("O seu nome é: %s", nome);

    return 0;
}
