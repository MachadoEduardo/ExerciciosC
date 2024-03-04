/* Crie um programa na linguagem C que leia quatro valores e apresente na tela "Maior número digitado: " seguido do maior número digitado
e na linha seguinte "Menor valor digitado: " seguido do menor valor digitado. */

#include <stdio.h>

int main()
{
    int numeros[4], maior, menor;
    
    scanf("%d", &numeros[0]);
    menor = numeros[0];
    maior = numeros[0];
    
    for(int i = 1; i < 4; ++i){
         scanf("%d", &numeros[i]);
         if(numeros[i] > maior){
             maior = numeros[i];
         }
         
         if(menor > numeros[i]){
             menor = numeros[i];
         }
    }
    
    printf("Maior número digitado: %d\n", maior);
    printf("Menor número digitado: %d\n", menor);
    
    return 0;
}
