#include <stdio.h>

char* notaConceito(float media){
    char *conceito;
    if(media > 0 && media < 5)
        conceito = "D";
    if(media >= 5 && media <= 6.9)
        conceito = "C";
    if(media >= 7 && media <= 8.9)
        conceito = "B";
    if(media >= 9 && media <= 10)
        conceito = "A";
    if(media > 10)
        conceito = "Nota fora da escala!";
    return conceito;
}

int main(int argc, char const *argv[])
{
    float media;
    printf("Digite o valor da média: ");
    scanf("%f", &media);
    printf("Conceito: %s\n", notaConceito(media));
    return 0;
}
