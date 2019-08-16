#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int linha, coluna, linhas[3], colunas[3], jogadas[3][3];
    char jogo[3][3];
    int k = 0, j = 0;
    for (k = 0; k < 3; k++)
    {
        for(j = 0; j < 3; j++){
            jogo[k][j] = 'V';
        }
    }
    
    for (int i = 0; i < 9; i++)
    {
        printf("Digite a linha e coluna: ");
        scanf("%d %d", &linha, &coluna);
        for (k = 0; k < 3; k++){
            for(j = 0; j < 3; j++){
                if(jogo[k][j] == 'V'){
                    if(rand() % 10 < 5){
                        jogo[linha - 1][coluna - 1] = 'X';
                        break;
                    }
                    else {
                        jogo[linha - 1][coluna - 1] = 'O';
                        break;
                    }
                }
                else{
                    printf("Linha e coluna já preenchida!!\n");
                    printf("Digite a linha e coluna: ");
                    scanf("%d %d", &linha, &coluna);
                }
            
            }
        }
        
        
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
