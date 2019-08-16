#include <stdio.h>
#include <math.h>

float areaCircunferencia(float);

int main(int argc, char const *argv[])
{
    float raio;
    printf("Digite a o raio da circunferencia: ");
    scanf("%f", &raio);
    printf("Area da circunferencia: %.2f\n", areaCircunferencia(raio));
    return 0;
}


float areaCircunferencia(float raio){
    return M_PI * powf(raio, 2);
}