#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lado1, lado2, lado3;

    printf("Introduza o comprimento de cada um dos três lados: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if(lado1 == lado2 || lado1 == lado3){
        printf("Pode ser um triângulo retângulo\n");
    } else if(lado2 == lado3){
        printf("Pode ser um triângulo retângulo\n");
    } else {
        printf("Não pode ser um triângulo retângulo\n");
    }

    return 0;
}
