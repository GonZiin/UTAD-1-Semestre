#include <stdio.h>
#include <locale.h>

#define N 20

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char V[N];

    for(int i = 0; i < N ; i++){
        scanf("%c", &V[i]);
    }

    for(int i = N; i >= 0; i++){
        printf("%c", V[i]);
    }
}