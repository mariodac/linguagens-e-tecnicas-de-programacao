#include <stdio.h>

void salario(int ht, float vh, float pd, float *sb, float *td, float * sl);

int main(int argc, char const *argv[])
{
    int horaTrabalhada;
    float valorHora, percentualDesconto, totalDesconto, salarioBruto, salarioLiquido;
    printf("Digite a hora trabalhada: ");
    scanf("%d", &horaTrabalhada);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);
    salario(horaTrabalhada, valorHora, percentualDesconto, &salarioBruto, &totalDesconto, &salarioLiquido);
    printf("Salário bruto: %.2f\nTotal de desconto: %.2f\nSalário líquido: %.2f\n", salarioBruto, totalDesconto, salarioLiquido);
    return 0;
}

void salario(int ht, float vh, float pd, float *sb, float *td, float * sl){
    *sb = ht * vh;
    *td = (pd/100.f) * (*sb);
    *sl = (*sb) - (*td);
}
