#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int buscaSequencialRec(int *v, int ini, int fim, int k){
    if(v[ini] == k){
        return ini;
    }
    else if(ini > fim){
        return -1;
    }
    else{
        return buscaSequencialRec(v, ini + 1, fim, k);
    }

}

int buscaBinariaRec(int *v, int ini, int fim, int k){
    if (ini <= fim) {
        int meio = ini + (fim - ini) / 2;

        if (v[meio] == k) {
            return meio;
        }
        else if (v[meio] < k) {
            return buscaBinariaRec(v, meio + 1, fim, k);
        }
        else {
            return buscaBinariaRec(v, ini, meio - 1, k);
        }
    }
    return -1;
}

int buscaSequencial(int *v, int ini, int fim, int k){
    while(ini <= fim){
        if(v[ini] == k)
            return ini;

        ini++;
    }

    return -1;
}

int buscaBinaria(int *v, int ini, int fim, int k){
    int meio;

    while(ini <= fim){
        meio = ini + (fim - ini) / 2;
        if(k < v[meio]){
            fim = meio - 1;
        }
        else if(k > v[meio]){
            ini = meio + 1;
        }
        else{
            return meio;
        }
    }
    return -1;
}

int main(void){
    int n, *vetor, i;

    scanf("%d", &n);

    vetor = (int *) malloc(sizeof(int)*n);
    srand(time(NULL));

    for( i = 0; i < n; i++){
        vetor[i] = i+1;
    }

    for( i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    int valor = rand() % n + 1;

    int posicao = buscaBinariaRec(vetor, 0, n - 1, n);

    if(posicao != -1)
        printf("\nvetor[%d] = %d\n", posicao, vetor[posicao]);
    else
        printf("%d nao existe no vetor!\n", valor);

    return 0;
}

