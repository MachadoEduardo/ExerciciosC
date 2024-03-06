/* Crie um programa em linguagem C que receba como entrada uma sequência de números inteiros e quando o usuário digitar 0, o programa deve apresentar na tela a soma de todos os números digitados. */

#include <stdio.h>

int main(void){
    int n, soma = 0;

    do{
        scanf("%d", &n);
        soma += n;
    }while(n != 0);

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
