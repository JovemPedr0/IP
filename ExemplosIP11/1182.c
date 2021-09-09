#include <stdio.h>

int main(){
    int coluna, i, j;
    char TipoOperacao;
    double Matriz[12][12], soma = 0;

    scanf("%d%*c", &coluna);
    scanf("%c", &TipoOperacao); 

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &Matriz[i][j]);
        }
    }
    
    for (i = 0; i < 12; i++){
        soma += Matriz[i][coluna];
    }

    if (TipoOperacao == 'S'){
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma/12);
    }
    
    return 0;
}