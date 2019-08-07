#include <stdio.h>

void bubbleSort(int *numeros, int tamanho){
    int trocado, temp;
    do
    {
        trocado = 0;
        for (int i = 0; i < tamanho -1; i++)
        {
            if (numeros[i] > numeros[i +1])
            {
                temp = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = temp;
                trocado = 1;
            }
            
        }
        
    } while (trocado == 1);
    
}

int main(int argc, char const *argv[])
{
    int *numeros, i = 0, numero, tamanho = 10;
    while (i < tamanho)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        numeros[i] = numero;
        i++;
    }
    bubbleSort(numeros, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
