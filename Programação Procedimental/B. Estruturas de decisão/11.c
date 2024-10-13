/*. Implemente um programa que converta um par de valores (horas, minutos) do 
formato 24 horas para o formato AM/PM. 
Exemplo: 13h07 -> 1h07 PM 
00h25 -> 12h25 AM 
12h21 -> 12h21 PM */

#include <stdio.h>

int main(void)
{
    int horas, minutos;
    
    printf("Introduza as horas e minutos que quer converter (formato HH:MM): ");
    scanf("%d:%d", &horas, &minutos);
    
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        printf("Entrada inválida. Por favor, insira horas entre 0-23 e minutos entre 0-59.\n");
        return 1;
    }
    
    if (horas == 0) {
        printf("Atualmente sao 12:%02d AM\n", minutos);
    }else if (horas < 12) {
        printf("Atualmente sao %d:%02d AM\n", horas, minutos);
    } else if (horas == 12) {
        printf("Atualmente sao %d:%02d PM\n", horas, minutos);
    } else {
        printf("Atualmente sao %d:%02d PM\n", horas - 12, minutos);
    }

    return 0;
}
