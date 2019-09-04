#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int menu();
int N_elevado_Y(int, int);
int mdcEuclide(int, int);
int F(int);
int potencia(int, int);
int somaCrescInt(int*, int);
float somaCrescFloat(float*, int);
float menorElemento(float*, int);
float maiorElemento(float*, int);

int main(){

    int op;
    do{
        op = menu();
        switch (op)
        {
        case 0:
            system("clear");
            break;
        case 1:
            system("clear");
            printf("Em programação, a recursividade é um mecanismo útil e poderoso que permite a uma função chamar a si mesma direta ou indiretamente.\n  A idéia básica de um algoritmo recursivo consiste em diminuir sucessivamente o problema em um  problema  menor  ou  mais  simples,  até  que  o  tamanho  ou  a  simplicidade  do  problema  reduzido permita  resolvê-lo  de  forma  direta,  sem  recorrer  a  si  mesmo.  Quando  isso  ocorre,  diz-se  que  o algoritmo atingiu uma condição de parada, a qual deve estar presente em pelo menos um local dentro algoritmo. Sem esta condição o algoritmo não pára de chamar a si mesmo, até estourar a capacidade da pilha, o que geralmente causa efeitos colaterais e até mesmo o término indesejável do programa.\n");
            break;
        case 2:
            system("clear");
            int n, y;
            printf("Digite o valo de N e Y: ");
            scanf("%d %d", &n, &y);
            printf("%d elevado a %d = %d\n", n, y, N_elevado_Y(n, y));
            break;
        case 3:
            system("clear");
            int a, b;
            printf("Digite o valor de A e B: ");
            scanf("%d %d", &a, &b);
            printf("MDC(%d, %d) = %d\n", a, b, mdcEuclide(a, b));
            break;
        case 4: 
            system("clear");
            printf("F(3) = %d\n", F(3));
            printf("F(7) = %d\n", F(7));
            break;
        case 5:
            system("clear");
            printf("Digite o valor de x e y: ");
            scanf("%d %d", &a, &b);
            printf("Resultado = %d\n", potencia(a, b));
            break;
        case 6:
            system("clear");
            int t = 10, i = 0;
            float *vetorF;
            for(; i < t; i++){
                vetorF[i] = (float)i;
            }
            i = 0;
            printf(" = %f\n", somaCrescFloat(vetorF, i));
            break;
        case 7:
            system("clear");
            int tam = 10, j = 0;
            for(; j < tam; j++){
                vetorF[j] = (float)j;
            }
            for(j = 0; j < tam; j++) printf("%.2f ", vetorF[j]);
            printf("\n");
            i = 0;
            printf("Menor elemento: %.2f\n", menorElemento(vetorF, i));
            break;
        case 8:
            system("clear");
            t = 10;
            for(i = t; i > 0; i--){
                vetorF[i] = (float)i;
            }
            for(i = 0; i < t; i++) printf("%.2f ", vetorF[i]);
            printf("\n");
            i = 0;
            printf("Maior elemento: %.2f\n", maiorElemento(vetorF, i));
            break;
        default:
            system("clear");
            printf("Opção inválida!\n");
            break;
        }
    }while (op != 0);
    
    return 0;
}

int menu(){
    int op;
    printf("****Exercicio recursividade****\n");
    printf("1 - Conceito de recursividade\n");
    printf("2 - Calculo N Elevado a Y\n");
    printf("3 - Calcule o MDC pelo método de EUCLIDES\n");
    printf("4 - Valor de F(3) e F(7)\n");
    printf("5 - Calculo potencia mais eficiente\n");
    printf("6 - Soma dos elementos do vetor\n");
    printf("7 - Menor elemento do vetor\n");
    printf("8 - Maior elemento do vetor\n");
    printf("0 - para sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    return op;
    
}

int N_elevado_Y(int n, int y){
    if(y == 0)
        return 1;
    else
        return n * N_elevado_Y(n, y-1);
}

int mdcEuclide(int a, int b){
    if(b == 0)
        return a;
    else 
        return mdcEuclide(b, a % b);
}

int F(int n){
    if(n < 4)
        return 3 * n;
    else
        return 2 * F(n - 4) + 5;
}

int potencia(int x, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return potencia(x, n/2) * potencia(x, n/2);
    else
        return x * potencia(x, n-1);
}

int somaCrescInt(int *vetor, int n){
    if(n == 9){
        printf("%d", vetor[n]);
        return vetor[n];
    }else
    {
        printf("%d + ", vetor[n]);
        return vetor[n] + somaCrescInt(vetor, (n+1));
    }
    
}

float somaCrescFloat(float *vetor, int n){
    if(n == 9){
        printf("%.2f", vetor[n]);
        return vetor[n];
    }else
    {
        printf("%.2f + ", vetor[n]);
        return vetor[n] + somaCrescFloat(vetor, (n+1));
    }
    
}

float menorElemento(float *vetor, int n){
    float menor = vetor[n];
    if(n == 8)
        return vetor[n+1];
    else
    {
        if(vetor[n + 1] < menor){
            menor = vetor[n];
            return menorElemento(vetor, n+1);
        }
        else return menor;
    }
    
}

float maiorElemento(float *vetor, int n){
    float maior;
    if(n == 8)
        return vetor[n+1];
    else
    {
        maior = vetor[n];
        if(vetor[n + 1] > maior)
            return maiorElemento(vetor, n+1);
        else return vetor[n + 1];
    }
    
}