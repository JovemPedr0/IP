#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, j;
    int nTestes, nViagens, pesoMax, pesoPresente, somaPeso, viagens;

    scanf("%d", &nTestes);
    for (i=0; i < nTestes; i = i+1){
        scanf("%d %d", &nViagens, &pesoMax);
        somaPeso = 0;
        viagens = 1;
        for (j=0; j < nViagens; j = j+1){
            scanf("%d", &pesoPresente);
            somaPeso = somaPeso + pesoPresente;
            if (somaPeso > pesoMax){
                viagens = viagens +1;
                somaPeso = pesoPresente;
            }
        }
    
        printf("%d\n", viagens);

    
    }


    return 0;
}