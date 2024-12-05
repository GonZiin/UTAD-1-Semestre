#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = NULL; // Ponteiro para o array dinâmico
    int tamanho = 0;   // Tamanho atual do array
    int capacidade = 1; // Capacidade inicial do array
    int numero;

    array = malloc(capacidade * sizeof(int)); // Aloca espaço inicial
    if (array == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite números positivos (digite -1 para terminar):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero == -1) break; // Verifica a marca de fim

        // Verifica se é necessário aumentar a capacidade do array
        if (tamanho == capacidade) {
            capacidade *= 2; // Dobra a capacidade
            int *novo_array = malloc(capacidade * sizeof(int));
            if (novo_array == NULL) {
                printf("Erro ao alocar memória!\n");
                free(array);
                return 1;
            }

            // Copia os valores antigos para o novo array
            for (int i = 0; i < tamanho; i++) {
                novo_array[i] = array[i];
            }

            free(array);   // Libera o array antigo
            array = novo_array; // Atualiza o ponteiro
        }

        array[tamanho] = numero;
        tamanho++;
    }

    // Exibe os números armazenados
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array); // Libera a memória alocada
    return 0;
}
