/* Crie um programa que recebe do usuário um inteiro positivo n, onde 2 ≤ n ≤ 100. Aloque dinamicamente dois vetores de tamanho n e peça para o usuário preencher os dois vetores. Em
seguida, aloque dinamicamente um terceiro vetor de tamanho n que contenha na posição 0 a soma dos elementos na posição 0 dos dois primeiros vetores, na posição 1 a soma dos elementos
na posição 1, repetindo o processo até a posição n − 1. Por fim, apresente na tela todos os elementos do terceiro vetor e libere o espaço de memória alocado de todos os vetores após 
utilizar eles. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);
    if (n < 2 || n > 100) {
        printf("Digite um valor entre 2 e 100 inclusive\n");
        scanf("%d", &n);
    }

    int *vetor1 = (int *)malloc(n * sizeof(int));
    int *vetor2 = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
    }

    int *vetor3 = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(vetor3);
    
    return 0; 
}
