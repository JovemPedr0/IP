#include <stdio.h>

int main(){
    int ar[5] = {1, 2, 3, 4, 5};
    int *p;

    p = &ar[0];
    p = ar;

    printf("*p = %d\n", p[2]);

    return 0;
}