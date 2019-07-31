#include <stdio.h>
#include <math.h>
void bhaskara(float a, float b, float c){
    float x1, x2, delta;
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta))/ (2*a);
    x2 = (-b - sqrt(delta))/ (2*a);
    if(delta < 0){
        printf("Não há raízes reais\n");
        printf("Delta: %f\n", delta);
    }
    else{
        printf("Delta: %f\n", delta);
        printf("Valor de x1: %f\n", x1);
        printf("Valor de x2: %f\n", x2);
    }
}

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    bhaskara(a, b, c);
    return 0;
}
