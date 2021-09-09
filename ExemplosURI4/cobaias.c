#include <stdio.h>

int main (){
    int t, valor;
    int conts=0, contc=0, contr=0, totalcobaias=0;
    float percs=0, percc=0, percr=0;
    char cobaias;

    scanf("%d", &t);

    while (t--){
        
        scanf("%d%*c%c", &valor, &cobaias);
        switch (cobaias){
            case 'S' :
               conts += valor;
            break;
            
            case 'C' :
                contc += valor;
            break;
                
            case 'R' :
                contr += valor;
            break;    
        }
    }

        totalcobaias= conts+contr+contc;
        printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", totalcobaias, contc, contr, conts);
        

        percs = conts * 100.0 / totalcobaias;
        percc = contc * 100.0 / totalcobaias;
        percr = contr * 100.0 / totalcobaias;
        printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", percc, percr, percs);



    return 0;
}