#include <stdio.h>

void tabuada(int*, int*);

int main(){
    int n, *resultado;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    tabuada(&n, resultado);
    for (int i = 0; i < n; i++)
        printf("%d x %d = %d\n", i+1, n, resultado[i]);
    
    return 0;
}

void tabuada(int *n, int *res){
    for(int i = 0; i < *n; i++){
        res[i] = (i+1) * (*n);
    }
}