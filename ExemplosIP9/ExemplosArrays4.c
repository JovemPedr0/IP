#include <stdio.h>

int main(){

int ar[5] = { 1, -1, 2, 0, 4 }, i;

/* Exibe o array do primeiro ao último elemento */
    for (i = 0; i < 5; ++i) {
        printf("ar[%d] = %2d\n", i, ar[i]);

    }
    printf("\n\n"); 
    /* Pula duas linhas */

/* Exibe o array do último ao primeiro elemento */
    for (i = 4; i >= 0; --i) {
        printf("ar[%d] = %2d\n", i, ar[i]);
    }
return 0;
}