/* Implemente um programa que permita encontrar o maior e menor número de 
uma série de números positivos fornecidos. A sequência termina com o número 
‘0’. */

#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero, max, min;

    max = INT_MIN;
    min = INT_MAX;

    do
    {
        printf("Introduza um número: ");
        scanf("%d", &numero);
        if(numero != 0)
        {
            if(numero > max)
                max = numero;
            if(numero < min)
                min = numero;
        }
    } while (numero != 0);
    
    printf("Máx: %d\n", max);
    printf("Mín: %d\n", min);
    
    return 0;
}
