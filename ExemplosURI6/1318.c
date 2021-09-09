#include <stdio.h>

int main(){
    
    int nBilhetesO = 1, nPessoas = 1, i, BilhetesRecebidos; 
    int ar[2001] = {0}, nBilhetesFalsos, j;

    while (nBilhetesO != 0 && nPessoas != 0){

        scanf("%d %d", &nBilhetesO, &nPessoas);

        nBilhetesFalsos = 0;

        for(j = 0; j < 2001; j++){
            ar[j] = 0;
        }

        if(nBilhetesO == 0 && nPessoas == 0){
            break;
        } 

        for (i = 0; i < nPessoas; i++){
            scanf("%d", &BilhetesRecebidos);
            ar[BilhetesRecebidos]++;
        }
        for (i = 1; i <= 2000; i++){
            if(ar[i] > 1){
                nBilhetesFalsos++;
            }
        }
        printf("%d\n", nBilhetesFalsos);
        
    }

    return 0;
}