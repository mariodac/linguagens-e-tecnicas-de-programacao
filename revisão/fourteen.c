#include <stdio.h>

void horario(int horaInicial, int minutoInicial, int horaFinal, int minutoFinal){
    int horaTotal = horaInicial + horaFinal;
    int minutoTotal = minutoInicial + minutoInicial;
    int minutoHora = minutoTotal/60;
}
int main(int argc, char const *argv[])
{
    int hora1, minuto1, hora2, minuto2;
    printf("Digite o hora inicial: ");
    scanf("%d", &hora1);
    printf("Digite o minuto inicial: ");
    scanf("%d", &minuto1);
    printf("Digite o hora final: ");
    scanf("%d", &hora2);
    printf("Digite o minuto final: ");
    scanf("%d", &minuto2);
    return 0;
}
