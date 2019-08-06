#include <stdio.h>

void mediaA(float nota1, float nota2, float nota3, float *media){
    *media = (nota1 + nota2 + nota3) / 3;
}

void mediaP(float nota1, float nota2, float nota3, float *media){
    *media = (nota1 + nota2 + nota3) / (5 + 3 + 2);
}
int main(int argc, char const *argv[])
{
    char escolha;
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    getchar();
    printf("Digite A para média aritmética\nDigite P para média ponderada\n-> ");
    scanf("%c", &escolha);
    switch (escolha)
    {
    case 'a':
        mediaA(nota1, nota2, nota3, &media);
        printf("A média total foi: %.2f\n", media);
        break;
    case 'A':
        mediaA(nota1, nota2, nota3, &media);
        printf("A média total foi: %.2f\n", media);
        break;
    case 'p':
        mediaP(nota1, nota2, nota3, &media);
        printf("A média ponderada total foi: %.2f\n", media);
        break;
    case 'P':
        mediaP(nota1, nota2, nota3, &media);
        printf("A média ponderada total foi: %.2f\n", media);
        break;
    default:
        printf("Essa opção não existe!\n");
        break;
    }
    
    return 0;
}
