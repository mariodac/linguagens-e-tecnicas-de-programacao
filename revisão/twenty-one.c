#include <stdio.h>

int divisores(int* numero);

int main(int argc, char const *argv[])
{
    int numerosdivisores, numero;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);
    numerosdivisores = divisores(&numero);
    printf("Numero de divisores: %d", numerosdivisores);
    
    printf("\n");
    
    return 0;
}

int divisores(int* numero){
    int div = 0;
    for (int i = *numero; i > 0; i--)
    {
        if(*numero%i == 0){
            div ++;
        }
    }
    return div;
    
}