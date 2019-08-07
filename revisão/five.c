#include <stdio.h>

void converteTempo(int *segundos, int *minutos, int *horas){
    int x, y;
    *horas = *segundos / 3600;
    x = *segundos % 3600;
    *minutos = x / 60;
    y = x % 60;
    *segundos = y;
}
int main(int argc, char const *argv[])
{
    int segundos, horas, minutos;
    printf("Digite o valor do segundo: ");
    scanf("%d", &segundos);
    converteTempo(&segundos, &minutos, &horas);
    printf("Tempo em HH:MM:SS: %d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
