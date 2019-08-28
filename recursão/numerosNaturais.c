#include "stdio.h"
void numerosNaturaisCresc(int, int);
void numerosNaturaisDesc(int);
int main(){
    int n, i = 0;
    printf("Informe um numero natural e positivo: ");
    scanf("%d", &n);
    printf("Numeros de 0 até N:\n");
    numerosNaturaisCresc(n, i);
    printf("\n");
    printf("Numero de N até 0:\n");
    numerosNaturaisDesc(n);
    printf("\n");
    return 0;
}

void numerosNaturaisCresc(int n, int i){
    if(i == n){
        printf("%d ", i);
        return;
    }
    else{
        printf("%d ", i);
        return numerosNaturaisCresc(n, (i+1));
    }
}

void numerosNaturaisDesc(int n){
    if(n == 0){
        printf("%d ", n);
        return;
    }
    else{
        printf("%d ", n);
        return numerosNaturaisDesc(n-1);
    }
}