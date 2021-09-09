/**
 ============================================================================
 Nome      : pitagoras.c
 Autor     : Pedro Lucas Valeriano de Mira
 Matricula : 20200015969
 Descricao : O programa le tres lados de um triangulo e verifica se é retangulo ou não, 
 caso não seja calculo o valor proximo para se tornar.
 ============================================================================
*/

#include <stdio.h>
#include <math.h>

/*
Função que faz o calculo do novo lado para formar um triangulo retangulo.
Sabendo que a formula é catetoOp² + catetoAdj² = hipotenusa²
é feito permuta entre as variaveis para encontrar o lado correto que é retornado na variavel nValor.
Caso o existam mais de um lado negativo, a função retorna -1.
*/

float FormaTrianguloRetangulo(float a, float b, int c){  
    float nValor;
        if (a < 0){
            nValor = sqrt((c*c) - (b*b));
        }
        if (b < 0){
            nValor = sqrt((c*c) - (a*a));  
        }
        if (c < 0){
            nValor = sqrt((a*a) + (b*b));  
        }
        if(a < 0 && b < 0 || a < 0 && c < 0 || b < 0 && c < 0){
            return -1;
        }
    return nValor;
}   

/*
Função que verifica se o triangulo é retangulo pela formula, 
com os valores inseridos por meio da formula.
Ela retorna '1' se for retangulo e '0' se não for.
*/

float EhTrianguloRetangulo(float a, float b, float c){
    float TrianguloRetangulo;
        if((a*a) + (b*b) == (c*c)){
            TrianguloRetangulo = 1;
        }else{
            TrianguloRetangulo = 0;
        }
    return TrianguloRetangulo;
}

int main(){
    float Hipotenusa, CatetoOp, CatetoAdj, CondEx;
    double NovoV;

    /*
    São inseridos os valores dos lados e armazenado em suas devidas variaveis
    */
    printf("Digite o valor da Hipotenusa: ");
    scanf("%d", &Hipotenusa);
    printf("Digite o valor do Cateto oposto: ");
    scanf("%d", &CatetoOp);
    printf("Digite o valor da Cateto adjacente: ");
    scanf("%d", &CatetoAdj);

    /*
    Verifica o retorno da função 'EhTrianguloRetangulo' para informar ao usuario se é retangulo ou não.
    */
    CondEx = EhTrianguloRetangulo(CatetoOp, CatetoAdj, Hipotenusa);
    if (CondEx == 1){
        puts("Eh Triangulo Retangulo");
    }else if(CondEx == 0){
        puts("N eh Triangulo Retangulo");
    }
    /*
    Caso o retorno da função EhTrianguloRetangulo seja igual a 0, ele chama a função FormaTrianguloRetangulo
    para o calculo do novo lado, se o retorno da função FormaTrianguloRetangulo for igual a 0 ele calcula, se for igual a -1
    não é calculado por existir mais de um lado negativo.
    */
    if(CondEx == 0){
        if (Hipotenusa < 0 || CatetoOp < 0 || CatetoAdj < 0){
            NovoV = FormaTrianguloRetangulo(CatetoOp, CatetoAdj, Hipotenusa);
            printf("Novo Valor para formar um triangulo retangulo: %.2lf\n", NovoV);
        }

        if (NovoV == -1){
            printf("N pode ser calculado!.\n");
        }
    }
    return 0;
}