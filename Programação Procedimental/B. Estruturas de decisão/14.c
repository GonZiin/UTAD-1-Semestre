#include <stdio.h>

int main(void)
{
    float nota;

    printf("Introduza a sua nota: ");
    scanf(" %f", &nota);

    if(nota >= 0 && nota < 5){
        printf("pessimo\n");
    }else if(nota >= 5 && nota < 8){
        printf("mau\n");
    }else if(nota >= 8 && nota < 10){
        printf("insuficiente\n");
    }else if(nota >= 10 && nota < 12){
        printf("suficiente\n");
    }else if(nota >= 12 && nota <16){
        printf("bom\n");
    }else if(nota >= 16 && nota < 18){
        printf("muito bom\n");
    }else if(nota >= 18 && nota < 20){
        printf("excelente");
    }else
        printf("Nota invalida.\n");
    
    return 0;
}