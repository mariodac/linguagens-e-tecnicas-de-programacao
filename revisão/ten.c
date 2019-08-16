#include <stdio.h>

enum{false, true};
int verificaValor(int);

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(verificaValor(valor))
        printf("Valor par\n");
    else printf("Valor ímpar\n");
    return 0;
}

int verificaValor(int valor){
    if(valor % 2 == 0) return true;
    else return false;
}