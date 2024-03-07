/* Crie um programa na linguagem C que calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gastos (em litros). */
/* Beecrowd: Consumo (1014)*/

#include <stdio.h>

int main()
{
    int distanciaPercorrida; 
    float combustivelGasto, consumoMedio;
    
    scanf("%d %f", &distanciaPercorrida, &combustivelGasto);
    
    consumoMedio = distanciaPercorrida/combustivelGasto;
    
    printf("%.3f km/l", consumoMedio);
}
