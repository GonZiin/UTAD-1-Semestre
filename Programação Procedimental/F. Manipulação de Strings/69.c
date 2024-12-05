#include <stdio.h>
#include <string.h>

#define PALAVRAS 10
#define CARACTERES 20

void armazenar_palavras(char vetor[][CARACTERES], int tamanho);
void encontrar_palavra(char vetor[][CARACTERES], int tamanho, char *plvr);

int main()
{
    char vetor[PALAVRAS][CARACTERES];
    char plvr[30];

    printf("Insira até %d palavras (máximo %d caracteres cada):\n", PALAVRAS, CARACTERES - 1);
    armazenar_palavras(vetor, PALAVRAS);

    printf("Insira a palavra que deseja encontrar: ");
    fgets(plvr, 30, stdin);
    plvr[strcspn(plvr, "\n")] = '\0'; // Remove o '\n'

    encontrar_palavra(vetor, PALAVRAS, plvr);

    return 0; 
}

void armazenar_palavras(char vetor[][CARACTERES], int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        printf("Palavra %d: ", i + 1);
        fgets(vetor[i], CARACTERES, stdin);
        vetor[i][strcspn(vetor[i], "\n")] = '\0';
    }
}

void encontrar_palavra(char vetor[][CARACTERES], int tamanho, char *plvr)
{
    int encontrada = 0;

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(vetor[i], plvr) == 0) {
            printf("Palavra encontrada na linha %d\n", i + 1);
            encontrada = 1;
            break;
        }
    }

    if (!encontrada) {
        printf("Palavra nao existe na matriz.\n");
    }
}
