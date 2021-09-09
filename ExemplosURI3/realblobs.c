#include <stdio.h>
#include <stdlib.h>

int main(){
    int testes, dias, i;
    float comida;
    
    scanf("%d", &testes);

        for(i = 0; i < testes; i++){
            scanf("%f", &comida);
            dias = 0;
                while(comida > 1){
                    comida = comida / 2;
                    dias++;
                }
                printf("%d dias\n", dias);
        }
    
    return 0;
}