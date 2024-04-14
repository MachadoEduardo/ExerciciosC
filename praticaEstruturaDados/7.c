/* Implemente o algoritmo Shell Sort de tal modo que a função receba como parâmetro de entrada um vetor de inteiros,
o índice de início e índice de fim do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcaoSwap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void shellSort(int *vetor, int ini, int fim) {
    int intervalo = 1;

    while (intervalo < (fim - ini) / 3) {
        intervalo = intervalo * 3 + 1;
    }

    while (intervalo > 0) {
        for (int i = ini + intervalo; i <= fim; i++) {
            int temp = vetor[i];
            int j = i;

            while (j >= ini + intervalo && vetor[j - intervalo] > temp) {
                vetor[j] = vetor[j - intervalo];
                j -= intervalo;
            }
            vetor[j] = temp;
        }
        intervalo /= 3;
    }
}

int main(void) {
    int n;

    scanf("%d", &n);

    int *vetor = (int *)malloc(sizeof(int) * n);
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    shellSort(vetor, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
