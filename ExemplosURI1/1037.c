#include <stdio.h>

int main(void){
    double X;

    scanf("%lf", &X);

    if (X >= 0 && X <= 25){
        puts("Intervalo [0,25]");
    }
    else if(X > 25 && X <= 50){
        puts("Intervalo (25,50]");
    }
    else if(X > 50 && X <= 75){
        puts("Intervalo (50,75]");
    }
    else if(X > 75 && X <= 100){
        puts("Intervalo (75,100]");
    }
    else{
        puts("Fora de intervalo");
    }


    return 0;
}
