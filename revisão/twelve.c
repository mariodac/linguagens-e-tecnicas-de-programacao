#include <stdio.h>

float pesoIdeal(float altura, char sexo){
    if(sexo == 'm' || sexo == 'M'){
        return 72.7 * altura - 58;
    }
    if(sexo == 'f' || sexo == 'F'){
        return 62.1 * altura - 44.7;
    }
    else{
        printf("Erro\n");
    }
}

int main(int argc, char const *argv[])
{
    float a;
    char s;
    printf("Digite o sexo\nM para masculino ou F para Feminino: \n");
    scanf("%s", &s);
    printf("Digite a altura em metros: ");
    scanf("%f", &a);
    printf("Peso ideal: %.2f Kg\n", pesoIdeal(a, s));
    return 0;
}
