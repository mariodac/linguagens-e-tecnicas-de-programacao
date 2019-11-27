#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>

#define COLUNAS 5

enum{false, true};

struct aluno
{
    char nome[45];
    float nota1;
    float nota2;
    float nota3;
};
typedef struct aluno Aluno;

int menu();
Aluno* criarAluno();
Aluno* criarAlunos(int);
Aluno* acrescentaAluno(int, Aluno*);
void preencheAluno(Aluno*);
void imprimeAluno(Aluno*);
void adicionaAluno(Aluno*, Aluno*, int*);
int** criarMatriz(int, int);
void preencheMatriz(int**, int, int);
void imprimeMatriz(int**, int, int);

int main(){
    int op, indice = 0, **matriz = NULL, linha, coluna;;
    Aluno *aluno = NULL;
    Aluno *alunos = NULL;
    do
    {
        op = menu();
        switch (op)
        {
        case 0:
            break;
        case 1:{
            int escolha;
            aluno = criarAluno();
            system("clear");
            preencheAluno(aluno);
            system("clear");
            printf("\t##Revise as informações##\n");
            imprimeAluno(aluno);
            printf("Deseja adicionar? ");
            scanf("%d", &escolha);
            if(escolha == true){
                if(alunos == NULL)
                    alunos = criarAlunos(1);
                else
                    alunos = acrescentaAluno(indice+1, alunos);
                adicionaAluno(aluno, alunos, &indice);
            }
            free(aluno);
            break;
        }
        case 2:{
            int quantidade;
            printf("Digite a quantidade a ser cadastrada: ");
            scanf("%d", &quantidade);
            aluno = criarAluno();
            alunos = acrescentaAluno(indice + quantidade, alunos);
            for (int i = indice+1; i < quantidade+(indice+1); i++)
            {
                printf("\tALUNO #%d\n", i+1);
                preencheAluno(aluno);
                adicionaAluno(aluno, alunos, i);
            }
            free(aluno);
            break;
        }
        case 3:
            system("clear");
            for (int i = 0; i < indice; i++)
            {
                imprimeAluno(&alunos[i]);
            }
        case 4:{
            
            printf("Digite o tamanho da linha: ");
            scanf("%d",&linha);
            printf("Digite o tamanho da coluna: ");
            scanf("%d", &coluna);
            matriz = criarMatriz(linha, coluna);
            preencheMatriz(matriz, linha, coluna);
            break;
        }
        case 5:{
            imprimeMatriz(matriz, linha, coluna);
            break;
        }
        default:
            break;
        }
    } while (op != 0);
    free(alunos);
    free(aluno);
    return 0;
}

Aluno* criarAluno(){
    Aluno *aluno = malloc(sizeof(Aluno));
    return aluno;
}

Aluno* criarAlunos(int tamanho){
    Aluno *alunos = malloc(sizeof(Aluno) * tamanho);
    return alunos;
}

Aluno* acrescentaAluno(int tamanho, Aluno *alunos){
    alunos = realloc(alunos, sizeof(Aluno) * tamanho);
    return alunos;
}

void preencheAluno(Aluno *aluno){
    fflush(stdin);
    __fpurge(stdin);
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, 45, stdin);
    printf("Digite a nota 1: ");
    scanf("%f", &aluno->nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &aluno->nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &aluno->nota3);
}

void imprimeAluno(Aluno* aluno){
    printf("Nome: %s", aluno->nome);
    printf("Nota 1: %.2f\n", aluno->nota1);
    printf("Nota 2: %.2f\n", aluno->nota2);
    printf("Nota 3: %.2f\n", aluno->nota3);
}

void adicionaAluno(Aluno* aluno, Aluno* alunos, int *indice){
    strcpy(alunos[*indice].nome, aluno->nome);
    (alunos[*indice]).nota1 = aluno->nota1;
    (alunos[*indice]).nota2 = aluno->nota2;
    (alunos[*indice]).nota3 = aluno->nota3;
    *indice = *indice + 1;
}

int menu(){
    int op;
    printf("\t\t::REVISÃO::\n");
    printf("1 - para cadastrar um aluno\n");
    printf("2 - para cadastrar mais de um aluno\n");
    printf("3 - para imprimir alunos\n");
    printf("4 - para gerar boletim dos alunos\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    return op;
}

int** criarMatriz(int linha, int coluna){
    int **m;
    m = (int**) malloc(sizeof(int*) * linha);
    for (int i = 0; i < linha; i++)
    {
        m[i] = (int*) malloc(sizeof(int) * coluna);
    }
    return m;
    
}

void preencheMatriz(int **m, int linha, int coluna){
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            m[i][j] = 2;
        }
        
    }
    
}

void imprimeMatriz(int **m, int linha, int coluna){
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
        
    }
    
}