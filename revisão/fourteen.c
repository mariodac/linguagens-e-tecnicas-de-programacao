#include <stdio.h>
void horario(int*, int*, int*, int*);

int main(int argc, char const *argv[])
{
    int hora1, minuto1, hora2, minuto2;
    printf("Digite a hora e o minuto inicial: ");
    scanf("%d %d", &hora1, &minuto1);
    printf("Digite a hora e o minuto final: ");
    scanf("%d %d", &hora2, &minuto2);
    horario(&hora1, &minuto1, &hora2, &minuto2);
    return 0;
}

void horario(int *horaInicial, int *minutoInicial, int *horaFinal, int *minutoFinal){
    int horaAcumulada = (*horaInicial) + (*minutoInicial/60) + (*horaFinal) + (*minutoFinal/60);
    if(horaAcumulada > 24){
        printf("O jogo não pode ultrapassar 24 horas\n");
    }
}