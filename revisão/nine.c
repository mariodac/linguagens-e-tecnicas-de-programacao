#include <stdio.h>

int verificaValor(int valor){
    if(valor < 0)
        return 0;
    if(valor > 0)
        return 1;
}

int main(int argc, char const *argv[])
{
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    if(verificaValor(valor) == 1){
        printf("Valor positivo\n");
    }else
    {
        printf("Valor negativo\n");
    }
    
    return 0;
}
