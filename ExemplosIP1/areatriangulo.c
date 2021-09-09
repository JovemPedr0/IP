#include <stdio.h>

int main(void){
    int base, altura;
    float area;

    printf("Calcularemos a area do triangulo!\n \n \n");

    printf("Insira o valor da base:");
    scanf("%d", &base);

    printf("Insira o valor da altura:");
    scanf("%d", &altura);

    area= base * altura/2.0;
    printf("area:(%.2f)\n", area);

    return 0;
}
