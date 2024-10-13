#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char op;
    int x, y;

    printf("Introduza o tipo de operação que deseja realizar: (+ | / | * | - ) ");
    scanf(" %c", &op);

    printf("Introduza dois números: ");
    scanf("%d %d", &x, &y);

    switch (op)
    {
    case '+':
        printf("Resultado: %d + %d = %d\n", x, y, x + y);
        break;
    case '-':
        printf("Resultado: %d - %d = %d\n", x, y, x - y);
        break;
    case '/':
        if (y == 0) {
            printf("Erro: Divisão por zero não é permitida.\n");
        } else {
            printf("Resultado: %d / %d = %d\n", x, y, x / y);
        }
        break;
    case '*':
        printf("Resultado: %d * %d = %d\n", x, y, x * y);
        break;
    default:
        printf("Operador inválido.\n");
        break;
    }

    return 0;   
}
