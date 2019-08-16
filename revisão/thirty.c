#include <stdio.h>
#include <stdlib.h>

int posicaoVetor(int);

int main(int argc, char const *argv[])
{
    int valor, *vetor;
    scanf("%d", &valor);
    printf("Posição: %d\n", posicaoVetor(valor));
    printf("\n");
    return 0;
}

int posicaoVetor(int valor){
    int n = 0, vetor[10];
    for (int i = 0; i < 10; i++)
        vetor[i] = rand() % 10;
    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] == valor) return i;
    }
    
}
