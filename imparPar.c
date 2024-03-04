/* Crie um programa na linguagem C que leia um número inteiro e apresente a mensagem "Par" se o número for par ou "Ímpar" se o número for ímpar. */

#include <stdio.h>

int main(void) {
    int numero;

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Par");
    } else {
        printf("Ímpar");
    }

    return 0;
}
