/* Escreva um programa em linguagem C que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0, 25], (25, 50], (50, 75], (75, 100]) este valor se encontra. Se o valor não estiver em nenhum
destes intervalos, deverá ser impressa a mensagem "Fora de intervalo". Observação: o símbolo "(" representa "maior que". Por exemplo, [0, 25] indica valores entre 0 . 25.00000, inclusive eles. Já (25, 50] indica valores maiores
que 25.00000 até o valor 50.00000.*/
/* Beecrowd: Intervalo (1037) */

#include <stdio.h>

int main(void){
    float n;
    
    scanf("%f", &n);
    
    if(n >= 0.00000 && n <= 25.00000)
        printf("Intervalo [0, 25]");
    else if(n > 25.00000 && n <= 50.00000)
        printf("Intervalo (25, 50]");
    else if(n > 50.00000 && n <= 75.00000)
        printf("Intervalo (50, 75]");
    else if(n > 75.00000 && n <= 100.00000)
        printf("Intervalo (75, 100]");
    else
        printf("Fora de intervalo");
    
    return 0;
}
