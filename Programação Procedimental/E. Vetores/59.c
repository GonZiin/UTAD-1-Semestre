/* 9. Implemente o algoritmo da pesquisa linear. */

#include <stdio.h>

#define N 10

void mostrarVetor(int arr[],int tamanho);
int pesquisaLinear(int arr[], int tamanho, int n);

int main()
{
    int numero, posicao;
    int vetor[N] = {1,2,3,4,5,6,7,8,9,10};
    mostrarVetor(vetor, N);
    printf("Indique o numero do qual quer saber a posição: ");
    scanf(" %d", &numero);
    
    posicao = pesquisaLinear(vetor, N, numero);

    if(posicao != -1){
        printf("O numero %d encontra-se na posiçao: %d.\n",numero, posicao);
    }else{
        printf("O numero %d não se encontra no vetor apresentado.\n", numero);
    }

    return 0;
}

void mostrarVetor(int arr[],int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int pesquisaLinear(int arr[], int tamanho, int n)
{
    for(int i = 0; i < tamanho; i++){
        if(n == arr[i]){
            return i + 1;
        }
    }
    return -1;
}