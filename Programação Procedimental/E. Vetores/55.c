#include <stdio.h>
#include <locale.h>

#define N 10

void LerVetor(int *V);
void MostrarVetor(int *V);

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); 
    int V[N];

    LerVetor(V);
    MostrarVetor(V);

    return 0;
}

void LerVetor(int *V) {
    printf("Introduza 10 numeros: ");
    for(int i = 0; i < N; i++) {
        scanf("%d", V + i);
    }
}

void MostrarVetor(int *V) {
    printf("Os numeros introduzidos foram: ");
    for(int i = 0; i < N; i++) {
        printf("%d ", *(V + i));
    }
    printf("\n");
}