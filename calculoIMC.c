/* Crie um programa na linguagem C que receba dois valores, a e p, que representam a altura (em centímetros) e o peso (em quilogramas), respectivamente, de um indivíduo. Com base
nesses valores, calcule o Índice de Massa Corpórea (IMC) desse indivíduo e faça a sua respectiva interpretação. Se o IMC for menor que 18.5, apresente a mensagem "Magreza". Se o IMC
for maior ou igual a 18.5 e menor que 25, apresente a mensagem "Normal". Se o IMC for maior ou igual a 25 e menor de 30, apresente a mensagem "Sobrepeso". Se o IMC for maior ou igual 
a 30 e menor que 40, apresente a mensagem "Obeseidade". Se o IMC for maior ou igual a 40, apresente a mensagem "Obesidade grave". */

int main(void){
    float a, p, imc;

    scanf("%f %f", &a, &p);

    a /= 100;
    imc=p/(a*a);

    if(imc < 18.5){
        puts("Magreza");
    }
    else if(imc >= 18.5 && imc < 25){
        puts("Normal");
    }
    else if(imc >= 25 && imc < 30){
        puts("Sobrepeso");
    }
    else if(imc >= 30 && imc < 40){
        puts("Obesidade");
    }
    else if(imc >= 140){
        puts("Obesidade grave");
    }

    return 0;
}
