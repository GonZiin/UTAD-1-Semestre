/*23. Implemente um programa que faça uma conversão entre Euros e Dólares ou viceversa consoante a preferência do utilizador. O utilizador deve primeiro escolher o 
tipo de conversão e depois inserir o valor a converter. 
1,00 € = 1,16 $ */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float valor, resultado;
    char opcao;

    printf("Escolha a conversão: (E)uros para Dólares ou (D)ólares para Euros: ");
    scanf(" %c", &opcao);

    if (opcao == 'E' || opcao == 'e') {
        printf("Introduza o valor em Euros: ");
        scanf("%f", &valor);
        resultado = valor * 1.16;
        printf("%.2f € = %.2f $\n", valor, resultado);
    } else if (opcao == 'D' || opcao == 'd') {
        printf("Introduza o valor em Dólares: ");
        scanf("%f", &valor);
        resultado = valor / 1.16;
        printf("%.2f $ = %.2f €\n", valor, resultado);
    } else {
        printf("Opção não reconhecida.\n");
    }

    return 0;
}
