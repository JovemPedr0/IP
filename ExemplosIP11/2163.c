#include <stdio.h>
#include <stdbool.h>

int main(){
    int linhas, colunas, i, j, eixox = 0, eixoy = 0;
    int Varredura[1001][1001];
    bool localizado;

    scanf("%d %d", &linhas, &colunas);

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            scanf("%d", &Varredura[i][j]);
        }
    }
    
    for (i = 1; i < linhas-1; i++){
        for (j = 1; j < colunas-1; j++){
            if (Varredura[i][j] == 42){
                if (Varredura[i-1][j-1] == 7 && Varredura[i+1][j+1] == 7  && Varredura[i][j+1] == 7 && Varredura[i][j-1] == 7 && Varredura[i-1][j] == 7 && Varredura[i + 1][j] == 7 && Varredura[i-1][j+1] == 7 && Varredura[i+1][j-1] == 7){
                    localizado = true;
                    eixox = i + 1;
                    eixoy = j + 1;
                    break;
                }  
            }  
        }
    }
    if(localizado == true){
        printf("%d %d\n", eixox , eixoy);
    }else{
        printf("0 0\n");
    }
    

    return 0;
} 
