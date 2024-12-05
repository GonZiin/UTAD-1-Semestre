#include <stdio.h>
#include <math.h>

typedef struct _PONTO
{
    float x,y;
}PONTO;


int main(void)
{
    float d;
    PONTO a,b ;

    printf("Abcissa do ponto A: ");
    scanf("%f", &a.x);
    printf("Ordenanda do ponto A: ");
    scanf("%f", &a.y);

    printf("Absicca do ponto B: ");
    scanf("%f", &b.x);
    printf("Ordenada do ponto B: ");
    scanf("%f", &b.y);

    d = sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
    printf("A distancia e %.2f\n", d);

    return 0;
} 