#include <stdio.h>

int fatorial(int);

int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite um numero inteiro : ");
    scanf("%d", &numero);
    printf("%d\n", fatorial(numero));
    return 0;
}

int fatorial(int numero){
    if(numero <= 1)
        return numero;
    else{
        return numero * fatorial(numero - 1);
    }
}