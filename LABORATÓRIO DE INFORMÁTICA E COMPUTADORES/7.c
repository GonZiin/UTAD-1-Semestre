#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int numero, numero_gerado, tentativas;
    numero_gerado = 50 + rand() % 450;

    printf("Introduza o numero: ");
    scanf("%d", &numero);

    while(1){
        if (numero != numero_gerado){
            if(numero < numero_gerado){
                printf("O numero introduzido e menor que o numero gerado");
                tentativas++;             
                printf("Introduza o numero: ");
                scanf("%d", &numero);
            }else if(numero > numero_gerado){
                printf("O numero introduzido e mauir que o numero gerado");
                tentativas++
                printf("Introduza o numero: ");
                scanf("%d", &numero);
            }else if(numero == numero_gerado){
                printf("Acertaste!");
                break;
            }
        }
    }

    return 0;
}