#include <stdio.h>

int main() {
    int n=1, i, resultado, mary=0, john=0;
    
        
        while (n > 0){
        scanf("%d", &n);
            
            mary = 0;
            john = 0;
            for ( i = 0; i < n; i++){
                scanf("%d", &resultado);
                    if(resultado == 0){
                        mary ++;
                    }else{
                        john++;
                    }
            }
       
        if (n != 0){
          printf("Mary won %d times and John won %d times\n", mary, john);  
        }
        
        }
        
    return 0;
}