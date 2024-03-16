#include <stdio.h>

int realizaSoma(int n){
    if(n == 1)
        return 1;
    else{
        n += realizaSoma(n - 1);
        return n;
    }
}

int main(void){
    int n, resultado;

    scanf("%d", &n);

    resultado = realizaSoma(n);
    printf("%d", resultado);

    return 0;
}
