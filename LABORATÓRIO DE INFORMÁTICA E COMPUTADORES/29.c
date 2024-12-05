#include <stdio.h>

int main()
{
	FILE* fptr;
	fptr = fopen("//home//gomes//UTAD-1-Semestre//LABORATÓRIO DE INFORMÁTICA E COMPUTADORES//teste.txt", "r");
	
	char myString[100]; // Tamanho string 100
	if(fgets(myString, 100, fptr) != NULL){
			printf("%s", myString);
	}else{
        printf("Erro ao ler ficheiro\n");
    }

    fclose(fptr);

	return 0;
}