#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void funcaoSwap(int *x, int *y);
int buscaPosMenor(int *v, int inicio, int fim);
void bubbleSort(int *v, int ini, int fim);
void insertionSort(int *v, int ini, int fim);
void selectionSort(int *v, int ini, int fim);
int buscaSequencialRec(int *v, int ini, int fim, int k);
int buscaSequencial(int *v, int ini, int fim, int k);
int buscaBinariaRec(int *v, int ini, int fim, int k);
int buscaBinaria(int *v, int ini, int fim, int k);

int main(void){
    int n, *vetor, i;

    scanf("%d", &n);

    vetor = (int *) malloc(sizeof(int)*n);
    srand(time(NULL));

    for( i = 0; i < n; i++){
        vetor[i] = rand() % 10 + 1;
    }

    for( i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    insertionSort(vetor, 0, n - 1);
    printf("\n");
    
    for( i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

   /* int valor = rand() % n + 1;

    int posicao = buscaBinariaRec(vetor, 0, n - 1, n);

    if(posicao != -1)
        printf("\nvetor[%d] = %d\n", posicao, vetor[posicao]);
    else
        printf("%d nao existe no vetor!\n", valor); */

    return 0;
}

void funcaoSwap(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int buscaPosMenor(int *v, int inicio, int fim){
    int menor = v[inicio];
    int posicaoMenor = inicio; 
    for(int i = inicio; i <= fim; ++i){
        if(v[i] < menor){
            menor = v[i];
            posicaoMenor = i;
        }
    }   
    return posicaoMenor; 
}

void insertionSort(int *v, int ini, int fim){
    int i, j, aux;
    for(i = ini + 1; i <= fim; ++i){
        aux = v[i];
        j = i - 1;
        while(j >= ini && aux < v[j]){
            funcaoSwap(&v[j + 1], &v[j]);
            j = j - 1;
        }
    }
}

void bubbleSort(int *v, int ini, int fim){
    int i, j;
    for(i = ini; i <= fim; i++){
        for(j = ini; j <= fim - i; j++){
            if(v[j] > v[j + 1]){
                funcaoSwap(&v[j], &v[j+1]);
            }
        }
    }
}

void selectionSort(int *v, int ini, int fim){
    int i, menor;
    for(i = ini; i <= fim; ++i){
        menor = buscaPosMenor(v, i, fim);
        funcaoSwap(&v[i], &v[menor]);
    }
}

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
