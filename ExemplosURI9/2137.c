#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int nCasos, i;
    char registro[1000][1000];
    char aux[1000];
    int trocou;

    while(scanf("%d", &nCasos) != EOF){
        
        for(i = 0; i < nCasos; i++){
            scanf("%s", registro[i]);
        }
        
        while(1){

            trocou = 0;
            for(i = 0; i < nCasos-1; i++){
                if(strcmp(registro[i], registro[i + 1]) > 0){
                    strcpy(aux, registro[i]);
                    strcpy(registro[i], registro[i + 1]);
                    strcpy(registro[i + 1], aux);
                    
                    trocou = 1;
                }
            }

            if(trocou == 0){
                break;
            }
        }    
        
        for(i = 0; i < nCasos; i++){
            printf("%s\n", registro[i]);
        }

    }
    


    return 0;
}