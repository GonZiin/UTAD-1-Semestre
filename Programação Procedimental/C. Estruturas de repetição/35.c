#include <stdio.h>

int main() {
    int primeiro_numero = 0, segundo_numero = 1, proximo_numero, numero_de_termos;

    printf("Digite o número de termos da série de Fibonacci: ");
    scanf("%d", &numero_de_termos);

    printf("Série de Fibonacci:\n");

    for (int i = 0; i < numero_de_termos; i++) {
        if (i <= 1) {
            proximo_numero = i;
        } else {
            proximo_numero = primeiro_numero + segundo_numero;
            primeiro_numero = segundo_numero;
            segundo_numero = proximo_numero;
        }
        printf("%d, ", proximo_numero);
    }

    return 0;
}
