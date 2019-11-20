#include <stdio.h>
#include <stdlib.h>
#include<stdio_ext.h>

// verificação de sistema operacional
#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#endif

typedef struct{
    char cor[20];
    int ano_fabricacao;
    char modelo[45];
    char marca[45];
    float preco_compra;
    float preco_venda;
    char placa[10];
}MOTO;

int menu();
MOTO* criarMoto();
void cadastrar(MOTO*, int);
void preencheMoto(MOTO *);
void imprimeMoto(MOTO*);
int main(){
    int quantidade, op;
    do{
        op = menu();
        switch(op){
            case 0:
                limpar_tela();
                printf("PROGRAMA ENCERRADO\n");
                break;
            case 1:{
                limpar_tela();
                printf("Digite a quantidade a ser cadastrada -> ");
                scanf("%d", &quantidade);
                MOTO *moto = criarMoto(quantidade);
                preencheMoto(moto);
                break;
            }
            default:
                limpar_tela();
                printf("OPÇÃO INVÁLIDA!\n");
                break;

        }
    }while(op != 0);
    return 0;
}

int menu(){
    printf("\t\t#LOJA DE MOTOS#\n");
    printf("0- Para sair\n");
    printf("1 - Para cadastrar uma moto\n");
    printf("2 - Para exibir veiculos cadastrados\n");
    printf("Digite a opção desejada -> ");
    int op;
    scanf("%d", &op);
    return op;
}

MOTO* criarMoto(int quantidade){
    MOTO *moto;
    moto = malloc(sizeof(MOTO)*quantidade);
    return moto;
}

void cadastrar(MOTO* motos, int quantidade){
    for(int i = 0; i < quantidade; i++){
        
    }
}

void preencheMoto(MOTO *moto){
    printf("Digite a cor -> ");
    limpar_input();
    fgets( moto->cor, 20, stdin);
    printf("Digite a ano de fabricação -> ");
    scanf("%d", &moto->ano_fabricacao);
    // limpar_input();
    printf("Digite a marca -> ");
    fgets(moto->marca, 45, stdin);
    printf("Digite o modelo -> ");
    fgets(moto->modelo, 45, stdin);
    printf("Digite a placa -> ");
    fgets(moto->placa, 10, stdin);
    printf("Digite o preço de compra");
    scanf("%f", &moto->preco_compra);
    printf("Digite o preço de venda");
    scanf("%f", &moto->preco_venda);
}

void imprimeMoto(MOTO *moto){
    printf("COR: %s\n", moto->cor);
    printf("MARCA: %s\n", moto->marca);
    printf("MODELO: %s\n", moto->modelo);
    printf("PLACA: %s\n", moto->placa);
    printf("ANO DE FABRICAÇÃO: %d\n", moto->ano_fabricacao);
    printf("PREÇO DE VENDA: %f\n", moto->preco_compra);
    printf("PREÇO DE COMPRA : %f\n", moto->preco_venda);
    printf("LUCRO : %.2f\n", (moto->preco_compra - moto->preco_venda));
}