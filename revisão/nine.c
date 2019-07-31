#include <stdio.h>
#define true "Verdadeiro"
#define false "Falso"

char* verificaValor(int valor){
    if(valor < 0)
        return false;
    if(valor > 0)
        return true;
}

int main(int argc, char const *argv[])
{
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    printf("Resultado: %s\n", verificaValor(valor));
    return 0;
}
