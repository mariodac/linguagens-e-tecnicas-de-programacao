#include "stdio.h"
#include "stdlib.h"

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif

int media(int*, int*);
void imprimirCrescente(float*, int*);
void imprimirDecrescente(float*, int*);
int comparacao(const void*, const void*);

int main(){
    int *n_a, *v_a;
    n_a = malloc(sizeof(int)); //n_a = (int) malloc(sizeof(int)); //versões antigas do gcc
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &(*n_a));
    v_a = malloc(sizeof(int)*(*n_a));
    int *i = malloc(sizeof(int));
    for (*i = 0; *i < *n_a; (*i)++)
    {
        printf("Digite a nota %d: ", (*i)+1);
        scanf("%d", &v_a[*i]);
    }
    int *soma = malloc(sizeof(int));
    (*soma) = 0;
    for ((*i) = 0; (*i) < (*n_a); (*i)++)
        (*soma) += v_a[*i];
    free(soma);
    free(v_a);
    printf("Media = %.2f\n", (float)(*soma)/(float)(*n_a));
    limpar_tela();
    float *vetor = malloc(sizeof(float));
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &(*n_a));
    for((*i) = 0; (*i) < (*n_a); (*i)++){
        printf("Digite o elemento %d: ", (*i)+1);
        scanf("%f", &vetor[*i]);
    }
    qsort(vetor, (*n_a), sizeof(float), comparacao);
    imprimirCrescente(vetor, n_a);
    imprimirDecrescente(vetor, n_a);
    free(vetor);
    free(i);
    free(n_a);
    return 0;
}

int comparacao(const void *a, const void *b){
    return (*(int*)a) - (*(int*)b);
}

void imprimirCrescente(float *v, int *n){
    int *i = malloc(sizeof(int));
    for ((*i) = 0; (*i) < (*n); (*i)++) printf("%.2f ", v[*i]);
    printf("\n");
    free(i);
}

void imprimirDecrescente(float *v, int *n){
    int *i = malloc(sizeof(int));
    for ((*i) = (*n)-1; (*i) > -1; (*i)--) printf("%.2f ", v[*i]);
    printf("\n");
    free(i);
}

int media (int *v, int *tam){
    int *soma = malloc(sizeof(int));
    (*soma) = 0;
    int *i = malloc(sizeof(int));
    for ((*i) = 0; (*i) < (*tam); (*i)++)
        (*soma) += v[*i];
    free(i);
    return (float)(*soma)/(float)(*tam);
}