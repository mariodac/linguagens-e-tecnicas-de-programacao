#include <stdio.h>

int converteIdade(int, int, int);

int main(int argc, char const *argv[])
{
    int idade, anos, meses, dias;
    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);
    idade = converteIdade(anos, meses, dias);
    printf("Idade em dias: %d\n", idade);
    return 0;
}

int converteIdade(int anos, int meses, int dias){
    return (meses * 30.417) + (anos * 365) + dias;
}