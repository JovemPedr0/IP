#include <stdio.h>

int main(){
    int nTestes, Casa;
    unsigned int nCasasGraos;
    unsigned long long int GraosEmKg;

    scanf("%d", &nTestes);
    
    while (nTestes--){
        GraosEmKg = 0;

        scanf("%u", &nCasasGraos);

        unsigned long long int ValorCasa[nCasasGraos], soma = 1;

        ValorCasa[0] = 1;

        for (Casa = 1; Casa < nCasasGraos; Casa++){
            ValorCasa[Casa] = ValorCasa[Casa-1] *2;
            soma += ValorCasa[Casa];
        }
        
        GraosEmKg = soma/12000;
        printf("%llu kg\n", GraosEmKg);
    }
    
    return 0;
}