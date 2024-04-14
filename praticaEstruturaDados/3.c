#include <stdio.h>

void contagemRegressiva(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    } else {
        printf("%d ", n);
        contagemRegressiva(n - 1);
    }
}

int main(){
    int n, resultado;

    scanf("%d", &n);
    contagemRegressiva(n);

    return 0;
}
