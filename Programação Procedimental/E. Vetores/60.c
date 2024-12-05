/* Implemente o algoritmo da pesqusia Binária */

#include <stdio.h>

#define N 10

int pesquisaBinaria(int *arr, int tamanho, int index_minimo, int index_maximo, int x);
void mostrar_vetor(int *arr, int tamanho);


int main()
{
    int numero,posicao;

    int vetor[N] = {1,2,3,4,5,6,7,8,9,10};
    printf("Que numero pretende encontrar neste vetor: ");
    mostrar_vetor(vetor, N);
    printf(": ");

    scanf("%d", &numero); 
    posicao = pesquisaBinaria(vetor, N, 0, 9, numero);
    if(posicao > 0){
        printf("O numero %d foi encontrado na posicao: %d.\n", numero, posicao + 1);
    }else{
        printf("O numero %d não se encontra neste vetor.\n", numero);
    }
}

void mostrar_vetor(int *arr, int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }
}

int pesquisaBinaria(int *arr, int tamanho, int index_minimo,int index_maximo, int x)
{
    while (index_minimo <= index_maximo) {
        int medio = index_minimo + (index_maximo - index_minimo) / 2;

        if(arr[medio] == x){
            return medio;
        }

        if(arr[medio] < x){
            index_minimo = medio + 1;
        }

        if(arr[medio] > x){
            index_maximo = medio - 1;
        }
    }
    return -1;
}
