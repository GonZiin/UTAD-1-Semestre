/* Implemente um programa que peça ao utilizador uma nota de avaliação 
(numérica) e que indique se o aluno está APROVADO ou REPROVADO.  */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float nota;
    
    printf("Introduza a sua nota final: ");
    scanf("%f", &nota);

    if (nota < 9.5 && nota >= 0)
        printf("REPROVADO\n");
    else if (nota >= 9.5 && nota <= 20)
        printf("APROVADO\n");
    else
        printf("Nota inválida, o resultado tem de ser um número entre 0 e 20\n");

    return 0;
}
