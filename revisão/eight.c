#include <stdio.h>

char* verificaNadador(int idade){
    char *categoria;
    if(idade >= 5 && idade <= 7){
        categoria = "Infantil A";
    }
    if(idade >= 8 && idade <= 10){
        categoria = "Infantil B";
    }
    if(idade >= 11 && idade <= 13){
        categoria = "Juvenil A";
    }
    if(idade >=14 && idade <= 17){
        categoria = "Juvenil B";
    }
    if(idade >= 18){
        categoria = "Adulto";
    }
    if (idade < 5){
        categoria = "Nenhuma";
    }
    return categoria;
}

int main(int argc, char const *argv[])
{
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Categoria: %s\n", verificaNadador(idade));
    return 0;
}
