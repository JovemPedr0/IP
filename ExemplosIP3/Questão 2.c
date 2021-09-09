#include <stdio.h>

int main(void){
    float altura, peso;
    float imc;

    printf("Bem Vindo ao calculador de IMC!\n\n\n");

    printf("Para iniciarmos, insira a sua altura em metros:");
    scanf("%f", &altura);

    printf("Insira o seu peso em kilogramas:");
    scanf("%f", &peso);

    imc= peso/(altura*altura);
    printf("O seu IMC:(%.3f)\n",imc);

    if(imc <= 18.5){
        puts("Abaixo do peso");
    }else if(18.5 < imc && imc <= 25){
        puts("Peso normal");
    }
    else if(25 < imc && imc<=30){
        puts("Sobrepeso, fica atento!");
    }
    else if(imc > 30){
        puts("Obesidade, vamos se cuidar!");
    }


    return 0;
}
