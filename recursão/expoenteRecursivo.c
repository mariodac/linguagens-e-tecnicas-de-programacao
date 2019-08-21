#include "stdio.h"
int expoente(int, int);
int main(){
    int k = 5, n = 5;
    printf("Expoente de k por n: %d\n", expoente(k, n));
    return 0;
}

int expoente(int k, int n){
    if(n == 0)
        return 1;
    else
        return k * expoente(k, n-1);
}