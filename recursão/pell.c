#include "stdio.h"

int pell(int);

int main(){
    int n = 5;
    printf("Sequencia pell: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", pell(i));
    printf("\n%dº termo pell: %d\n", n, pell(n));
}

int pell(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return (2*pell(n - 1)) + pell(n -2);
}
