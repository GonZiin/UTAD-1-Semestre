#include <stdio.h>
#include <locale.h>

/* Asterisco server para dereferenciar o valor do ponteiro ou seja obter o valor do mesmo
   & serve para obter o endereco da variavel na memoria RAM
   % serve para guardar um espaco na memoria para um certo valor
*/

int trocar(int *x, int *y);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    printf("Introduza dois numeros: ");
    scanf("%d %d", &num1, &num2);

    trocar(&num1, &num2);

    printf("Os numeros trocados sao: %d %d\n", num1, num2);

    return 0;
}

int trocar(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
