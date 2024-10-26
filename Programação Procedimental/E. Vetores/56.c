#include <stdio.h>
#include <locale.h>

#define MAX_NOMES 10
#define TAM_NOME 100 

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char nomes[MAX_NOMES][TAM_NOME];

    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Introduza o nome completo %d: ", i + 1);
        fgets(nomes[i], TAM_NOME, stdin);
    }
    
    printf("\nOs nomes completos introduzidos foram:\n");
    for (int j = 0; j < MAX_NOMES; j++) {
        printf("%s", nomes[j]);
    }

    return 0;
}
