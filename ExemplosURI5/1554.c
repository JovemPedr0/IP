#include <stdio.h>

unsigned long Distancia(int xBranca, int yBranca, int xBola, int yBola){
    int nX, nY;

    nX = xBola - xBranca;
    nY = yBola - yBranca;

    return (nX*nX + nY*nY);
}

int main(){
    int nTestes, nBolasDisp; 
    int xposBranca, yposBranca;
    int xposBolas, yposBolas;
    unsigned long dist, Novadist;
    int bola, i;

    scanf("%d", &nTestes);
    
    while(nTestes--){

        scanf("%d", &nBolasDisp);
        scanf("%d %d", &xposBranca, &yposBranca);
        
        scanf("%d %d", &xposBolas, &yposBolas);
        dist = Distancia(xposBranca, yposBranca, xposBolas, yposBolas);
        bola = i = 1;

        while (--nBolasDisp){
            i++;

            scanf("%d %d", &xposBolas,  &yposBolas);
            Novadist = Distancia(xposBranca, yposBranca, xposBolas, yposBolas);

            if(Novadist < dist){
                bola = i;
                dist = Novadist;
            }

        }
        
        printf("%d\n", bola);

    }

    return 0;
}