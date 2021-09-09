#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

float Delta(float a, float b, float c){
    float delta;
        delta = b*b - 4*a*c;
    return delta;
}
float X1(float a, float b, float delta){ 
    float x1;
        x1 = (-b + sqrt(delta)) / (2*a);
    return x1;
}
float X2(float a, float b, float delta){ 
    float x2;
        x2 = (-b - sqrt(delta)) / (2*a);
    return x2;
}


int main(){
    float a, b, c;
    float delta, x1, x2;

    puts("Bem Vindo ao Delta X!\n");

    printf("Digite o valor de a: ");// Aqui será inserido o valor de A que representa o numero que multiplica x^2
    scanf("%f", &a);
    if(a == 0){// Caso a=0, não existe equação
        puts("A=0 n forma equacao!");
        return 1;
    }
    printf("Digite o valor de b: ");// Aqui será inserido o valor de B que representa o numero que multiplica x
    scanf("%f", &b);
    printf("Digite o valor de c: ");// Aqui será inserido o valor de C.
    scanf("%f", &c);
    
    delta = Delta(a, b, c);// Aqui é calculado o valor de delta pela chamada da função.
    if(delta < 0){// Se Delta for negativo, não existe raiz de numero negativo!
        puts("Com Delta menor que zero, n eh possivel calcular raiz!");
        return 2;
    }

    x1 = X1(a, b, delta);// Aqui é calculado o valor de x pela chamada da função.

    x2 = X2(a, b, delta);// Aqui é calculado o valor de x' pela chamada da função.
    
    

    printf("x1 = %.1f\nx2 = %.1f\n", x1, x2);// é imprimido na tela o valor de x e x' e acaba o programa.
    
    puts("Obrigado!");

    return 0;
}
