/* Implemente uma função iterativa e uma versão recursiva do algoritmo Selection Sort, de tal modo que a função receba como parâmetro 
de entrada um vetor de inteiros, o índice de início e índice de fim do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcaoSwap(int *x, int *y);
int buscaPosMenor(int *v, int inicio, int fim);
void selectionSortIterativo(int *v, int ini, int fim);
void selectionSortRecursivo(int *v, int ini, int fim);

int main(void) {
    int n;

    scanf("%d", &n);

    int *vetor = (int *)malloc(sizeof(int) * n);
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    selectionSortIterativo(vetor, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    selectionSortRecursivo(vetor, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}

void funcaoSwap(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int buscaPosMenor(int *v, int inicio, int fim) {
    int menor = v[inicio];
    int posicaoMenor = inicio; 
    for (int i = inicio; i <= fim; ++i) {
        if (v[i] < menor) {
            menor = v[i];
            posicaoMenor = i;
        }
    }   
    return posicaoMenor; 
}

void selectionSortIterativo(int *v, int ini, int fim) {
    for (int i = ini; i <= fim; ++i) {
        int menor = buscaPosMenor(v, i, fim);
        funcaoSwap(&v[i], &v[menor]);
    }
}

void selectionSortRecursivo(int *v, int ini, int fim) {
    if (ini >= fim) return;

    int menor = buscaPosMenor(v, ini, fim);
    funcaoSwap(&v[ini], &v[menor]);

    selectionSortRecursivo(v, ini + 1, fim);
}
