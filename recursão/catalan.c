#include "stdio.h"

int catalan(int);

int main(){
    int n = 5;
    printf("Sequencia catalan: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", catalan(i));
    printf("\n%dº termo catalan: %d\n", n,  catalan(n));
}

int catalan(int n){
    if(n == 0) return 1;
    else ((2 * (2 * n - 1))/(n+1)) * catalan(n - 1);
}