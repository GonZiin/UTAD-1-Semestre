#include <stdio.h>
#include <locale.h>

#define N 10

int main(void)
{
    int V[N],soma = 0,max = 0, min = N;
    float media;

    for(int i = 0; i < N; i++){
        scanf("%d", &V[i]);
        soma += V[i];
        if(max < V[i])
            max = V[i];
        if(min > V[i])
            min = V[i];
    }

    media = soma / 10;

    printf("Soma: %d\nMaximo: %d\nMinimo: %d\nMedia: %.2f\n", soma, max, min, media);

    return 0;
}