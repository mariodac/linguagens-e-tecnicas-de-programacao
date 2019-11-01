#include <stdio.h>
#include <stdlib.h>

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#else
#define limpar_input() fpurge(stdin)
#define limpar_tela() system("clear")
#endif

enum{false, true};

typedef struct {
    char nome[50];
    char marca[50];
    char data_fabricacao[50];
    int codigoBarras;
    float precoCompra;
    float precoVenda;
}Produto;

int menu();
int adicionarProduto(Produto*, int, int);
void exibirProdutos(Produto*, int);
void alterarProduto(Produto*, int);

int main()
{
    int op, quantidadeProdutos, indice = 0;
    Produto *produtos;
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quantidadeProdutos);
    produtos = malloc(sizeof(Produto)*quantidadeProdutos);
    limpar_tela();
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            limpar_tela();
            if(indice == quantidadeProdutos)
                printf("Lista de produtos CHEIA\nTOTAL DE PRODUTOS ADICIONADOS: %d\n", indice);
            else{
                if(adicionarProduto(produtos, indice, quantidadeProdutos) == true)
                    indice++;
                    
            }
            break;
        case 2:
        {
            limpar_tela();
            int ind;
            printf("Digite o indice do produto desejado: ");
            scanf("%d", &ind);
            alterarProduto(produtos, ind);
            break;
        }
        case 3:
            limpar_tela();
            exibirProdutos(produtos, indice);
            break;
        case 4:
            limpar_tela();
            printf("Produtos desalocados\n");
            free(produtos);
            break;
        case 0:
            limpar_tela();
            printf("ENCERRADO!\n");
            break;
        default:
            limpar_tela();
            printf("OPÇÃO INVÁLIDA\n");
            break;
        }
    } while (op != 0);
    free(produtos);
    return 0;
}

int menu(){
    int op;
    printf("\t\t*******FICHÁRIO******\n");
    printf("1 - Adicionar um produto\n");
    printf("2 - Alterar um produto\n");
    printf("3 - Mostrar todos os produtos\n");
    printf("4 - Desalocar todos os produtos alocados dinamicamente\n");
    printf("0 - Para sair\n");
    printf(">> ");
    scanf("%d", &op);
    return op;
}

int adicionarProduto(Produto *produtos, int indice, int tamanho){
    if(indice == tamanho)
        return false;
    printf("\tINFORMAÇÕES SOBRE O PRODUTOS\n");
    printf("Digite o nome: ");
    getchar();
    fgets(produtos[indice].nome, 50, stdin);
    printf("Digite a marca: ");
    fgets(produtos[indice].marca, 50, stdin);
    printf("Digite a data de fabricação: ");
    fgets(produtos[indice].data_fabricacao, 50, stdin);
    // getchar();
    printf("Digite o código de barras: ");
    scanf("%d",&produtos[indice].codigoBarras);
    printf("Digite o preço de compra: ");
    scanf("%f", &produtos[indice].precoCompra);
    printf("Digite o preço de venda: ");
    scanf("%f",&produtos[indice].precoVenda);
    return true;
}

void exibirProdutos(Produto *produtos, int indice){
    for (int i = 0; i < indice; i++)
    {
        printf("\t\t\tPRODUTO #%d\n", i+1);
        printf("NOME: %s", produtos[i].nome);
        printf("MARCA: %s", produtos[i].marca);
        printf("DATA DE FABRICAÇÃO: %s", produtos[i].data_fabricacao);
        printf("CÓDIGO: %d\n", produtos[i].codigoBarras);
        printf("PREÇO DE COMPRA: R$ %.2f\n", produtos[i].precoCompra);
        printf("PREÇO DE VENDA: R$ %.2f\n", produtos[i].precoVenda);
        printf("LUCRO: R$ %.2f\n", produtos[i].precoVenda - produtos[i].precoCompra);
    }
    
}

void alterarProduto(Produto *produtos, int indice){
    int op;
    printf("Deseja alterar o nome: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        getchar();
        printf("NOME: ");
        fgets(produtos[indice].nome, 50, stdin);
    }
    printf("Deseja alterar a marca: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        getchar();
        printf("MARCA: ");
        fgets(produtos[indice].marca, 50, stdin);
    }
    printf("Deseja alterar a data de fabricação: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        getchar();
        printf("DATA DE FABRICAÇÃO: ");
        fgets(produtos[indice].marca, 50, stdin);
    }
    printf("Deseja alterar a código de barras: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        printf("CÓDIGO DE BARRAS: ");
        scanf("%d", &produtos[indice].codigoBarras);
    }
    printf("Deseja alterar o preço de compra: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        printf("PREÇO DE COMPRA: R$ ");
        scanf("%f", &produtos[indice].precoCompra);
    }
    printf("Deseja alterar o preço de venda: \n0 P/ SIM 1 P/NÃO\n");
    scanf("%d", &op);
    if(op == true){
        printf("PREÇO DE venda: R$ ");
        scanf("%f", &produtos[indice].precoVenda);
    }
}
