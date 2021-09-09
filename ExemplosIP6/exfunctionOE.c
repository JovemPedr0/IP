#include<stdio.h>
#include<stdlib.h>

int EhPar(int n){
    if ( n % 2 == 0 ){
        puts("Odd");
        return 1;
    }
    else{

        puts("Even");
        return 0;   
    }
       
}

int main (){
    int n, test;

    scanf("%d", &test);

    while (test--){ 
        scanf("%d", &n);
        EhPar(n);
    }
    
}