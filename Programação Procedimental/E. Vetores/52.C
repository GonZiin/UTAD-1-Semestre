#include <stdio.h>
#include <locale.h>

#define N 50

int main(void){
    int V[N];
    int count = 0;

    printf("Introduz ate 50 numeros (0 para parar): ");
    for(int i = 0; i < N; i++){
        scanf(" %d", &V[i]);
        if(V[i] == 0){
            break;
        }
        count++;
    }

    for(int j = 0; j < count; j++){
        printf("%d ",V[j]);
    }

    return 0;
}