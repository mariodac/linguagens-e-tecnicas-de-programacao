#include <stdio.h>
#include <stdlib.h>

enum{false, true};

typedef struct aluno
{
    char nome[45];
    float nota1;
    float nota2;
    float nota3;
}Aluno;
typedef struct aluno Aluno;

int menu();
Aluno* criarAluno();
Aluno* criarAlunos(int);
Aluno* acrescentaAluno(int);
void preencheAluno(Aluno*);
void imprimeAluno(Aluno*);
void adicionaAluno(Aluno*, Aluno*, int*);

int main(){
    int op, indice = 0;
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
            preencheAluno(aluno);
            printf("\t##Revise as informações##");
            imprimeAluno(aluno);
            printf("Deseja adicionar? ");
            if(escolha == true){
                alunos = criarAlunos(indice);
                adicionaAluno(aluno, alunos, &indice);}
            else free(aluno);
            break;
        }
        case 2:
            for (int i = 0; i < indice; i++)
            {
                imprimeAluno(&alunos[i]);
            }
            
        default:
            break;
        }
    } while (op != 0);
    

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

Aluno* acrescentaAlunos(int tamanho, Aluno *alunos){
    alunos = realloc(alunos, sizeof(Aluno) * tamanho);
    return alunos;
}

void preencheAluno(Aluno *aluno){
    fflush(stdin);
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, 45, stdin);
    printf("Digite a nota 1: ");
    scanf("%d", &aluno->nota1);
    printf("Digite a nota 2: ");
    scanf("%d", &aluno->nota2);
    printf("Digite a nota 3: ");
    scanf("%d", &aluno->nota3);
}

void imprimeAluno(Aluno* aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Nota 1: %.2f\n", aluno->nota1);
    printf("Nota 2: %.2f\n", aluno->nota2);
    printf("Nota 3: %.2f\n", aluno->nota3);
}

void adicionaAluno(Aluno* aluno, Aluno* alunos, int *indice){
    *(alunos[*indice]).nome = aluno->nome;
    // *(alunos[*indice]).nota1 = aluno->nota1;
    *indice++;
}

int menu(){
    int op;
    printf("\t\t::REVISÃO::\n");
    printf("1 - para cadastrar um aluno\n");
    printf("2 - para imprimir alunos");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    return op;
}