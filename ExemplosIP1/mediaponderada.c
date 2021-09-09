#include <stdio.h>

int main(void){
    float media1, media2, media3, media4;
    float mediatotal;

    printf("Calcularemos o valor de sua media anual!\n\n\n");

    printf("Insira o valor de sua media no primero bimestre:");
    scanf("%f", &media1);

    printf("Insira o valor de sua media no segundo bimestre:");
    scanf("%f", &media2);

    printf("Insira o valor de sua media no terceiro bimestre:");
    scanf("%f", &media3);

    printf("Insira o valor de sua media no quarto bimestre:");
    scanf("%f", &media4);

    mediatotal= (media1*1.0 + media2*2.0 + media3*3.0 + media4*4.0)/10;
    printf("Sua media total:(%.1f)\n", mediatotal);


    return 0;
}
