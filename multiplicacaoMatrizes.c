/* Crie um programa que receba como entrada três inteiros, M, N e P, que representa o tamanho de duas matrizes A(m x n) e B(n x p), seguido dos valores inteiros que preencherão a matriz A e
a matriz B, e apresente o resultado da multiplicação das matrizes A x B.

Entrada: a entrada consiste três inteiros, M, N e P que correspondem ao tamanho das matrizes A e B, onde 1 <= M, N, P <= 100, seguido dos xi, números inteiros que preencherão a matriz A e dos
yi números inteiros que preencherão a matriz B, onde 1 <= i <= M*N e  1 <= j <= N*P.
Saída: a saída consiste dos valores presentes na matriz resultante da multiplicação A*B, de tal modo que sejam apresentadas M linhas contendo P números por linha separados por espaço. */

#include <stdio.h>

int main()
{
    int linhasMatrizA, tamanhoComum, colunasMatrizB, matrizA[100][100], matrizB[100][100], matrizMultiplicacao[100][100], k, i, j;
    
    scanf("%d %d %d", &linhasMatrizA, &tamanhoComum, &colunasMatrizB);

    if (linhasMatrizA <= 0 || linhasMatrizA > 100 || tamanhoComum <= 0 || tamanhoComum > 100 || colunasMatrizB <= 0 || colunasMatrizB > 100) {
        printf("Tamanho de matriz inválido. Por favor, insira valores entre 1 e 100.\n");
        return 1; // Retorna código de erro para indicar que a execução não foi bem-sucedida
    }
   
    for(i = 0; i < linhasMatrizA; ++i){
        for(j = 0; j < tamanhoComum; ++j){
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for(i = 0; i < tamanhoComum; ++i){
        for(j = 0; j < colunasMatrizB; ++j){
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    for (i = 0; i < linhasMatrizA; ++i) {
        for (j = 0; j < colunasMatrizB; ++j) {
            for (k = 0; k < tamanhoComum; ++k) {
                matrizMultiplicacao[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    
    for(i = 0; i < linhasMatrizA; ++i){
        for(j = 0; j < colunasMatrizB; ++j){
            printf("%d ", matrizMultiplicacao[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
