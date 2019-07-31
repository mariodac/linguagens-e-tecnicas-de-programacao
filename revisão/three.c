#include <stdio.h>

int verificaPrimo(int num){
    int div = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            div++;
        }
    }
    if(div == 2){
        printf("Numero %d primo!\n", num);
    }
    else {
        printf("%d", div);
        printf("Numero %d NÃO primo!\n", num);
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    verificaPrimo(num);
    return 0;
}
