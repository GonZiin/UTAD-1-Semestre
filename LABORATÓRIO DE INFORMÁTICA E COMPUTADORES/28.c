#include <stdio.h>

typedef struct _DadosAlunos {
    char nome[2048];
    int numero_mecanografico;
    float nota;
} DADOS_ALUNOS;

int main(void) {
    DADOS_ALUNOS alunos[20];
    int count = 0;

    printf("Digite os dados de até 20 alunos.\n");

    while (count < 20) {
        printf("\nAluno %d:\n", count + 1);

        printf("Nome: ");
        fgets(alunos[count].nome, sizeof(alunos[count].nome), stdin);

        printf("Número mecanográfico: ");
        scanf("%d", &alunos[count].numero_mecanografico);

        printf("Nota: ");
        scanf("%f", &alunos[count].nota);

        while (getchar() != '\n');

        count++;
    }

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < count; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Número mecanográfico: %d\n", alunos[i].numero_mecanografico);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("\n");
    }

    return 0;
}
