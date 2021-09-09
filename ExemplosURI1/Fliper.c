#include <stdio.h>

int main(void){
    int P , R;

    scanf("%ld%ld", &P, &R);

    if( P == 1 && R == 0){
        puts("B");
    }
    else if(P == 1 && R == 1){
        puts("A");
    }
    else if(P == 0 && R == 0){
        puts("C");
    }
    else if (P == 0 && R == 1){
        puts("C");
    }


    return 0;
}
