/**
 ============================================================================
 Nome      : Eqsegrau.c
 Autor     : Pedro Lucas Valeriano de Mira
 Matricula : 20200015969
 Descricao : O programa calcula raizes de um eq do segundo grau.
 ============================================================================
*/


#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    float delta;
        delta = b*b - 4*a*c;
    return delta;    
}

/*
esse asterisco antes da variavel, significa que irá acessar o endereço apontado pelo ponteiro e alterar seu valor.
*/
int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){
    float deltx = Delta(a, b, c);
        if(deltx < 0) return -2;
        if(a <= 0) return -1;
        *x1 = (-b + sqrt(deltx))/(2*a); 
        *x2 = (-b - sqrt(deltx))/(2*a); 
    return 0;
}

int main (){
    float a, b, c;
    float x1 = 1, x2 = 2;
    float calculo;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

/*
    o caractere & significa que ira entrar no seu endereçamento de memoria e retorna o seu valor.
*/
    calculo = ResolveEquacao2Grau(a, b, c, &x1, &x2);
    if(calculo == -2){
        puts("delta negativo!");
    }
    if (calculo == -1){
        puts("Com 'a' menor que zero n eh possivel");
    }
    if(calculo == 0){
    printf("Valor das raizes, x1 = %f e x2 = %f\n", x1, x2);
    }

    return 0;
}
