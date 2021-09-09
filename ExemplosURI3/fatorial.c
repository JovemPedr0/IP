#include <stdio.h>

int main (){
    int x,fat = 1;

    scanf("%d", &x);
    
        if(x > 0 && x < 13){
            for (fat = 1; x > 1; x--){                
                   fat = fat * x;
                  
            }
            
         printf("%d\n", fat);
        }
    return 0;
}
