/*Implemente um programa que permita converter quilómetros em milhas. Se o 
número de quilómetros for superior a 5000 deve também visualizar “muito 
longe”. 1 milha = 1609 metros */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float km, milhas;

    printf("Introduza os km que pretende converter para milhas: ");
    scanf("%f", &km);

    milhas = km / 1.609;

    printf("%.2f km = %.2f milhas\n", km, milhas);

    return 0;
}
