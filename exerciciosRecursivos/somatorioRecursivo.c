#include <stdio.h>

int somatorio(int numero);

int main(void){
    int numero, r;

    scanf("%d", &numero);
    r = somatorio(numero);
    printf("%d", r);

    return 0;
}

int somatorio(int numero){
    int resultado = 0;

    if(numero == 0)
        return 0;
    if(numero == 1)
        return 1;
    else{
        resultado = somatorio(numero-1)+numero;
        return resultado;
    }
}
