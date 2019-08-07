#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *numeros, i = 0;
    char leitura[256];
    while(leitura != 'S'){
        scanf("%s", &leitura);
        numeros[i] = atoi(leitura);
    }
    return 0;
}
