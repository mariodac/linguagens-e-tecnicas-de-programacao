#include <stdio.h>

int valorPerfeito(int valor){
    int div = 0;
    for(int i = 1; i < valor; i++){
        if(valor % i == 0){
            div += i;
        }
    }
    if(div == valor){
        return 1;
    }
    else return 0;

}

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(valorPerfeito(valor) == 1)
        printf("Numero É perfeito!\n");
    else
        printf("Numero NÃO É perfeito!\n");
    return 0;
}
