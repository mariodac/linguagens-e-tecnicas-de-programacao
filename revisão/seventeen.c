#include <stdio.h>
#include <stdlib.h>

float media(int* numeros, int tamanho){
    float media = 0;
    for(int i = 0; i < tamanho; i++){
        media += (float)numeros[i]/(float)tamanho;
    }
    return media;
}

int main(int argc, char const *argv[])
{
    int tamanho;
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    int numeros[tamanho], numero;
    for(int i = 0; i < tamanho; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\n");
    printf("Média: %.2f\n", media(numeros, tamanho));
    return 0;
}
