/* Crie um programa na linguagem C que receba como entrada duas notas (0.0 <= n1, n2 <= 10) e calcule a média (m) dessas notas.
Se m = 10, apresente a mensagem "Discente aprovado com louvou, média: 10.0". Se 7 <= m < 10, apresente a mensagem "Discente aprovado
com média: " seguida da média calculada. Se 0 <= m < 3, apresente a mensagem "Discente reprovado com média: "seguida da média 
calculada. Se 3 <= m < 7, apresente a mensagem "Discente em exame com média: " seguida da média calculada, então deve ser apresentada
a seguinte mensagem "Digite a nota do exame: ". Se a divisão por 2 da soma da média com a nota do exame for maior que 5, apresente a 
mensagem "Discente aprovado com média: " seguida de m, caso contrário, apresente a mensagem "Discente reprovado com média: " seguida
do valor de m. Atenção, o valor da média armazenado em m deve ser apresentado com apenas um número após a vírgula. */

#include <stdio.h>

int main(void){
    float n1, n2, m, ex, exame;
		scanf("%f", &n1);
		scanf("%f", &n2);
		m=(n1+n2)/2;
		if(m==10){
			puts("Discente aprovado com louvor, media: 10.0");
		}
		else if(m>=7 && m<10){
			printf("Discente aprovado com media: %.1f\n", m );
		}
		else if(m>=0 && 3>m){
			printf("Discente reprovado com media: %.1f\n", m);
		}
		else if(3<=m && m<7){
			printf("Discente em exame com media: %.1f\n" ,m);
            printf("Digite a nota do exame: ");
            scanf("%f", &ex);
            exame=(ex+m)/2;
            if(exame>5){
                printf("Discente aprovado com media: %.1f\n", exame);
            }
            else{
			printf("Discente reprovado com media: %.1f\n", exame);
            }
		}

    return 0;
}
