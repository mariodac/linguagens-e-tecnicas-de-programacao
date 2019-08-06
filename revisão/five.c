#include <stdio.h>

void converteTempo(int *segundos, int *minutos, int *horas){
    *horas = *segundos / 3600;
    *minutos = *segundos / 60;
}
int main(int argc, char const *argv[])
{
    int segundos, horas, minutos;
    printf("Digite o valor do segundo: ");
    scanf("%d", &segundos);
    converteTempo(&segundos, &minutos, &horas);
    printf("Tempo em Horas: %d\n", horas);
    printf("Tempo em minutos: %d\n", minutos);
    printf("Tempo em segundos: %d\n", segundos);
    return 0;
}
