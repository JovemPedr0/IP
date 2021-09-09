#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int nIdas, qtdProdts, i, j, nFrutasDesj;
    char frutas[50][100];
    float preco[100];
    char frutasdesejadas[100];
    int qtdResp;
    double total = 0;


    scanf("%d", &nIdas);

    while(nIdas--){
        scanf("%d", &qtdProdts);
        total = 0;

        for(i = 0; i < qtdProdts; i++){
            scanf("%s %f", frutas[i], &preco[i]);
        }

        scanf("%d", &nFrutasDesj);
        
        for(i = 0; i < nFrutasDesj; i++){
            scanf("%s %d", frutasdesejadas, &qtdResp);
            for(j = 0; j < qtdProdts; j++){
                if (strcmp(frutasdesejadas, frutas[j]) == 0){
                    total += preco[j] *  qtdResp;
                }
            }
        }

        

    printf("R$ %.2lf\n", total);
    }

    return 0;
}
 
