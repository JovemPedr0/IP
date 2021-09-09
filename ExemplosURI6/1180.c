#include <stdio.h>

int IndiceMenor(int ar[], int t){
    int i, menor=0;

    for (i = 1; i < t; i++){
        if(ar[i] < ar[menor]){
            menor = i;
        }    
    }

    return menor;
}

int main (){
    int i, nCasos, ar[1000], MenorValor;

    scanf("%d", &nCasos);

    for(i = 0; i < nCasos; i++){
        scanf("%d", &ar[i]);
    }

    MenorValor = IndiceMenor(ar, nCasos);
    printf("Menor valor: %d\n", ar[MenorValor]);
    printf("Posicao: %d\n", MenorValor);
        
    
    return 0;
}