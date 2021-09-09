/**
 ============================================================================
 Nome      : CalculoHex.c
 Autor     : Pedro Lucas Valeriano de Mira
 Matricula : 20200015969
 Descricao : O programa calcula a area e perimetro por meio de ponteiros.
 ============================================================================
*/

#include <stdio.h>
#include <math.h>

/*
esse asterisco '*' antes da variavel, significa que irá acessar o endereço apontado pelo ponteiro e alterar seu valor.
*/
void CalculaHexagono(float l, float *area, float *perimetro){
    *area = (3*(l*l)*sqrt(3)) / 2;
    *perimetro = 6*l;
}

int main(){
    float lado;
    float area = 0, perimetro = 0;

    scanf("%f", &lado);
/*
o caractere & significa que irá entrar no seu endereçamento de memória e retorna o seu valor.
*/
    CalculaHexagono(lado, &area, &perimetro);
    printf("area = %f, perimetro = %f\n", area, perimetro);

    return 0;
}