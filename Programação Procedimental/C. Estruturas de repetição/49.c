#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.141592653

void menu();
float opcaoA();
int opcaoB();
int opcaoD();
float opcaoE();
float opcaoF();
int opcaoG();
float opcaoH();
void opcaoI();

int main(void) {
    char escolha;
    do {
        menu();
        printf("\nIntroduza o tipo de operacao que pretende fazer (ou 0 para sair): ");
        scanf(" %c", &escolha);
        
        switch (escolha) {
            case 'a':
                printf("Resultado: %.2f\n", opcaoA());
                break;
            case 'b':
                printf("Fatorial: %d\n", opcaoB());
                break;
            case 'd':
                if (opcaoD())
                    printf("O número é primo\n");
                else
                    printf("O número não é primo\n");
                break;
            case 'e':
                printf("Resultado: %.2f\n", opcaoE());
                break;
            case 'f':
                printf("Resultado: %.2f\n", opcaoF());
                break;
            case 'g':
                printf("Número de dígitos: %d\n", opcaoG());
                break;
            case 'h':
                printf("Raiz quadrada: %.2f\n", opcaoH());
                break;
            case 'i':
                opcaoI();
                break;
            case '0':
                printf("A sair...\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    } while (escolha != '0');
    
    return 0;
}

void menu() {
    printf("\n*****************MENU DA CALCULADORA**************\n");
    printf("a) Soma, subtração, multiplicação e divisão\n");
    printf("b) Fatorial de um número\n");
    printf("d) Verificar se um determinado número é primo\n");
    printf("e) Cálculo da potência de um número\n");
    printf("f) Calcular o seno ou o cosseno\n");
    printf("g) Calcular o número de dígitos de um número\n");
    printf("h) Raiz quadrada\n");
    printf("i) Raízes de polinómios de segundo grau\n");
    printf("0) Sair\n");
}

float opcaoA() {
    float x, y;
    char op;
    printf("Introduza o tipo de operação que deseja realizar (+ | - | / | *): ");
    scanf(" %c", &op);
    printf("Introduza os dois números que pretende realizar a operação: ");
    scanf("%f %f", &x, &y);
    
    switch (op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '/':
            return x / y;
        case '*':
            return x * y;
        default:
            printf("Operação inválida\n");
            return 0;
    }
}

int opcaoB() {
    int resultado = 1, a;
    printf("Introduza o número que pretende fatorizar: ");
    scanf("%d", &a);
    for (int i = a; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}

int opcaoD() {
    int num, i;
    printf("Introduza um número: ");
    scanf("%d", &num);
    if (num <= 1)
        return 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

float opcaoE() {
    float base, expoente;
    printf("Introduza a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    return pow(base, expoente);
}

float opcaoF() {
    float angulo;
    char op;
    printf("Deseja calcular o seno (s) ou o cosseno (c)? ");
    scanf(" %c", &op);
    printf("Introduza o ângulo em graus: ");
    scanf("%f", &angulo);
    angulo = angulo * PI / 180.0;
    if (op == 's')
        return sin(angulo);
    else if (op == 'c')
        return cos(angulo);
    else {
        printf("Opção inválida\n");
        return 0;
    }
}

int opcaoG() {
    int num;
    printf("Introduza um número: ");
    scanf("%d", &num);
    return (num == 0) ? 1 : (int) log10(num) + 1;
}

float opcaoH() {
    float num;
    printf("Introduza um número: ");
    scanf("%f", &num);
    return sqrt(num);
}

void opcaoI() {
    float a, b, c, delta;
    printf("Introduza os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
        printf("Não existem raízes reais.\n");
    else if (delta == 0)
        printf("Raiz dupla: %.2f\n", -b / (2*a));
    else {
        printf("Raízes: %.2f e %.2f\n", (-b + sqrt(delta)) / (2*a), (-b - sqrt(delta)) / (2*a));
    }
}
