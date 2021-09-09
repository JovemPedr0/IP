#include <stdio.h>

int main(){
    int nAlunos, i, j, aux, elementosTrocas = 0, nTestes;
    int notas[1000] = {0};
    int notasduplicadas[1000] = {0};

    scanf("%d", &nTestes);

    while(nTestes--){

        scanf("%d", &nAlunos);

        elementosTrocas = 0;

        for (i = 0; i < nAlunos; i++){
            notas[i] = notasduplicadas[i] = 0;
        }

        for (i = 0; i < nAlunos; i++){
            scanf("%d", &notas[i]);
            notasduplicadas[i] = notas[i];
        }
        
        for (i = 0; i < nAlunos; i++){
            for(j = 0; j < nAlunos; j++){
                if (notas[i] > notas[j]){
                    aux = notas[i];
                    notas[i] = notas[j];
                    notas[j] = aux; 
                }
            }    
        }
        
        for (i = 0; i < nAlunos; i++){
            if(notasduplicadas[i] == notas[i]){
                elementosTrocas++;
            }
        }
        
        printf("%d\n", elementosTrocas);

    }

    return 0;
}