#include <stdio.h>

int main(int argc, char const *argv[])
{
    int linha, coluna;
    char jogo[3][3];
    printf("Digite a linha e coluna: ");
    scanf("%d %d", &linha, &coluna);
    
    for (int i = 0; i < 8; i++)
    {
            printf("Digite a linha e coluna: ");
            scanf("%d %d", &linha, &coluna);
            jogo[linha - 1][coluna - 1] = 'X';
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", jogo[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
