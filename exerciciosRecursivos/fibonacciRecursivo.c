#include <stdio.h>

int calculoFibonacci(int numero){
    int resultado;

    if(numero == 0)
        return 0;
    if(numero == 1)
        return 1;
    else{
        resultado = calculoFibonacci(numero-1)+calculoFibonacci(numero-2);
    }

}

int main(void){
    int numero, resultado;

    scanf("%d", &numero);
    resultado = calculoFibonacci(numero);
    printf("%d", resultado);

    return 0;
}
