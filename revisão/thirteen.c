#include <stdio.h>

void ordemCrescente(int, int, int, int*);

int main(int argc, char const *argv[])
{
    int n1, n2, n3, *numerosOrdenados;
    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    printf("Digite o numero 2: ");
    scanf("%d", &n2);
    printf("Digite o numero 3: ");
    scanf("%d", &n3);
    ordemCrescente(n1, n2, n3, numerosOrdenados);
    for(int i = 0; i < 3; i++){
        printf("%d ", numerosOrdenados[i]);
    }
    printf("\n");
    return 0;
}
void ordemCrescente(int n1, int n2, int n3, int *numeros){
    numeros[0] = n1;
    numeros[1] = n2;
    numeros[2] = n3;
    int trocado, temp;
    do
    {
        trocado = 0;
        for (int i = 0; i < 3 -1; i++)
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
