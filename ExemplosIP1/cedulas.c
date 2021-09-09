#include <stdio.h>

int main(void){
    int valor, quantidade, resto;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    quantidade = valor/200;
    resto = valor % 200;
    printf("%d notas de 200R$\n", quantidade);

    valor = resto;
    quantidade = valor / 100;
    resto = valor % 100;
    printf("%d notas de 100R$\n", quantidade);


    valor = resto;
    quantidade = valor / 50;
    resto = valor % 50;
    printf("%d notas de 50R$\n", quantidade);

    valor = resto;
    quantidade = valor / 20;
    resto = valor % 20;
    printf("%d notas de 20R$\n", quantidade);

    valor = resto;
    quantidade = valor / 10;
    resto = valor % 10;
    printf("%d notas de 10R$\n", quantidade);

    valor = resto;
    quantidade = valor / 5;
    resto = valor % 5;
    printf("%d notas de 5R$\n", quantidade);

    valor = resto;
    quantidade = valor / 2;
    resto = valor % 2;
    printf("%d notas de 2R$\n", quantidade);

    valor = resto;
    quantidade = valor / 1;
    resto = valor % 1;
    printf("%d notas de 1R$\n", quantidade);


    return 0;
}
