#include <stdio.h>

int main()
{
    FILE* ficheiro = fopen("mensagem.txt", "w");

    if(ficheiro == NULL){
        printf("Erro ao abrir ou criar o ficheiro\n");
    }else{
        printf("Ficheiro criado com sucesso\n");
    }
    fprintf(ficheiro, "Olá mundo!");

    return 0;
}