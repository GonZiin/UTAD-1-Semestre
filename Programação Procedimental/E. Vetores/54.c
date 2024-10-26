#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void preencherVetor(int *V);
int soma_impares(int *V);


int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int V[N];

    preencherVetor(V);
    printf("A soma dos numeros nos indices impares = %d\n", soma_impares(V));
 
    return 0;
}

void preencherVetor(int *V) {
    for(int i = 0; i < N; i++) {
        printf("%d\n", *V);
        *(V + i) = rand();
    }
}

int soma_impares(int *V){
    int soma = 0;
    for(int i = 1; i < N; i+= 2){
        soma += *(V + i);
    }
    return soma;
}