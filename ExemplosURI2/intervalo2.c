//Leia um valor inteiro N. 
//Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
//Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

#include <stdio.h>
int n, x, i, contin, contout;

int main(void){
    scanf("%d", &n);

    contin = 0;
    contout = 0;

    for ( i = 1; i <= n; i= i + 1){
       scanf("%d", &x);
       
       if(x >= 10 && x <=20){
           contin= contin + 1;
       }
       if(x < 10){
           contout= contout + 1;
       }
        if(x > 20){
           contout= contout + 1;
       }
    
    }
    
    printf("%d in\n", contin);
    printf("%d out\n", contout);

    return 0;
}