#include <stdio.h>
#include <string.h>

int contar_ocorrencias(char texto[], char palavra[]);

int main()
{
    char texto[100];
    char palavra[30];

    printf("Introduza o texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o caractere de nova linha.

    printf("Introduza a palavra que deseja contar: ");
    scanf("%29s", palavra);

    int resultado = contar_ocorrencias(texto, palavra);

    printf("A palavra '%s' aparece %d vez(es) no texto.\n", palavra, resultado);

    return 0;
}

int contar_ocorrencias(char texto[], char palavra[])
{
    int contador = 0;
    char *ptr = texto;

    while ((ptr = strstr(ptr, palavra)) != NULL) {
        contador++;
        ptr += strlen(palavra); 
    }

    return contador;
}
