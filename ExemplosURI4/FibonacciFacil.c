#include <stdio.h>
#include <stdlib.h>

int main (){
    int i , n, anterior=0, sucessor=1, f;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        if ( i == 1 ){
            printf("%d ", anterior);
        }else if( i == 2 ){
            printf("%d ", sucessor);
        }else {
            f = anterior + sucessor;
            anterior = sucessor;
            sucessor = f;

            if (i == n){
            printf("%d\n", f);
            } else{
            printf("%d ", f);
            }
        }  
    }

      
    
    return 0;
}
