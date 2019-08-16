#include <stdio.h>
#include <math.h>

int menorNumero(int*);

int main(int argc, char const *argv[])
{
    int numeros[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("Menor numero: %d\n", menorNumero(numeros));
    return 0;
}

int menorNumero(int *numeros){
    double menor = INFINITY;
    for (int i = 0; i < 10; i++)
    {
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    return menor;
    
}
