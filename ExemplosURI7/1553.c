#include <stdio.h>

int main (){

    int i, nCasos, PerguntasInseridas, Criterios, ContadorFrequencia = 0;

    while(1){

        scanf("%d %d", &nCasos, &Criterios);
        
        if(nCasos == 0 && Criterios == 0){
            break;
        }
        
        int ar[1000];

        for (i = 0; i < nCasos; i++){
            ar[i] = 0;
        }

        ContadorFrequencia = 0;

        for (i = 0; i < nCasos; i++){
            scanf("%d", &PerguntasInseridas);

            // é preciso colocar esse -1 aqui pois o uri vai entrar dados
            // de 1 a 1000, e os arrays em C começam do 0, indo de 0 a 999
            ar[PerguntasInseridas - 1]++;
        }

        for (i = 0; i < nCasos; i++){
            if(ar[i] >= Criterios){
               ContadorFrequencia++;
            }
        }
        printf("%d\n", ContadorFrequencia);
    }
    return 0;
}