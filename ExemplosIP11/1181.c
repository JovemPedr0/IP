#include <stdio.h>

int main(){
    int l, i, j;
    char op;
    double m[12][12], soma = 0;

    scanf("%d%*c", &l);
    scanf("%c", &op);

    for (i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    
    for(j = 0; j < 12; j++){
        soma += m[l][j];
    }

    if(op == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12);
    }

    return 0;
}