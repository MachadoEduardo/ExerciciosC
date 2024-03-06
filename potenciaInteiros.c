/* Escreva um programa na linguagem C que leia dois inteiros x e y, onde 0 <= x, y <= 10, calcule a potência x^y, e apresente para o usuário o resultado desta operação matemática. */

#include <stdio.h>

int main(void){
    int x, y, resultado = 1, i;
    
    puts("Escreva dois valores entre 0 e 10: ");
    scanf("%d %d", &x, &y);
    
    if(y == 0)
        printf("A potência de %d elevado a %d é: 1", x, y);
    else if(y == 1)
        printf("A potência de %d elevado a %d é: %d", x, y, x);
    else{
        for(i = 0; i < y; ++i){
            resultado = x*resultado;
        }        
        printf("%d", resultado);
    }
}
