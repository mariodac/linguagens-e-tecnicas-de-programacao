#include "stdio.h"
#include "stdlib.h"
#define N 3

int matrizDiagonal(int [][N], int, int);
void imprimirMatriz(int [][N], int, int);

int main(){
    int matriz[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = i;//rand() % 100;
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
    printf("%d\n", matrizDiagonal(matriz, 0, 0));
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
            return imprimirMatriz(matriz, linha + 1, (coluna - N));
        }
    }
}
int matrizDiagonal(int matriz[][N], int linha, int coluna){
    if(linha == N-1)
        return matriz[N-1][N-1];
    else{
        return matriz[linha][coluna] + matrizDiagonal(matriz, linha + 1, coluna + 1);
    }
}

int imprimeLinha(int matriz[][N], int linha, int coluna, int linhaEscolhida){

}