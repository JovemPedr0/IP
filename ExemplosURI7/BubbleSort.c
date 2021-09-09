#include <stdio.h>

int main(){
    int ar[10] = {0}, i, nCasos, aux, trocas = 0;


    while (1){
        trocas = 0;
        scanf("%d", &nCasos);

        for (i = 0; i < nCasos; i++){
            scanf("%d", &ar[i]);
        }

       /*  for (i = 0; i < nCasos; i++){
            printf("[%d] = %d\n", i, ar[i]);
        } */

        for (i = 0; i < nCasos - 1; i++){
            if (ar[i] > ar[i + 1]){
                aux = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = aux;
                trocas++;
            }
            
        }

        if(trocas == 0){
            break;
        }
    }
    for (i = 0; i < nCasos; i++){
        printf("[%d] = %d\n", i, ar[i]);
    }
    printf("%d\n", trocas);
    

    return 0;
}