//Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
//Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
#include <stdio.h>

int main(void){
    int x, y, soma = 0, i;

    x = y = 1;
    
    while (x > 0 && y > 0){
        scanf("%d %d", &x, &y);
        soma = 0;

        if(x < y && x > 0){
            for (i = x; i <= y; i = i + 1){
                printf("%d ", i);
                soma = i + soma;
            }     
        }
    
       if(x > y && y > 0){
            for (i = y; i <= x; i = i + 1){
                printf("%d ", i);
                soma = i + soma;
            } 
        }
        if(soma > 0){
            printf("Sum=%d\n", soma);
        }  
    }
    
    return 0;
}