#include <stdio.h>

int calculoResultado(int x, int y){
    int resultado, i;
    if(y == 0){
        return 1;
    }
    else if(y == 1){
        return x;
    }
    else{
        resultado = x * calculoResultado(x, y-1);
        return resultado;
    }
}

int main(){
    int x, y, resultado = 0;

    scanf("%d %d", &x, &y);

    resultado = calculoResultado(x, y);
    printf("%d", resultado);

    return 0;
}
