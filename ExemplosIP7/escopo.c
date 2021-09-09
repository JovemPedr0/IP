//Estudo sobre Escopo de funções

/*
Variáveis de duração fixa permanecem alocadas, no mesmo espaço
de memória, durante toda a execução do programa.

Variáveis de duração automática permanecem alocadas apenas
durante a execução do bloco no qual ela é definida, 
com o uso 'static' preserva-se o valor da variavel entre execuções de blocos ou funções.
*/

#include <stdio.h>

float g = 1.5;//Escopo Global

int MinhaFuncao(int x){//Escopo de Bloco
    int a = 1;//Escopo de Bloco
    a++;

    return x * a;
}

int main(){
    int a;//Escopo de Bloco

    scanf("%d", &a);
    if(a % 2 == 0){
        int b, i;//Escopo de Bloco
        for (i = 0; i < a; i++){
            b = MinhaFuncao(a);
            printf("b = %d\n", b);
        }
    }
    printf("a = %d, g = %.1f\n", a, g);
    return 0;
}