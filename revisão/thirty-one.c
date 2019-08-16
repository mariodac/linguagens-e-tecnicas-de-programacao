#include <stdio.h>
#include <string.h>

enum{false, true};
int palindromo(char*, int);

int main(int argc, char const *argv[])
{
    char str[255];
    scanf("%s", str);
    int tamanho = strlen(str);
    if(palindromo(str, tamanho)) printf("Palindromo\n");
    return 0;
}

int palindromo(char *numero, int tamanho){
    int iguais = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if(numero[i]==numero[tamanho-i-1]){
            iguais++;
        }
    }
    if(iguais == tamanho)
        return true;
    else return false;
}
