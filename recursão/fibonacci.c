#include "stdio.h"

long int fib(int);
long int tribonacci(int);
int pell(int);
int catalan(int);

int main(){
    int n = 5;
    printf("Sequencia fibonacci: ");
    for (int i = 0; i <= n; i++)
        printf("%ld ", fib(i));
    printf("\nSequencia tribonacci: ");
    for(int i = 0; i <= n; i++)
        printf("%ld ", tribonacci(i));
    printf("\n%dº termo fibonacci: %ld", n, fib(n));
    printf("\n%dº termo tribonacci: %ld\n", n, tribonacci(n));
    printf("Pell: %d\n", pell(n));
    printf("Catalan: %d\n", catalan(n));
}

long int fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

long int tribonacci(int n){
    if(n == 0 || n == 1) return 0;
    else if(n == 2) return 1;
    else return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int pell(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return (2*pell(n - 1)) + pell(n -2);
}

int catalan(int n){
    if(n == 0) return 0;
    else ((2 * (2 * n - 1))/(n+1)) * catalan(n - 1);
}