#include <stdio.h>

enum{false, true};

int verificaValor(int);

int main(int argc, char const *argv[])
{
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    if(verificaValor(valor)){
        printf("Valor positivo\n");
    }else
    {
        printf("Valor negativo\n");
    }
    
    return 0;
}

int verificaValor(int valor){
    if(valor < 0)
        return 0;
    if(valor > 0)
        return 1;
}