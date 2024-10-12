/* . O preço de um automóvel é calculado pela soma do preço de fábrica com o preço 
dos impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do 
preço de fábrica). Implemente um programa que leia o nome do automóvel e o 
preço de fábrica e que imprima o nome do automóvel e o preço final.  */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float preco_fabrica, percentagem_revendedor = 0.28, preco_impostos = 0.45, preco_final;
    char nome_automovel[30];

    printf("Introduza o modelo do veículo: ");
    fgets(nome_automovel, sizeof(nome_automovel), stdin);

    printf("Introduza o preço de fábrica do veículo: ");
    scanf("%f", &preco_fabrica);

    preco_final = preco_fabrica + (preco_fabrica * percentagem_revendedor) + (preco_fabrica * preco_impostos);

    printf("O preço final do %s é: %.2f euros\n", nome_automovel, preco_final);

    return 0;
}
