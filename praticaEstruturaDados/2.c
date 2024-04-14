/* Crie um programa que recebe do usuário um inteiro positivo n, onde 2 ≤ n ≤ 10. Aloque dinamicamente uma matriz quadrada de tamanho n e peça para o usuário preencher todos os
campos desta matriz. Em seguida, crie, utilizando alocação dinâmica, a matriz transposta da matriz informada pelo usuário e apresente essa matriz para o usuário. Certifique-se que 
você liberou das duas matrizes após utilizar elas. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n < 2 || n > 10) {
        printf("Digite um valor entre 2 e 10 inclusive.\n");
        scanf("%d", &n);
    }
    
    int **matriz = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int **matrizTransposta = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        matrizTransposta[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
    
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
        free(matrizTransposta[i]);
    }
    
    free(matriz);
    free(matrizTransposta);
    
    return 0;
}
