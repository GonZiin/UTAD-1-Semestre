/*  Elabore um algoritmo que permita calcular a classificação média de um estudante 
atendendo às classificações obtidas nas duas frequências e visualizar se foi 
aprovado ou reprovado, tendo em conta que um aluno aprova sempre que a 
média é superior ou igual a 9,5 valores. 
a) Considere que o peso de cada frequência é de 50% */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float nota_um, nota_dois, media;
    
    printf("Introduza a sua primeira nota: ");
    scanf("%f", &nota_um);

    printf("Introduza a sua segunda nota: ");
    scanf("%f", &nota_dois);

    media = (nota_um + nota_dois) / 2;

    printf("Media: %.2f\n", media);

    if (media < 9.5 && media >= 0)
        printf("REPROVADO\n");
    else if (media >= 9.5 && media <= 20)
        printf("APROVADO\n");
    else
        printf("Nota inválida, o resultado tem de ser um número entre 0 e 20\n");

    return 0;
}