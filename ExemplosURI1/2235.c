#include <stdio.h>

int main(void){
   int  A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    if(A == B || A == C ){
        puts("S");
    }
    else if( A + B == C || A + C == B || C + B == A ){
      puts("S");
    }
    else{
        puts("N");
    }


   return 0;
}
