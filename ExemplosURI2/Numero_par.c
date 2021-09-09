//Faça um programa que mostre os números pares entre 1 e 100, inclusive.
#include <stdio.h>


int main(void){
    int p;

    for(p = 1; p <= 100; p= p+1){
     if (p % 2 == 0){
         printf("%d\n", p);
     }
     
    }
    

    return 0;
}