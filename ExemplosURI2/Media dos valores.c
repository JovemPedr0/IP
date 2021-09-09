#include <stdio.h>

int main(void){
    int n, soma, contador, media;

    scanf("%d", &n);
    soma = 0;
    contador = 0;

    while(n > 0){
    
        soma = soma + n;
        media = (soma + n)/n; 
        scanf("%d", &n);
        contador = contador + 1;
    }

    printf("Soma dos valores de n: %d\n", soma);
    printf("Media dos valores de n: %d\n", media);
    printf("O while se repetiu %d vezes.\n", contador);
    return 0;
}
