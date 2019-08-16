#include <stdio.h>

enum{false, true};
int verificaPrimo(int);

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(verificaPrimo(num)){
        printf("Numero %d primo!\n", num);
    }
    else printf("Numero %d NÃO primo!\n", num);
    return 0;
}

int verificaPrimo(int num){
    int div = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            div++;
        }
    }
    if(div == 2){
        return true;
    }
    else {
        return false;
    }
}