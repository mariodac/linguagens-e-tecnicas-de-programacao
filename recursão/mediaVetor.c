#include "stdio.h"
#define MAX 10
float mediaVetor(int*, int, int, int);
float media(int*, int, int);
int main(){
    int tamanho = 10, vetor[tamanho], i = 0, soma = 0;
    for(; i < tamanho; i++){
        vetor[i] = i+1;
    }
    i = tamanho-1;
    printf("Media dos valores do vetor: %.2f\n", mediaVetor(vetor, i, tamanho, soma));
    printf("Média = %.2f\n", media(vetor, MAX-1, soma));
    return 0;
}

float mediaVetor(int *vetor, int n, int tamanho, int soma){
    if(n >= 0){
        soma += vetor[n];
        printf("vetor[%d]: %d\n", n, vetor[n]);
        return mediaVetor(vetor, n-1, tamanho, soma);
    }
    else{
        return (float)soma/(float)tamanho;
    }
}

float media(int *v, int i, int soma){
    if(i == 0){
        return (soma + v[i])/(float)MAX;
    }
    else {
        soma += v[i];
        return media(v, i-1, soma);
    }
}