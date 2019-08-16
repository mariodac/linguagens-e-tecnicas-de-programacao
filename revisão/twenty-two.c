#include <stdio.h>

int somatorio(int*);

int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &numero);
    printf("Somatório: %d\n", somatorio(&numero));
    return 0;
}

int somatorio(int* numero){
    int soma = 0;
    for (int i = *numero; i > 0; i--)
    {
        soma += i;
    }
    return soma;
}
