/* Crie um programa em linguagem C que receba como parâmetro de entrada um inteiro n positivo. Apresente na tela todos os números pares entre 1 e n, inclusive, um por linha. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, digite um inteiro positivo.\n");
        return 1;  // Retornar um código de erro para indicar que a execução não foi bem-sucedida
    }

    printf("Números pares entre 1 e %d (inclusive):\n", n);

    for (int x = 2; x <= n; x += 2) {
        printf("%d\n", x);
    }

    return 0;
}
