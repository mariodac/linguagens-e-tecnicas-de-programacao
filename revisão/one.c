#include <stdio.h>
#define PI 3.14159265359

float raioEsfera(float r){
    float v;
    v = 4 / 3 * PI * (r*r*r);
    return v;
}
int main(){
  float r;
  
  printf("Digite um valor para o raio: ");
  scanf("%f",&r);
  printf("O raio da esfera = %f\n", raioEsfera(r));
  return 0;
}
