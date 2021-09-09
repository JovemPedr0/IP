#include <stdio.h>

int main(void){
    float raio, diametro;
    float area, perimetro;

    printf("Calcularemos o raio, a area e o perimetro, pelo diametro!\n\n");

    printf("Insira o valor do diametro:");
    scanf("%f", &diametro);

    raio= diametro/2;
    printf("raio:(%.3f)\n", raio);

    area= 3.14 * raio*raio;
    printf("area:(%.3f)\n", area);

    perimetro= 2 * 3.14 * raio;
    printf("O perimetro:(%.3f)\n", perimetro);

    return 0;
}
