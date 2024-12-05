#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float km_hora, m_segundo;

    printf("Introduza a velocidade em Km/h: ");
    scanf(" %f", &km_hora);

    m_segundo = km_hora / 3.6;

    printf("Velocidade em m/s: %.2f\n", m_segundo);

    return 0;
}