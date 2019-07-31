#include <stdio.h>
#define true "Verdadeiro"
#define false "Falso"

char* verificaValor(int valor){
    if(valor % 2 == 0){
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Resultado: %s\n", verificaValor(valor));
    return 0;
}
