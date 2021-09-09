#include <stdio.h>


int main(void){
    int i;

    scanf("%d", &i);

    for (i <= 10; i++;){
        i = i / i;
        printf("%d", i);
    }



    return 0;
}
