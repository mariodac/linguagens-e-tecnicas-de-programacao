#include <stdio.h>

int main(){
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    tabuada(&n);
    return 0;
}

void tabuada(int *n){
    for(int i = n; i <= 1; i--){
        *n = *n * i;
        printf("%d", *n);
    }
}