#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[50];
    printf("Introduza a frase: ");
    fgets(frase, 50, stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    printf("Sigla: ");
    // Imprime a primeira letra da frase, caso exista
    if (frase[0] != '\0' && frase[0] != ' ') {
        printf("%c", toupper(frase[0]));
    }

    // Percorre a frase e pega a primeira letra após cada espaço
    for (int i = 1; frase[i] != '\0'; i++) {
        if (frase[i - 1] == ' ' && frase[i] != ' ') {
            printf("%c", toupper(frase[i]));
        }
    }

    printf("\n");
    return 0;
}
