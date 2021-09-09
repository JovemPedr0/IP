#include <stdio.h>
int n, x, i;

int main(void){

    scanf("%d", &n);

    for ( i = 1; i <= n; i = i + 1){
     scanf("%d", &x);
        if(x == 0){
            puts("NULL");
        }
        if(x % 2 == 0 && x > 0){
            puts("EVEN POSITIVE");
        }
        if(x % 2 == 0 && x < 0){
            puts("EVEN NEGATIVE");
        }
        if(x % 2 != 0 && x > 0){
            puts("ODD POSITIVE");
        }
        if(x % 2 != 0 && x < 0){
            puts("ODD NEGATIVE");
        }  
    }

    return 0;
}
