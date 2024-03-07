/* Crie um programa que receba como entrada um inteiro N que representa o tamanho de duas matrizes A(n x n) e B(n x n), seguido dos valores inteiros que preencherão a matriz A e
a matriz B, e apresente o resultado da subtração das matrizes A - B.

Entrada: a entrada consiste de um inteiro N que corresponde ao tamanho das matrizes A e B, onde 1 <= N <= 100, seguido dos xi, números inteiros que preencherão a matriz A e dos
yi números inteiros que preencherão a matriz B, onde 1 <= i <= N^2.
Saída: a saída consiste dos valores presentes na matriz resultante da subtração A - B, de tal modo que sejam apresentadas N linhas contendo N números por linha separados por espaço. */

#include <stdio.h>

int main()
{
    int tamanhoMatrizes, matrizA[100][100], matrizB[100][100], matrizSubtracao[100][100], i, j;
    
    scanf("%d", &tamanhoMatrizes);

     if (tamanhoMatrizes <= 0 || tamanhoMatrizes > 100) {
        printf("Tamanho de matriz inválido. Por favor, insira um valor entre 1 e 100.\n");
        return 1; // Retorna código de erro para indicar que a execução não foi bem-sucedida
    }
   
    for(i = 0; i < tamanhoMatrizes; ++i){
        for(j = 0; j < tamanhoMatrizes; ++j){
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for(i = 0; i < tamanhoMatrizes; ++i){
        for(j = 0; j < tamanhoMatrizes; ++j){
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    for(i = 0; i < tamanhoMatrizes; ++i){
        for(j = 0; j < tamanhoMatrizes; ++j){
           matrizSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    
    for(i = 0; i < tamanhoMatrizes; ++i){
        for(j = 0; j < tamanhoMatrizes; ++j){
            printf("%d ", matrizSubtracao[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
