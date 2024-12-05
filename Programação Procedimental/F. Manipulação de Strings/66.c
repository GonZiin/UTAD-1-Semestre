#include <stdio.h>

void sigla(char myString[]);

int main()
{
    char frase[100];
    printf("Introduza a frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Sigla: ");
    sigla(frase);
    printf("\n");

    return 0;
}

void sigla(char myString[])
{
    int i = 0;
    int inicio_palavra = 1;

    while (myString[i] != '\0') {
        if (myString[i] == ' ') {
            inicio_palavra = 1; // Próxima letra será o início de uma palavra
        } else if (inicio_palavra) {
            if (myString[i] != 'd' && myString[i] != 'e') { // Ignorar "de", "da", "dos", "e", etc.
                if (myString[i] >= 'a' && myString[i] <= 'z') {
                    printf("%c", myString[i] - 32); // Converte para maiúscula
                } else {
                    printf("%c", myString[i]);
                }
            }
            inicio_palavra = 0; // Não imprimir outras letras dessa palavra
        }
        i++;
    }
}
