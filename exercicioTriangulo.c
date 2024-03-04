/* Crie um programa na linguagem C que receba como entrada três valores, x, y e z, respectivamente, que correspondem aos lados de um
triângulo, e apresente a mensagem "O triângulo é equilátero", se o triângulo for equilátero, "O triângulo é isósceles" se o triângulo
for isósceles ou "O triângulo é escaleno", se o triângulo for escaleno. */

#include <stdio.h>

int main(void) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z) {
        printf("O triângulo é equilátero");
    } else if (x == y || y == z || x == z) {
        printf("O triângulo é isósceles");
    } else {
        printf("O triângulo é escaleno");
    }

    return 0;
}
