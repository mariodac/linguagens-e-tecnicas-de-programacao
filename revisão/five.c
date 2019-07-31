#include <stdio.h>

void converteTempo(int segundos){
    int horas = segundos / 3600;
    int minutos = segundos / 60;
    printf("Tempo em Horas: %d\n", horas);
    printf("Tempo em minutos: %d\n", minutos);
    printf("Tempo em segundos: %d\n", segundos);
}
int main(int argc, char const *argv[])
{
    int tempo;
    printf("Digite o valor do tempo: ");
    scanf("%d", &tempo);
    converteTempo(tempo);
    return 0;
}
