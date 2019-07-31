#include <stdio.h>

float mediaA(float nota1, float nota2, float nota3){
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

float mediaP(float nota1, float nota2, float nota3){
    float media = (nota1 + nota2 + nota3) / (5 + 3 + 2);
    return media;
}
int main(int argc, char const *argv[])
{
    char escolha;
    float nota1, nota2, nota3;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    getchar();
    printf("Digite A para média aritmética\nDigite P para média ponderada: ");
    scanf("%c", &escolha);
    if(escolha == 'a' || escolha == 'A'){
        printf("A média total foi: %f\n", mediaA(nota1, nota2, nota3));
    }
    if(escolha == 'p' || escolha == 'P'){
        printf("A média total foi: %f\n", mediaP(nota1, nota2, nota3));
    }
    else printf("Essa opção não existe!\n");
    return 0;
}
