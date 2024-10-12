/*  Elabore um algoritmo que permita calcular a classificação média de um estudante 
atendendo às classificações obtidas nas duas frequências e visualizar se foi 
aprovado ou reprovado, tendo em conta que um aluno aprova sempre que a 
média é superior ou igual a 9,5 valores. 
b) Repita o exercício anterior considerando que o peso das frequências é de 
40% para a 1ª e 60% para a 2ª, e que para cada uma delas é obrigatória 
uma nota mínima de 8,5 valores, sem a qual o aluno está 
automaticamente reprovado. */

#include <stdio.h>
#include <locale.h>

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

    if(nota_um >= 8.5 && nota_dois >= 8.5)
        media = ((0.40 * nota_um) + (0.60 * nota_dois));
    else
        printf("REPROVADO PORQUE UMA DAS SUAS NOTAS FOI MENOR QUE 8.5\n");

    printf("Média: %.2f\n", media);

    if (media < 9.5 && media >= 0)
        printf("REPROVADO\n");
    else if (media >= 9.5 && media <= 20)
        printf("APROVADO\n");
    else
        printf("Nota inválida, o resultado tem de ser um número entre 0 e 20\n");

    return 0;
}
