/* Crie um programa em linguagem C que receba como entrada uma sequência de números inteiros positivos. Quando o usuário digitar -1, o programa deve apresentar na tela o maior inteiro digitado. */

#include <stdio.h>

int main(void){
    int n, maior=0;

    do{
        scanf("%d", &n);
        if(n != -1 && n > maior){
            maior = n;
        }
    }while(n >= 0);
    printf("O maior número é: %d\n", maior);

    return 0;
}
