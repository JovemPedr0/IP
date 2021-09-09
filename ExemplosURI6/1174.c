#include <stdio.h>

#define VALOR_ARRAY 100

int main (){
    double vetor[VALOR_ARRAY];
    int i;

    for (i = 0; i < VALOR_ARRAY; i++){
        scanf("%lf", &vetor[i]);
    }
    for (i = 0; i < VALOR_ARRAY; i++){
        if(vetor[i] <= 10){
            printf("A[%d] = %.1lf\n", i, vetor[i]);
        }
    }
    
    return 0;
}