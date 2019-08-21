#include <stdio.h>
enum{false, true};
int horario(int*, int*, int*, int*, int*, int*);

int main(int argc, char const *argv[])
{
    int hora1 = 0, minuto1 = 0, hora2 = 0, minuto2 = 0, hora3 = 0, minuto3 = 0;
    printf("Digite a hora e o minuto inicial: ");
    scanf("%d%*c%d", &hora1, &minuto1);
    printf("Digite a hora e o minuto final: ");
    scanf("%d%*c%d", &hora2, &minuto2);
    (horario(&hora1, &minuto1, &hora2, &minuto2, &hora3, &minuto3));
        printf("Duração do jogo: %d:%d\n", hora3, minuto3);
    return 0;
}

int horario(int *horaInicial, int *minutoInicial, int *horaFinal, int *minutoFinal, int *horaDuracao, int *minutoDuracao){
    int inicio, fim, duracao;
    inicio = (*horaInicial * 60) + *minutoInicial;
    fim = (*horaFinal * 60) + *minutoFinal;
    if(inicio > fim)
        fim += 24 * 60;
    *horaDuracao = (fim - inicio)/60;
    *minutoDuracao = (fim - inicio)%60;
    
    
}