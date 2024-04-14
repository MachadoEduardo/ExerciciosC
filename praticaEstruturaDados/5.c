/* Implemente uma função para verificar se um vetor de inteiros está ordenado. */

#include <stdio.h>

int estaOrdenado(int vetor[], int tamanhoVetor);
int main() {
    int tamanhoVetor;

    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    if (estaOrdenado(vetor, tamanhoVetor)) {
        printf("O vetor esta ordenado\n");
    } else {
        printf("O vetor nao esta ordenado\n");
    }

    return 0;
}

int estaOrdenado(int vetor[], int tamanhoVetor){
    for (int i = 1; i < tamanhoVetor; i++){
        if (vetor[i] < vetor[i - 1]){
            return 0;
        }
    }
    return 1;
}
