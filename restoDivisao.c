/* Escreva um programa em linguagem C que leia dois valores inteiros positivos x e y, tal que x < y, e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3. */

#include <stdio.h>

int main(void){
    int x, y, i;

    scanf("%d %d", &x , &y);

    if(x > y){
      puts("Certifique-se do valor de X ser maior que o valor de Y");
      return 1;
    }
    else{
      for (i = x; i < y; i++) {
          if (i % 5 == 2 || i % 5 == 3) {
              printf("%d\n", i);
          }
      }
    }
    return 0;
}
