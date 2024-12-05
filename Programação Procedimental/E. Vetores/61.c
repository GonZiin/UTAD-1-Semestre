/* Escreva o código de uma função que aceite como parâmetro de entrada/saída um
vetor com números reais e a dimensão desse vetor. A função deve preencher esse
vetor com o valor zero.
void limpa_vector(float *, int tamanho);. */

#include <stdio.h>

#define N 10

void limpa_vector(float *arr, int tamanho);
void mostrar_vetor(float *arr, int tamanho);

int main()
{
    float vetor[N] = {1,2,3,4,5,6,7,8,9,10};
    printf("Vetor inicial: ");
    mostrar_vetor(vetor, N);
    limpa_vector(vetor, N);
    printf("Vetor apos funcao limpa vetor: ");
    mostrar_vetor(vetor, N);

    return 0;
}

void limpa_vector(float *arr, int tamanho){
    for(int i = 0; i < tamanho; i++){
        arr[i] = 0;
    }
    printf("\n");
}

void mostrar_vetor(float *arr, int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("%f ", (float)arr[i]);
    }
}