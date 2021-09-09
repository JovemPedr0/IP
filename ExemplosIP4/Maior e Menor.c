#include <stdio.h>

int main(void){
    int x, maior, menor;

    scanf("%d", &x);
    maior = x;
    menor = x;
    while (x != 0){
        if(x > maior){
            maior = x;
        }
        if (x < menor){
            menor = x;
        }
        scanf("%d", &x);
    }
    printf("Maior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);


    return 0;
}
