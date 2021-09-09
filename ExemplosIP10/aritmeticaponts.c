#include <stdio.h>

int main(){
    double i, *p;

    p = &i;
    printf("p = %p\n", p);
    p = p + 2; 
    printf("p = %p\n", p);

    return 0;
}

#include <stdio.h>

int main(){
    double a, b;
    double *p1, *p2;
    int r;

    p1 = &a;
    p2 = &b;
    r = p2 - p1;
    printf("r = %d\n", r);

    return 0;
}
