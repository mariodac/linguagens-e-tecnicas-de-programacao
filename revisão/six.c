#include <stdio.h>

void converteIdade(int idade){
    int meses = idade * 12;
    int dias = idade * 365;
    printf("Idade em meses: %d\n", meses);
    printf("Idade em dias: %d\n", dias);
}
int main(int argc, char const *argv[])
{
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    converteIdade(idade);
    return 0;
}
