#include <stdio.h>

char* verificaValor(int valor){
    if(valor % 2 == 0){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(verificaValor(valor) == 1)
        printf("Valor par\n");
    else printf("Valor ímpar\n");
    return 0;
}
