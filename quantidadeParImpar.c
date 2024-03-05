/* Escreva um programa em linguagem C que leia vários números inteiros até o valor 0 ser digitado. Apresente as seguintes mensagens, "x números pares" e "y números ímpares", uma por linha, respectivamente, onde x é a quantidade de números pares informados pelo usuário e y
é a quantidade de números ímpares digitados pelo usuário. */

#include <stdio.h>

int main(void) {
    int n, x = 0, y = 0;

    do {
        scanf("%d", &n);

        if (n % 2 == 0) {
            x++;
        } else {
            y++;
        }
    } while (n != 0);

    printf("%d número(s) par(es)\n", x);
    printf("%d número(s) ímpar(es)\n", y);

    return 0;
}
