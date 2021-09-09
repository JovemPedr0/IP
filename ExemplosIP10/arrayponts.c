#include <stdio.h>

int main(){
    int ar[5] = {1, 2, 3, 4, 5};
    int *p1, *p2, *p3;
    int r;
    
    p1 = &ar[0];
    p2 = &ar[1];
    p3 = &ar[3];
    
    p1++;
    r = p3 - p2;
    
    printf("*p1 = %d\n", *p1);
    printf("r = %d\n", r);
    
    return 0;
}

