#include <stdio.h>
#include <math.h>

float raioEsfera(float r){
    return (((4.f / 3.f) * M_PI) * powf(r, 3.f));
}
int main(){
  float r;
  
  printf("Digite um valor para o raio: ");
  scanf("%f",&r);
  printf("O raio da esfera = %f\n", raioEsfera(r));
  return 0;
}
