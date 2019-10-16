#include <stdio.h>
#include <stdlib.h>
#define LINHA 5
#define COLUNA 3
int main()
{
    int **p; //reservando um espaço de memória
    int i, j, c = 0;
    p = (int**)malloc(sizeof(int*) * LINHA); //alocando  um espaço onde a primeira  dimensão aponta para  outra dimensão
    if(p!=NULL)
        printf("Alocado com sucesso\n");
    else{
        printf("Não foi possível alocar o recurso desejado\n");
        exit(-1);
    }
    for (i = 0; i < LINHA; i++)
        p[i] = (int*)malloc(sizeof(int) * COLUNA);
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            p[i][j] = c;
            c += 2;
        }
    }

    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
    for(int i = COLUNA; i >= 0; i--)
        free(p[i]);
    free(p);
}