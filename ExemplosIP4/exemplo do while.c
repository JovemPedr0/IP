#include <stdio.h>

int main(void){
    int n;

    n = -1;
    do{
        printf("Digite n:");
        scanf("%d", &n);
        printf("n = %d\n", n);

    }while (n != 0);

    return 0;
}
