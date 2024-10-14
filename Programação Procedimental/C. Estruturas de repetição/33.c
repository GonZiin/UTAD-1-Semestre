/* Implemente um programa que permita calcular o fatorial de um número inteiro, 
tendo em conta que: n! = n*(n-1)!; com 0! = 1 
Exemplo: 4! = 4*3*2*1* 0! = 24;*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int numero, resultado = 1, i;

    printf("Introduza o número que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Fatorial não definido para números negativos.\n");
        return 1;
    }

    for(i = numero; i > 1; i--) {
        resultado *= i; // Multiplica o resultado pelo número atual
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
