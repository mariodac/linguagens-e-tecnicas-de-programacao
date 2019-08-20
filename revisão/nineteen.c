#include <stdio.h>
#include <math.h>

void maiorMenor(int*, int, int*, int*);

int main(int argc, char const *argv[])
{
    int *numeros, i = 0, numero, tamanho = 5, maior = 0;
    int menor = (int)INFINITY;
    while (i < tamanho)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        numeros[i] = numero;
        i++;
    }
    maiorMenor(numeros, tamanho, &maior, &menor);
    printf("Maior: %d Menor: %d\n", maior, menor);
    return 0;
}

void maiorMenor(int *numeros, int tamanho, int *maior, int *menor){
    for (int i = 0; i < tamanho; i++)
    {
        if(numeros[i] > *maior){
            *maior = numeros[i];
        }
        if(numeros[i] < *menor){
            *menor = numeros[i];
        }
    }
        
}