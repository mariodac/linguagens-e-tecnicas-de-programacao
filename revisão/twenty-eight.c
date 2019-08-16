#include <stdio.h>

void progressaoAritmetica(int, int, int*);

int main(int argc, char const *argv[])
{
    int numero, progressaoA[10], razao = -2;
    printf("Digite o primeiro termo: ");
    scanf("%d", &numero);
    printf("Digite a razão: ");
    scanf("%d", &razao);
    progressaoAritmetica(numero, razao, progressaoA);
    for (int i = 0; i < 10; i++)
        printf("%d ", progressaoA[i]);
    printf("\n");
    
    return 0;
}

void progressaoAritmetica(int numero, int razao, int* vetor){
    for (int i = 0; i < 10; i++)
        vetor[i] = (numero + ((i+1) - 1 ) * razao);
    
}
