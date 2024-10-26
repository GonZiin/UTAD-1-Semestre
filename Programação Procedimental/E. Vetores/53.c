#include <stdio.h>
#include <locale.h>

#define N 10

void ler_numeros(int *V);

int main(void) {
    setlocale(LC_ALL, "Portuguese"); 

    int V[N];
    int soma = 0;
    ler_numeros(V);

    for (int i = 0; i < N; i++) {
        if (V[i] == 0) {
            break;
        }
        soma += V[i];
    }

    printf("Soma dos numeros introduzidos: %d\n", soma);

    return 0;
}

void ler_numeros(int *V) {
    printf("Introduz ate 10 numeros (0 para parar): ");
    for (int i = 0; i < N; i++) {
        scanf("%d", V+i);
        if (*(V + i) == 0) {
            break;
        }
    }
}
