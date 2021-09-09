#include <stdio.h>

int main(void){

    float base, altura, area, litrosnalata, rendimento, latas;

        printf("Insira o valor em metros da base:");
        scanf("%f", &base);

        printf("Insira o valor da altura em metros:");
        scanf("%f", &altura);

        printf("Insira a quantidade da litrosnalata:");
        scanf("%f", &litrosnalata);

        printf("Insira o rendimento da lata, em metros quadrados:");
        scanf("%f", &rendimento);

        area = (base*altura);
        printf("area(%.1f)\n",area);

        latas = (area/(rendimento*litrosnalata));
        printf("latas(%.1f)\n", latas);


    return 0;
}
