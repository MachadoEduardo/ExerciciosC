/* Crie um programa em linguagem C que calcule o perímetro de um polígono. Caso o usuário queira calcular o perímetro de uma circunferência, ele deverá digitar "C" e posteriormente
o raio da circunferência. Caso o usuário queira calcular o perímetro de um quadrado, ele deverá digitar "Q" e posteriormente o comprimento do lado do quadrado. Caso o usuário queira 
calcular o perímetro de um retângulo, ele deverá digitar "R" e posteriormente o comprimento da base e altura, respectivamente, do retângulo. As medidas informadas pelo usuário são em 
centímetros. Quando necessário, utilize π = 3.14. Apresente o resultado do perímetro com três casas decimais. */

#include <stdio.h>

int main(void){
    char forma;
    float raio, pi = 3.14, circ, comprimento, compB, compA;

    scanf("%c", &forma);

    switch(L){
        case 'C':
            scanf("%f", &raio);
            printf("%.3f", 2*raio*pi);
            break;
        case 'Q':
            scanf("%f", &comprimento);
            printf("%.3f", 4*comprimento);
            break;
        case 'R':
            scanf("%f %f", &compB, &compA);
            printf("%.3f", (compB+compA)*2);
            break;
        default:
            printf("Forma inválida");
    }

    return 0;
}
