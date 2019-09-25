#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif

int menu();
int N_elevado_Y(int, int);
int mdcEuclide(int, int);
int F(int);
int potencia(int, int);
int somaCrescInt(int*, int);
float somaCrescFloat(float*, int);
float menorElemento(float*, int, double);
float maiorElemento(float*, int);
int letraRepetida(char*, char, int);
void imprimeReverso(char*);
void hanoi(int, int, int, int, int);

int main(){

    int op;
    do{
        op = menu();
        switch (op)
        {
        case 0:
            limpar_tela();
            break;
        case 1:
            limpar_tela();
            printf("Em programação, a recursividade é um mecanismo útil e poderoso que permite a uma função chamar a si mesma direta ou indiretamente.\n  A idéia básica de um algoritmo recursivo consiste em diminuir sucessivamente o problema em um  problema  menor  ou  mais  simples,  até  que  o  tamanho  ou  a  simplicidade  do  problema  reduzido permita  resolvê-lo  de  forma  direta,  sem  recorrer  a  si  mesmo.  Quando  isso  ocorre,  diz-se  que  o algoritmo atingiu uma condição de parada, a qual deve estar presente em pelo menos um local dentro algoritmo. Sem esta condição o algoritmo não pára de chamar a si mesmo, até estourar a capacidade da pilha, o que geralmente causa efeitos colaterais e até mesmo o término indesejável do programa.\n");
            break;
        case 2:
            limpar_tela();
            int n, y;
            printf("Digite o valo de N e Y: ");
            scanf("%d %d", &n, &y);
            printf("%d elevado a %d = %d\n", n, y, N_elevado_Y(n, y));
            break;
        case 3:
            limpar_tela();
            int a, b;
            printf("Digite o valor de A e B: ");
            scanf("%d %d", &a, &b);
            printf("MDC(%d, %d) = %d\n", a, b, mdcEuclide(a, b));
            break;
        case 4: 
            limpar_tela();
            printf("F(3) = %d\n", F(3));
            printf("F(7) = %d\n", F(7));
            break;
        case 5:
            limpar_tela();
            printf("Digite o valor de x e y: ");
            scanf("%d %d", &a, &b);
            printf("Resultado = %d\n", potencia(a, b));
            break;
        case 6:
            limpar_tela();
            int t = 10, i = 0;
            float *vetorF;
            for(; i < t; i++){
                vetorF[i] = (float)i;
            }
            i = 0;
            printf(" = %f\n", somaCrescFloat(vetorF, i));
            break;
        case 7:
            limpar_tela();
            int tam = 10, j = 0, cont = 10;
            for(i = 0; i < tam; i++){
                vetorF[i] = (float)cont;
                cont--;
            }
            for(j = 0; j < tam; j++) printf("%.2f ", vetorF[j]);
            printf("\n");
            i = (int)INFINITY;
            printf("Menor elemento: %.2f\n%.2f", menorElemento(vetorF, tam - 1, i), vetorF[0]);
            break;
        case 8:
            limpar_tela();
            t = 10;
            cont = 10;
            for(i = 0; i < t; i++){
                vetorF[i] = (float)cont;
                cont--;
            }
            for(i = 0; i < t; i++) printf("%.2f ", vetorF[i]);
            printf("\n");
            printf("Maior elemento: %.2f\n", maiorElemento(vetorF, t));
            break;
        case 9:
            limpar_tela();
            char *vet = "abbcccdddd", letra;
            getchar();
            printf("Digite uma letra: ");
            scanf("%c", &letra);
            int repetida = 0;
            printf("A letra %c se repete %d vezes\n", letra, letraRepetida(vet, letra, 0));
            break;
        case 10:
            limpar_tela();
            char palavra[50];
            int c = 0;
            getchar();
            // scanf("%s", vet);
            gets(palavra);
            imprimeReverso(palavra);
            printf("\n");
            break;
        case 11:
            limpar_tela();
            hanoi(5,4,3,2,1);
            break;
        default:
            limpar_tela();
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
    printf("9 - Quantidade de vezes que uma letra se repete\n");
    printf("10 - String reversa\n");
    printf("11 - Torre de Hanoi\n");
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

float menorElemento(float *vetor, int n, double m){
    if(n < 0)
        return m;
    if(vetor[n] < m)
        m = vetor[n];
    return menorElemento(vetor, n - 1, m);
}

float maiorElemento(float *vetor, int n){
    float maior;
    if(n == 1)
        return vetor[0];
    else
    {
        maior = maiorElemento(vetor, n -1);
        if(maior >vetor[n-1])
            return maior;
        else return vetor[n - 1];
    }
    
}

int letraRepetida(char *vetor, char letra,  int tamanho){
    if(vetor[tamanho] == '\0')
        return 0;
    else
    {
        if(vetor[tamanho] == letra){
            return letraRepetida(vetor, letra, tamanho + 1)+1;
        }
        else
            letraRepetida(vetor, letra, tamanho + 1);
    }
    
}

void imprimeReverso(char *vet){
    if(*vet){
        imprimeReverso(vet+1);
        printf("%c", *vet);
    }
}

void hanoi(int QTD_DISCOS, int origem, int destino, int temp, int rank)
{

  if (QTD_DISCOS > 0)
  {
    hanoi(QTD_DISCOS-1, origem, temp, destino, rank);
    printf("%4d ) %c --> %c\n", ++rank, '@' + origem, '@' + destino);
    hanoi(QTD_DISCOS-1, temp, destino, origem, rank);
  }
}

