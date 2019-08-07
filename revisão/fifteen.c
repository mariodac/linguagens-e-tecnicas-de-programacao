#include <stdio.h>

char* verificaTriangulo(float x, float y, float z){
    if((x < y+z) && (y < x+z) && (z < x+y)){
        if((x == y) && (x == z)){
        return "Triângulo Equilátero\n";
        }
        if((x == y)||(y == z)){
            return "Triângulo Isósceles\n";
        }
        if(x != y != z){
            return "Triângulo Escaleno\n";
        }
    } else
        return "Não é triangulo\n";
    
}

int main(int argc, char const *argv[])
{
    float x, y, z;
    printf("Digite o valor do lado X: ");
    scanf("%f", &x);
    printf("Digite o valor do lado Y: ");
    scanf("%f", &y);
    printf("Digite o valor do lado Z: ");
    scanf("%f", &z);
    printf("%s\n", verificaTriangulo(x, y, z));
    return 0;
}
