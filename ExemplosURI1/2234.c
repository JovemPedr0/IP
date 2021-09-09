#include <stdio.h>

int main(void){
    double media;
    int h , p;

    scanf("%d%d", &h, &p);

    media = h*1.0 / p;

    printf("%.2lf\n", media);

    return 0;
}
