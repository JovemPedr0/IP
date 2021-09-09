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

    return 0;
}
