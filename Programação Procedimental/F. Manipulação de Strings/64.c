/* Escreva o código de um programa que peça ao utilizador para introduzir uma
string e que apresente no ecrã a string escrita “ao contrário”.
Exemplo : “Universidade” deve ser escrito como “edadisrevinU”. */

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    int quantidade_de_letras;

    printf("Introduz a palavra que pretendes inverter: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    quantidade_de_letras = strlen(palavra);

    for(int i = quantidade_de_letras - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}