#include <stdio.h>
#include <stdlib.h>


// verificação de sistema operacional
#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#include<stdio_ext.h>
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
MOTO* criarMotos(int);
void cadastrar(MOTO*, int);
void preencheMoto(MOTO *);
void imprimeMoto(MOTO*);
int main(){
    int quantidade, op;
    MOTO *motos = NULL;
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
                int i = 0;
                motos = criarMotos(quantidade);
                while (i < quantidade){
                    printf("\t\tMOTO #%d\n", i);
                    preencheMoto(&motos[i]);
                    i++;
                }
                break;
            }
            case 2:{
                limpar_tela();
                int i = 0;
                if(motos != NULL)
                    while (i < quantidade){
                        printf("\t\tMOTO #%d\n", i);
                        imprimeMoto(&motos[i]);
                        i++;
                    }
                else printf("Nenhuma moto cadastrada!\n");
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
    printf("\t\t::LOJA DE MOTOS::\n");
    printf("0 - Para sair\n");
    printf("1 - Para cadastrar uma moto\n");
    printf("2 - Para exibir veiculos cadastrados\n");
    printf("Digite a opção desejada -> ");
    int op;
    scanf("%d", &op);
    return op;
}

MOTO* criarMoto(){
    MOTO *moto;
    moto = malloc(sizeof(MOTO));
    return moto;
}

MOTO* criarMotos(int quantidade){
    MOTO *moto;
    moto = malloc(sizeof(MOTO)*quantidade);
    return moto;
}

void preencheMoto(MOTO *moto){
    limpar_input();
    printf("Digite a cor -> ");
    fgets( moto->cor, 10, stdin);
    printf("Digite a marca -> ");
    fgets(moto->marca, 45, stdin);
    printf("Digite o modelo -> ");
    fgets(moto->modelo, 45, stdin);
    printf("Digite a placa -> ");
    fgets(moto->placa, 10, stdin);
    printf("Digite a ano de fabricação -> ");
    scanf("%d", &moto->ano_fabricacao);
    // limpar_input();
    printf("Digite o preço de compra -> ");
    scanf("%f", &moto->preco_compra);
    printf("Digite o preço de venda -> ");
    scanf("%f", &moto->preco_venda);
}

void imprimeMoto(MOTO *moto){
    printf("COR: %s", moto->cor);
    printf("MARCA: %s", moto->marca);
    printf("MODELO: %s", moto->modelo);
    printf("PLACA: %s", moto->placa);
    printf("ANO DE FABRICAÇÃO: %d\n", moto->ano_fabricacao);
    printf("PREÇO DE VENDA: %.2f\n", moto->preco_compra);
    printf("PREÇO DE COMPRA : %.2f\n", moto->preco_venda);
    printf("LUCRO : %.2f\n", (moto->preco_venda - moto->preco_compra));
}