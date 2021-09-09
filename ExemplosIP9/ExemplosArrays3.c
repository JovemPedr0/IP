#include <stdio.h>

int EhPar(int n){
    return n % 2 == 0;
}

int main(){
    int valor[5];
    int i, soma = 0, qPares = 0;
    
    for(i = 0 ; i < 5; i++){
        scanf("%d", &valor[i]);
    }
    
    for(i = 0; i < 5; i++){
        soma += valor[i];
        if (EhPar(valor[i])){
            qPares++;
        }
    }
    
    printf("Media dos valores: %.1f\n", soma/5.0);
    printf("Quantidade de numeros pares: %d\n", qPares);

    return 0;
}