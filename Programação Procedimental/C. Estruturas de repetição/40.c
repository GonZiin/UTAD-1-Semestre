/*. Implemente um programa que calcule a média de uma sequência, de valores 
reais, terminada por ‘-1’. O programa deve apresentar igualmente o número de 
valores introduzidos*/

#include <stdio.h>

int main(void) {
    float num, media = 0;
    int contador = 0;

    printf("Introduza uma sequência de valores reais (termina com -1):\n");
    while (1) {
        scanf("%f", &num);
        if (num == -1) {
            break;
        }
        media += num;
        contador++;
    }

    if (contador > 0) {
        media /= contador;
        printf("A média dos %d números é: %.2f\n", contador, media);
    } else {
        printf("Nenhum número foi introduzido.\n");
    }

    return 0;
}

