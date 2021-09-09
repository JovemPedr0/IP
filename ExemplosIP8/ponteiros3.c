#include <stdio.h>

int main(){
    int i = 7;
    int *p = NULL;

    p = &i;
    *p = 5;
    p = NULL;

    printf("valor de i: %d\n", i);

    return 0;
}