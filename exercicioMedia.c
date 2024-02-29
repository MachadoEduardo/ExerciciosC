/* 	Crie um programa na linguagem C o qual tenha como entrada dois valores iniciais: as notas das duas provas de um aluno. Caso a média desses valores seja igual a 10, 
apresente na tela: "Discente aprovado com louvor, média: 10.0"; se a média for maior ou igual a 7.0 e menor que 10.0, apresente na tela: "Discente aprovado com média: "; 
se a média for maior ou igual a 3.0  e menor que 7.0, apresente na tela: "Discente em exame com média: "; se a média for igual ou maior que 0 e menor que 3.0, apresente na 
tela: "Discente reprovado com média: ";
	Caso o aluno tenha ficado de exame, ele irá digitar sua nota na prova de exame, após fazer novamente a média o aluno tem que possuir média maior que 5.0, apresentando
na tela a mensagem: "Discente aprovado com média: "; se ele possuir média menor que 5.0 apresente na tela a mensagem: "Discente reprovado com média: ". */

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
