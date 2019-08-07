#include <stdio.h>

struct Pessoa{
    int quantidadeDeFilhos;
    float salario;
};

void mediaHabitantes(struct Pessoa *habitantes, float *mediaS, float *mediaF, float *maiorSalario, float *percentual, int tamanho){
    int quantidade = 0;
    for(int i=0; i<tamanho; i++){
        *mediaF += habitantes[i].quantidadeDeFilhos;
        *mediaS += habitantes[i].salario;
        *maiorSalario = habitantes[i].salario;
        if(*maiorSalario >= habitantes[i].salario){
            *maiorSalario = habitantes[i].salario;
        }
        if(habitantes[i].salario <= 350){
            quantidade++;
        }
    }
    // *mediaF = *mediaF/tamanho;
    // *mediaS = *mediaS/tamanho;
    *percentual = (float)quantidade*100.f/(float)tamanho;
}
int main(int argc, char const *argv[])
{
    int tamanho;
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &tamanho);
    struct Pessoa habitantes[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("Digite o salário: ");
        scanf("%f", &habitantes[i].salario);
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &habitantes[i].quantidadeDeFilhos);
    }
    float mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0, percentual = 0;
    mediaHabitantes(habitantes, &mediaSalario, &mediaFilhos, &maiorSalario, &percentual, tamanho);
    printf("Media filhos: %.2f\n", mediaFilhos);
    printf("Media salário: %.2f\n", mediaSalario);
    printf("Maior salário: %.2f\n", maiorSalario);
    printf("Percentual de salário até 350: %.2f\n", percentual);
    return 0;
}
