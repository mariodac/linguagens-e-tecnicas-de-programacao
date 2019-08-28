#include "stdio.h"
#include "stdlib.h"
#define N 3

int somaDiagonalPrincipal(int [][N], int, int);
void imprimirMatriz(int [][N], int, int);
void imprimeLinha(int [][N], int, int);
void imprimeColuna(int [][N], int, int);
int somaDiagonalSecundaria(int [][N], int, int);

int main(){
    int matriz[N][N], linha, coluna, cont;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // scanf("%d", &matriz[i][j]);
            matriz[i][j] = /* cont += 2; */rand() % 10;
        }
        
    }

    /* for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } */
    imprimirMatriz(matriz, 0, 0);
    printf("\n");
    printf("Soma diagonal principal: %d\n", somaDiagonalPrincipal(matriz, 0, 0));
    printf("Soma diagonal secundaria: %d\n", somaDiagonalSecundaria(matriz, 0, N-1));
    printf("Digite a linha especifica: ");
    scanf("%d", &linha);
    printf("Digite a coluna especifica: ");
    scanf("%d", &coluna);
    if(linha > N && coluna > N) printf("Não deve ultrapassar o valor %d\n", N);
    else{
        printf("Linha %d:\n", linha);
        imprimeLinha(matriz, linha - 1, 0);
        printf("Coluna %d:\n", coluna);
        imprimeColuna(matriz, 0, coluna - 1);
    }
    return 0;
}

void imprimirMatriz(int matriz[][N], int linha, int coluna){
    if(linha == N-1 && coluna == N-1){
        printf("%d ", matriz[linha][coluna]);
        return;
    }
    else{
        if(coluna < N){
            printf("%d ", matriz[linha][coluna]);
            return imprimirMatriz(matriz, linha, coluna + 1);
        }
        else{
            printf("\n");
            printf("%d ", matriz[linha][coluna]);
            return imprimirMatriz(matriz, linha + 1, (coluna - N) + 1);
        }
    }
}
int somaDiagonalPrincipal(int matriz[][N], int linha, int coluna){
    if(linha == N-1)
        return matriz[N-1][N-1];
    else{
        return matriz[linha][coluna] + somaDiagonalPrincipal(matriz, linha + 1, coluna + 1);
    }
}

void imprimeLinha(int matriz[][N], int linha, int coluna){
    if(coluna == N-1){
        printf("%d\n", matriz[linha][N-1]);
        return ;
    }
    else{
        printf("%d ", matriz[linha][coluna]);
        return imprimeLinha(matriz, linha, coluna + 1);
    }

}

void imprimeColuna(int matriz[][N], int linha, int coluna){
    if(linha == N-1){
        printf("%d\n", matriz[N-1][coluna]);
        return;
    }
    else{
        printf("%d ", matriz[linha][coluna]);
        return imprimeColuna(matriz, linha + 1, coluna);
    }
}

int somaDiagonalSecundaria(int matriz[][N], int linha, int coluna){
    if(coluna == 0)
        return matriz[linha][coluna];
    else
        return matriz[linha][coluna] + somaDiagonalSecundaria(matriz, linha + 1, coluna - 1);
}