#include <stdio.h>

int main (){
    int tent,x, i, soma=0;

    scanf("%d", &tent);

    while (tent > 0){
        tent --;

        scanf("%d", &x);
        soma = 0;

        for (i = 1; i < x; i++){
            if(x % i == 0){
            soma += i;
            }
        }
        if(soma == x){
            printf("%d eh perfeito\n", x);
        }
        else if(soma != x){
            printf("%d nao eh perfeito\n", x);
        }
       
    }
    
    return 0;
}

   