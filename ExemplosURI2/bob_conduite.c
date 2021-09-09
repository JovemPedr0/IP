#include <stdio.h>
int t;
int r1, r2;

int main(void){
    scanf("%d", &t);

    while (t != 0){
        scanf("%d%d", &r1, &r2);
        printf("%d\n", r1 + r2);
        t = t - 1;
    }
    
    

    return 0;
}
