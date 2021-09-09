#include <stdio.h>

int main(){
    int ar[5] = {1, 2, 3, 4, 5};
    int i, *p = &ar[0];
    
    for(i = 0; i < 5; i++){
        printf("%d / %d\n", ar[i], *(p + i));
    }

    return 0;
}