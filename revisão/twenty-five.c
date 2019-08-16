#include <stdio.h>

int maiorNumero(int*);

int main(int argc, char const *argv[])
{
    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("Maior numero: %d\n", maiorNumero(numeros));
    return 0;
}

int maiorNumero(int *numeros){
    int maior = 0;
    for (int i = 0; i < 10; i++)
    {
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    return maior;
    
}
