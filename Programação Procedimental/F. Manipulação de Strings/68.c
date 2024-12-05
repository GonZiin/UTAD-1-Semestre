#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 100

void bubbleSort(char arr[][MAX_CARACTERES],int quantidade_palavras);

int main()
{
    char vetor[][100] = {"Geeks for geeks", "Hello", "UTAD", "Gonçalo Gomes", "Chupa-me"};

    int n = sizeof(vetor) / sizeof(vetor[0]);

    bubbleSort(vetor, n);
    printf("Vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("\n%d: %s", i + 1, vetor[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(char arr[][MAX_CARACTERES],int quantidade_palavras)
{
    char temp[MAX_CARACTERES];

    for(int i = 0; i < quantidade_palavras - 1; i++){
        for(int j = 0; j < quantidade_palavras - 1; j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}
