/*Uma empresa de telecomunicações cobra a utilização de uma linha dedicada para transmissão de
dados de acordo com a duração dessa utilização, segundo a seguinte tabela de preços:
Tempo de utilização Preço
1ª hora 2 cent./min.
2ª hora à 6ª hora 1 cent./min.
7ª hora à 24ª hora 30 cent./hora
Escreva um programa que, partindo dos valores de início e fim da utilização (hora, minutos e
segundos) calcule o valor a ser cobrado.*/

#include <stdio.h>
#include <locale.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int horas_inicio, minutos_inicio, segundos_inicio;
    int horas_fim, minutos_fim, segundos_fim;
    int tempo_inicio, tempo_fim, tempo_total;
    float preco = 0, preco_em_euro = 0;

    printf("Introduza o horário de início (hh:mm:ss): ");
    scanf("%d:%d:%d", &horas_inicio, &minutos_inicio, &segundos_inicio);

    printf("Introduza o horário de fim (hh:mm:ss): ");
    scanf("%d:%d:%d", &horas_fim, &minutos_fim, &segundos_fim);

    tempo_inicio = converterParaSegundos(horas_inicio, minutos_inicio, segundos_inicio);
    tempo_fim = converterParaSegundos(horas_fim, minutos_fim, segundos_fim);
    tempo_total = tempo_fim - tempo_inicio;

    if (tempo_total <= 3600) {
        preco = (tempo_total / 60.0) * 2;
    } else if (tempo_total <= 21600) {
        preco = (3600 / 60.0) * 2;
        preco += ((tempo_total - 3600) / 60.0) * 1;
    } else {
        preco = (3600 / 60.0) * 2;
        preco += (18000 / 60.0) * 1;
        preco += ((tempo_total - 21600) / 3600.0) * 30;
    }

    
    preco_em_euro = preco / 100;
    printf("O valor a ser cobrado é: %.2f euros\n", preco_em_euro);

    return 0;
}
