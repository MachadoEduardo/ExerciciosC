/* Escreva um programa em linguagem C que leia um inteiro n, onde 0 <= n <= 250, e apresente uma tabuada maluca resultante da multiplicação de n por k, sendo 1 <= k <= 10, de tal modo que o primeiro apareça as multiplicações 
quando k é ímpar e depois apareça as multiplicações quando k é par. */

#include <stdio.h>

int main(void){
    int n, i, resultado;
    
    scanf("%d", &n);
    
    for(i = 1; i <= 10; i = i + 2){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    for(i = 2; i <= 10; i = i + 2){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    return 0;
}
