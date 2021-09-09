#include <stdio.h>
#include <math.h>

int main(void){
   float a, b, c;
   float delta, x1, x2;

    puts("Calculatron 2077\n\n");

    printf("Digite o Valor de a: ");
    scanf("%f", &a);

    if (a == 0){
       puts("A nao pode ser igual a zero");
        return 1;
    }
    else{
    printf("Digite o Valor de b: ");
    scanf("%f", &b);

    printf("Digite o Valor de c: ");
    scanf("%f", &c);

    }

    delta = b*b - 4*a*c;
    printf("delta:(%.1f)\n", delta);
    if(delta < 0){
        puts("nao existe raiz negativa");
        return 2;
    }else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %f\nx2 = %f", x1, x2);


    }


    return 0;
}
