#include <stdio.h>

void verificaTriangulo(float, float, float, char**);

int main(int argc, char const *argv[])
{
    float x, y, z;
    char **tip;
    printf("Digite o valor do lado X: ");
    scanf("%f", &x);
    printf("Digite o valor do lado Y: ");
    scanf("%f", &y);
    printf("Digite o valor do lado Z: ");
    scanf("%f", &z);
    verificaTriangulo(x, y, z, &tip);
    printf("%s\n", tip);
    return 0;
}

void verificaTriangulo(float x, float y, float z, char **tipo){
    if((x < y+z) && (y < x+z) && (z < x+y)){
        if((x == y) && (x == z)){
            *tipo =  "Triângulo Equilátero\n";
        }
        else if((x == y)||(y == z)){
            *tipo =  "Triângulo Isósceles\n";
        }
        else if(x != y != z){
            *tipo = "Triângulo Escaleno\n";
        }
    } else
        *tipo = "Não é triangulo\n";
    
}
