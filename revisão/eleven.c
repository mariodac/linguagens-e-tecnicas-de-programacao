#include <stdio.h>

void notaConceito(float media, char *conceito){
    if(media > 0 && media < 5)
        *conceito = 'D';
    if(media >= 5 && media <= 6.9)
        *conceito = 'C';
    if(media >= 7 && media <= 8.9)
        *conceito = 'B';
    if(media >= 9 && media <= 10)
        *conceito = 'A';
}

int main(int argc, char const *argv[])
{
    float media;
    char conceito;
    printf("Digite o valor da média: ");
    scanf("%f", &media);
    notaConceito(media, &conceito);
    printf("Conceito: %c\n", conceito);
    return 0;
}
