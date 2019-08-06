#include <stdio.h>

int verificaPrimo(int num){
    int div = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            div++;
        }
    }
    if(div == 2){
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int primo = verificaPrimo(num);
    if(primo == 1){
        printf("Numero %d primo!\n", num);
    }
    else printf("Numero %d NÃO primo!\n", num);
    return 0;
}
