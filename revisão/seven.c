#include <stdio.h>

enum{false, true};

int valorPerfeito(int);

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(valorPerfeito(valor))
        printf("Numero É perfeito!\n");
    else
        printf("Numero NÃO É perfeito!\n");
    return 0;
}

int valorPerfeito(int valor){
    int div = 0;
    for(int i = 1; i < valor; i++){
        if(valor % i == 0){
            div += i;
        }
    }
    if(div == valor){
        return true;
    }
    else return false;

}
