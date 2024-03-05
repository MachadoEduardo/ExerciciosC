/* Escreva um programa em linguagem C que leia uma quantidade indeterminada de duplas de valores inteiros x e y. Cada caso de teste contém dois valores inteiros x e y. A leitura deve ser encerrada ao ser fornecido valores iguais x e y. Para cada caso de teste imprima
"Crescente", caso os valores tenham sido digitados na ordem crescente e "Decrescente", caso os valores tenham sido digitados na ordem decrescente. */

#include <stdio.h>

int main(void){
    float x, y;

    do{
        scanf("%f %f", &x, &y);
            if(x < y)
                puts("Crescente");
            else if(x > y)
                puts("Decrescente");
    } while(x != y);

    return 0;
}
