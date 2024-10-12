/*  Uma empresa tem para um determinado funcionário uma ficha contendo o 
nome, número de horas trabalhadas e o número de dependentes de um 
funcionário. Considere que: 
A empresa paga 12 euros por hora e 40 euros por cada dependente. 
 Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IRS. 
Faça um algoritmo e implemente um programa para ler o nome, o número de 
horas trabalhadas e o número de dependentes de um funcionário. Após a 
leitura, escreva qual o nome, o salário bruto, os valores descontados para cada 
tipo de imposto e finalmente qual o salário líquido do funcionário. */

#include <stdio.h>
#include <locale.h>

int main()
{ 
    setlocale(LC_ALL, "Portuguese");

    int horas_trabalhadas, dependentes;
    float salario_por_hora = 12.0, bonus_dependentes, salario_bruto, salario_liquido;
    float inss = 0.085, irs = 0.05;
    float desconto_inss, desconto_irs;

    char nome[30];

    printf("Introduza o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Introduza o número de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    printf("Introduza o número de dependentes: ");
    scanf("%d", &dependentes);

    bonus_dependentes = dependentes * 40;

    salario_bruto = (horas_trabalhadas * salario_por_hora) + bonus_dependentes;

    desconto_inss = salario_bruto * inss;
    desconto_irs = salario_bruto * irs;

    salario_liquido = salario_bruto - (desconto_inss + desconto_irs);

    printf("Nome: %s", nome);
    printf("O seu salário bruto é: %.2f euros\n", salario_bruto);
    printf("O desconto do INSS é: %.2f euros\n", desconto_inss);
    printf("O desconto do IRS é: %.2f euros\n", desconto_irs);
    printf("O seu salário líquido é: %.2f euros\n", salario_liquido);

    return 0;
}
