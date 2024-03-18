/* Escreva um programa em linguagem C que receba como entrada um inteiro n e apresente na tela o cálculo fatorial deste número. */

#include <stdio.h>

int main(void){
    int n, fatorial = 1, i;

    scanf("%d", &n);

    for(i=2; i<=n; i++){
        fatorial = fatorial*i;
    }
    printf("O fatorial de %d é: %d\n", n, fatorial);

    return 0;
}

