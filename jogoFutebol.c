/* Crie um programa na linguagem C que receba dois valores inteiros que representam a quantidade de gols feitos pelos times referentes ao placar final de uma partida de futebol dos
times Varões de Fogo e Ungidos do Senhor. Apresente a mensagem "Varões de Fogo venceu!" (ou "Ungidos do Senhor") se a quantidade de gols do time Varões de Fogo (ou Ungidos do Senhor)
for maior que a quantidade de gols do time Ungidos do Senhor (ou Varões de Fogo). Se ambos os times tiverem a mesma quantidade de gols, então apresente a mensagem "Deu empate e todos
foram arrebatados!". */

#include <stdio.h>

int main(void){
    int varoes, ungidos;

    scanf("%d %d", &varoes, &ungidos);

    if(varoes > ungidos){
        puts("Varoes de Fogo venceu!");
    }
    else if(ungidos > varoes){
        puts("Ungidos do Senhor venceu!");
    }
    else if(ungidos == varoes){
        puts("Deu empate e todos foram arrebatados!");
    }

    return 0;
}
