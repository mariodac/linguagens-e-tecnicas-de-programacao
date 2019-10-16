#include <stdlib.h>
#include <stdio.h>

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() fpurge(stdin)
#define limpar_tela() system("clear")
#endif

struct aluno
{
    char nome[50];
    int numeroMatricula;
    float nota1;
    float nota2;
    float nota3;
};

typedef struct aluno Aluno;

int main(){
    Aluno *alunos = malloc(sizeof(Aluno)*5);
    for (int i = 0; i < 5; i++)
    {
        printf("Informações do aluno %d\n", i);
        printf("Informe o nome: ");
        getchar();
        fgets(alunos[i].nome, 50, stdin);
        printf("Informe o numero da matricula: ");
        scanf("%d", &alunos[i].numeroMatricula);
        printf("Informe a nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Informe a nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Informe a nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }
    float media = 0;
    float soma = 0;
    float *mediaAlunos = malloc(sizeof(float)*5);
    for (int i = 0; i < 5; i++)
    {
        mediaAlunos[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
        media += (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/(5*3);
        // media += mediaAlunos[i]/5;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Media aluno %d: %.2f\n", i, mediaAlunos[i]);
    }
    // media = soma/5;
    printf("Media turma: %.2f\n", media);
    
    return 0;
}
