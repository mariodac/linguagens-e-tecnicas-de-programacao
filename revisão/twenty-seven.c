#include <stdio.h>
#include <stdlib.h>

enum{false, true};


int verificaJogo(char[3][3]);

int main(int argc, char const *argv[])
{
    int linha, coluna, linhas[3], colunas[3], jogadas[3][3];
    char jogo[3][3], escolha;
    int k = 0, j = 0;
    for (k = 0; k < 3; k++)
    {
        for(j = 0; j < 3; j++){
            jogo[k][j] = 'V';
        }
    }
    while (verificaJogo(jogo))
    {
        printf("Digite a linha e coluna: ");
        scanf("%d %d", &linha, &coluna);
        
        setbuf(stdin, NULL);
        printf("Digite X ou O: ");
        scanf("%c", &escolha);
        setbuf(stdin, NULL);
        switch (escolha)
        {
        case 'X':
            if(linha > 3 || coluna > 3) {
                printf("Não deve ser maior de 3!\n");
                break;
            }
            if(jogo[linha-1][coluna-1] == 'V')
                jogo[linha-1][coluna-1] = escolha;
            else
                printf("Já foi escolhida essa linha e  coluna!\n");
            break;
        case 'x':
            if(jogo[linha-1][coluna-1] == 'V')
                jogo[linha-1][coluna-1] = escolha;
                
            else
                printf("Já foi escolhida essa linha e  coluna!\n");
            break;
        case 'O':
            if(jogo[linha-1][coluna-1] == 'V')
                jogo[linha-1][coluna-1] = escolha;
                
            else
                printf("Já foi escolhida essa linha e  coluna!\n");
            break;
        case 'o':
            if(jogo[linha-1][coluna-1] == 'V')
                jogo[linha-1][coluna-1] = escolha;
            else
                printf("Já foi escolhida essa linha e  coluna!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }
    
    
    if(!verificaJogo(jogo)){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", jogo[i][j]);
            }
            printf("\n");
            
        }
    }
    
    
    
    return 0;
}

int verificaJogo(char matriz[3][3]){
    int verifica = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(matriz[i][j] == 'V'){
                verifica = true;
                break;
                // printf("V");
            } else {
                verifica = false;
                // printf("NOT V");
            }
        }
    }
    return verifica;
}
