#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif

int preencheVetor(int*, int);
void ordemCrescente(int*, int);
void imprimir(int*, int);
int comparacao(const void*, const void*);
int menu();
int vetorTamanhoIndeterminado(int*);
void vetorParesImpares(int*);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int op = -1;
    while (op != 0)
    {
        op = menu();
        switch (op)
        {
        case 0:
            break;
        case 1:{
            limpar_tela();
            int *v, n;
            printf("Imprima o tamanho do vetor: ");
            scanf("%d", &n);
            v = malloc(n * sizeof(int));
            preencheVetor(v, n);
            // ordemCrescente(v, n);
            qsort(v, n, sizeof(int), comparacao);
            imprimir(v, n);
            free(v);
            break;
        }

        case 2:{
            limpar_tela();
            int *v, t;
            v = malloc(sizeof(int));
            t = vetorTamanhoIndeterminado(v);
            qsort(v, t, sizeof(int), comparacao);
            imprimir(v, t);
            free(v);
            break;
        }

        case 3:{
            limpar_tela();
            int *v, t;
            v = malloc(sizeof(int));
            vetorParesImpares(v);
            free(v);
            break;
        }

        default:
            break;
        }
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}


void vetorParesImpares(int *v){
    int numero, i = 0, j = 1, par = 0, impar = 0;
    for(; i >= 0; i++){
        scanf("%d", &numero);
        if(numero < 0)
            break;
        if(numero % 2 == 0)
            par++;
        else impar++;
        v = realloc(v, j * sizeof(int));
        j++;
        v[i] = numero;
    }
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n", impar);
}

int vetorTamanhoIndeterminado(int *v){
    int numero, i = 0, j = 1;
    for(; i >= 0; i++){
        scanf("%d", &numero);
        if(numero < 0)
            break;
        v = realloc(v, j * sizeof(int));
        j++;
        v[i] = numero;
    }
    return j;
}

int menu(){
    int op;
    printf("****Alocação Dinâmica****\n1 - Preencher vetor com tamanho determinado e imprimir crescente e decrescente\n");
    printf("2 - Preencher vetor com tamanho indeterminado e imprimir crescente e decrescente\n");
    printf("3 - Ler dinamicamente vetor e informar quantidade de pares e impares\n");
    scanf("%d", &op);
    return op;
}

int comparacao(const void *a, const void *b){
    return (*(int*)a) - (*(int*)b);
}

void ordemCrescente(int *v, int n){
    int trocado, temp;
    do
    {
        trocado = 0;
        for (int i = 0; i < n -1; i++)
        {
            if (v[i] > v[i +1])
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                trocado = 1;
            }
            
        }
        
    } while (trocado == 1);
}

void imprimir(int *v, int n){
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
    for (int i = n-1; i > -1; i--) printf("%d ", v[i]);
    printf("\n");
}
int preencheVetor(int *v, int n){
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);
}





