#include "stdio.h"
int fatorialDuplo(int);
int main(){
    int n = 11;
    printf("Fatorial duplo de %d = %d\n", n ,fatorialDuplo(n));
    return 0;
}

int fatorialDuplo(int n){
    if(n == 1)
        return n;
    else{
        if(n % 2 != 0)
            return n * fatorialDuplo(n-1);
        else
            return fatorialDuplo(n-1);
    }
}