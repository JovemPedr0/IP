#include <stdio.h>

int main(){
    int nCasos, NumeroBota, i, BotasEsquerdas[61] = {0}, BotasDireitas[61] = {0}, CasalBotas = 0, j, maior, menor;
    char LadoBota;

    while(scanf("%d", &nCasos) != EOF){

        CasalBotas = maior = 0;
        menor = 1111;

        for (i = 30; i <= 60; i++){
            BotasEsquerdas[i] = BotasDireitas[i] = 0;
        }
    
        for (i = 0; i < nCasos; i++){

            scanf("%d %c", &NumeroBota, &LadoBota);
            if (NumeroBota > maior){
                maior = NumeroBota;
            }
            if (NumeroBota < menor){
                menor = NumeroBota;
            }
            
            if(LadoBota == 'E'){
                BotasEsquerdas[NumeroBota]++;
            }
            if(LadoBota == 'D'){
                BotasDireitas[NumeroBota]++;
            }
        }
        
        for (i = menor; i <= maior; i++){
            if (BotasEsquerdas[i] > 0 && BotasDireitas[i] > 0){
                if(BotasEsquerdas[i] >= BotasDireitas[i]){
                    CasalBotas = CasalBotas + BotasDireitas[i];
                }else{
                    CasalBotas = CasalBotas + BotasEsquerdas[i];
                }
            }    
        }

        printf("%d\n", CasalBotas);
    
    }    
    return 0;
}