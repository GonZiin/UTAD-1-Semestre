#include <stdio.h>
#include <locale.h> 

#define N 10

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int V[N];

    printf("Introudaza %d numeros: ", N); /* Iteramos pelo vetor de maneira positiva, crescente*/
    for(int i = 0; i < N; i++){
        scanf("%d", & V[i]);
    }

    for(int i = N -1; i >= 0; i--){ /* Iteramos pelo vetor de maneira decrescente e imprimos os numeros presentes no index atual*/
        printf("%d ", V[i]);
    }

    return 0;

}