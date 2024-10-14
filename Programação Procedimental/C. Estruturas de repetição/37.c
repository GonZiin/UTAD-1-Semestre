/*Implemente um programa que leia as notas de uma turma de 60 alunos numa 
disciplina e calcule e apresente a média das notas. O professor pode apenas 
inserir as notas dos alunos que entender, não sendo imperativo que haja a 
inserção das 60 notas visto que certos alunos podem faltar ao Exame*/

#include <stdio.h>

int main(void)
{
    int nota, i, count = 0, media = 0;

    for(i = 0; i < 60; i++) {
        printf("Introduza a nota do aluno %d (0 para avançar esse aluno): ", i + 1);
        scanf("%d", &nota);
        if(nota == 0)
            continue;
            
        media += nota;
        count++;
    }

    media /= count;
    printf("Média: %d\n", media);

    return 0;
}
