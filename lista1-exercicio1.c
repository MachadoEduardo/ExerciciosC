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
