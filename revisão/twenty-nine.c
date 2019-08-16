#include <stdio.h>
#include <math.h>

void progressaoGeometrica(int, int, int*);

int main(int argc, char const *argv[])
{
    int numero, razao, termos[10];
    printf("Digite o primeiro termo: ");
    scanf("%d", &numero);
    printf("Digite a razão: ");
    scanf("%d", &razao);
    progressaoGeometrica(numero, razao, termos);
    for(int i = 0; i < 10; i++)
        printf("%d ", termos[i]);
    return 0;
}

void progressaoGeometrica(int a1, int q, int *termos){
    for(int i = 0; i < 10; i++)
        termos[i] = (a1 * (pow(q, (i+1) - 1)));
}