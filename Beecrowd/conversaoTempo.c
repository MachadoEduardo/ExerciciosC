/* Crie um programa na linguagem C que receba como entrada um valor inteiro, que é o tempo de duração em segundos de um evento em uma fábrica, e informe-o expresso no formato "horas:minutos:segundos". */
/* Beecrowd: Conversão de Tempo (1019) */

#include <stdio.h>

int main()
{
    int n, horas, minutos, segundos;
    
    scanf("%d", &n);
    
    segundos = n % 60;
    minutos = (n / 60) % 60;
    horas = n / 3600;
    
    printf("%02d:%02d:%02d", horas, minutos, segundos);
}
