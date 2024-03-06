/* Escreva um programa na linguagem C que receba como entrada um inteiro positivo n e apresente o n-ésimo número de Fibonacci. */

#include <stdio.h>

int main(void){
    int n, n1 = 1, n2 = 1, i, r = 0;

    scanf("%d", &n);

    if(n == 1 || n == 2){
        printf("1\n");
    }
    else{
        for(i = 3; i <= n; i++){
            r = n1 + n2;
            n2 = n1;
            n1 = r;
        }
        printf("O %dº termo na sequência de Fibonacci é: %d\n", n, r);
    }


    return 0;
}
