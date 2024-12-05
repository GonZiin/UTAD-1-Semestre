#include <stdio.h>

#define N 10

void mostrar_vetor(int *arr, int tamanho);
void bubblesort(int *arr, int tamanho);

int main(void)
{
    int vetor_desorganizado[N] = {1,3,4,6,2,9,8,7,5,10};
    printf("O vetor que vai ser organizado é: ");
    mostrar_vetor(vetor_desorganizado, N);
    bubblesort(vetor_desorganizado, N);
    printf("O vetor orgarnizado é: ");
    mostrar_vetor(vetor_desorganizado,  N);
    printf("\n");

    return 0;
}

void mostrar_vetor(int *arr, int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }
}

void bubblesort(int *arr, int tamanho)
{
    int trocado;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocado = 1;
            }
        }
        if(!trocado) break; // Ja esta ordenado
    }
}
