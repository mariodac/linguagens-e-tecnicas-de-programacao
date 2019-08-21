#include "stdio.h"

int somaDesc(int*, int);
int somaCresc(int*, int);
int main(){
    int n = 10, vetor[n], i = 0;
    for(; i < n; i++){
        vetor[i] = i;
    }
    i = 0;
    printf("Resultado da soma descrescente = %d\n", somaDesc(vetor, (n-1)));
    printf("Resultado da soma crescente = %d\n", somaCresc(vetor, i));
    return 0;
}

int somaDesc(int *vetor, int n){
    if(n == 0){
        printf("Parada\n");
        return vetor[0];
    }else
    {
        printf("%d + %d\n", vetor[n], vetor[n-1]);
        return vetor[n] + somaDesc(vetor, (n-1));
    }
    
}

int somaCresc(int *vetor, int n){
    if(n == 9){
        printf("Parada\n");
        return vetor[n];
    }else
    {
        printf("%d + %d\n", vetor[n], vetor[n+1]);
        return vetor[n] + somaCresc(vetor, (n+1));
    }
    
}