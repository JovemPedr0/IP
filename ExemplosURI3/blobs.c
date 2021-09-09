#include <stdio.h>

int main(){
    int nt, dias;
    float comida;
    
    scanf("%d", &nt);

    for(int i = 0; i < nt; i++){
            scanf("%f", &comida);
            dias = 0;
            while(comida > 1){
                    comida /= 2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }
    
    return 0;
}