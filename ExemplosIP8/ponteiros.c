#include <stdio.h>

int main(void){
    int i = 0;
    float b = 2.5;
    int *p = NULL;

    printf("end de i: %p\n", &i);
    printf("end de b: %p\n", &b);

    p = &i;
    printf("valor de *p: %d\n", *p);
    *p = 5;
    printf("end de i: %d\n", i);

    return 0;
}