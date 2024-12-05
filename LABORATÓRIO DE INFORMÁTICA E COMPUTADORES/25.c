#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
    srand(time(NULL));

    int V[N][N];
    int soma_linhas, soma_colunas;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            V[i][j] = rand() % 10;
            printf("%2d ", V[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < N; i++){
        soma_linhas = 0;
        for(int j = 0; j < N; j++){
            soma_linhas += V[i][j];
        }
        printf("Linha %d: %d\n", i + 1, soma_linhas);
    }
    
    for(int j = 0; j < N; j++){
        soma_colunas = 0;
        for(int i = 0; i < N; i++){
            soma_colunas += V[i][j];
        }
        printf("Coluna %d: %d\n", j + 1, soma_colunas);
    }

return 0;
}
