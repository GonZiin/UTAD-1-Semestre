/* Implemente um programa que permita aceitar e visualizar de seguida o nome de 
20 pessoas. Considere um máximo de 20 carateres para o nome completo*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    char nome[21];
    int count = 1;

    while(count <= 20){
        printf("Introduz o nome: ");
        fgets(nome, sizeof(nome), stdin);
        printf("Nome %d: %s",count, nome);
        count ++;
    }

    return 0;
}