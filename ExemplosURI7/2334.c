#include <stdio.h>

int main(){
    unsigned long long Patos;


    while(1){
        scanf("%llu", &Patos);
        if(Patos == -1){
            break;
        }
        if(Patos == 0){
            puts("0");
        }
        if (Patos != 0){
            printf("%llu\n", Patos - 1);
        }
        
        
    }
    return 0;
}