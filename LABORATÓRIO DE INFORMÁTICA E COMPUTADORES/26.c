#include <stdio.h>

#define TAMANHO 3

void exibirTabela(int arr[TAMANHO][TAMANHO])
{
    printf("\n");
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            if(arr[i][j] == 1){
                printf("\tX");
            } else if(arr[i][j] == -1){
                printf("\tO");
            } else {
                printf("\t0");  // Mudado de "." para "0"
            }
        }
        printf("\n");
    }
    printf("\n");
}

int verificarVencedor(int tabuleiro[TAMANHO][TAMANHO]) {
    int soma;
    
    for (int i = 0; i < TAMANHO; i++) {
        soma = tabuleiro[i][0] + tabuleiro[i][1] + tabuleiro[i][2];
        if (soma == 3) return 1;   
        if (soma == -3) return -1;    

        soma = tabuleiro[0][i] + tabuleiro[1][i] + tabuleiro[2][i];
        if (soma == 3) return 1;
        if (soma == -3) return -1;
    }
    
    soma = tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2];
    if (soma == 3) return 1;
    if (soma == -3) return -1;

    soma = tabuleiro[0][2] + tabuleiro[1][1] + tabuleiro[2][0];
    if (soma == 3) return 1;
    if (soma == -3) return -1;

    return 0;
}

int main(void)
{
    int tabuleiro[TAMANHO][TAMANHO] = {}; 
    int jogador = 1;
    int linha, coluna, jogadas = 0, vencedor = 0;

    printf("\t   Jogo do galo\n");

    while(jogadas < 9 && vencedor == 0){
        exibirTabela(tabuleiro);
        printf("Jogador %d (%c), insira a linha e a coluna (0-2): ", 
               jogador == 1 ? 1 : 2, 
               jogador == 1 ? 'X' : 'O');
        scanf("%d %d", &linha, &coluna);

        if(linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO){
            printf("Posição inválida! Use valores entre 0 e 2.\n");
            continue;
        }

        if(tabuleiro[linha][coluna] != 0){
            printf("Posição já ocupada! Escolha outra.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        vencedor = verificarVencedor(tabuleiro);
        jogador *= -1;
    }

    exibirTabela(tabuleiro);

    if (vencedor == 1) {
        printf("Jogador 1 (X) venceu!\n");
    } else if (vencedor == -1) {
        printf("Jogador 2 (O) venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}