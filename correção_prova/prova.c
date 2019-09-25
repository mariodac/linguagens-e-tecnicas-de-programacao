#include "stdio.h"

int mdc(int x, int y){
    if(x >= y && (x % y) == 0)
        return y;
    if(x < y)
        return mdc(y, x);
    else
        return mdc(y, x % y);
}

int menorElemento(int *v, int menor, int contador){
    if(contador < 0)
        return menor;
    else{
        if(v[contador] < menor) menor = v[contador];
        return menorElemento(v, menor, contador--);
    }
}

int maiorElemento(int *v, int maior, int contador){
    if(contador < 0)
        return maior;
    else{
        if(v[contador] > maior) maior = v[contador];
        return maiorElemento(v, maior, contador--);
    }
}

int soma(int *v, int i){
    if( i == 0)
        return v[0];
    else
        return v[i] + soma(v, i--);
}

int a(int m, int n){
    if(m == 0)
        return n + 1;
    if(m > 0 && n == 0)
        return a(m - 1, 1);
    if(m > 0 && n > 0 )
        return a(m-1, a(m, n - 1));
}

void imprimir(int *v, int i){
    if(i < 0) return ;
    else{
        printf(" %d \n", v[i]);
        imprimir(v, i--);
    }
}